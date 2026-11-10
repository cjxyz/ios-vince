#!/bin/bash
# Start a workflow on the arm64 macOS runners and fall back to the Intel ones if no arm64 runner picks the job up
# within WAIT seconds (GitHub has no queue timeout or runner fallback of its own: runs-on is fixed per job and
# timeout-minutes does not count the time in the queue).
#
#   tools/ci-run.sh [WORKFLOW] [WAIT]          (defaults: xnu-vince, 60)
#
# WORKFLOW is xnu-vince, mesa or vincegl (all take the runner input). The run is on the current branch of
# cjxyz/ios-vince; the arm64 run is cancelled before the Intel one starts. Prints the id of the run that went ahead.
# Uses the cjxyz account's token from gh (the active gh account may be another one).
set -euo pipefail

wf=${1:-xnu-vince}
wait_s=${2:-60}
repo=cjxyz/ios-vince
ref=$(git -C "$(dirname "$0")/.." branch --show-current)
export GH_TOKEN=${GH_TOKEN:-$(gh auth token --user cjxyz)}

# The id of the newest run of $wf on $ref created at or after $1 (UTC, ISO 8601), or nothing yet.
newest_run() {
	gh run list -R "$repo" -w "$wf" -b "$ref" -L 5 --json databaseId,createdAt \
		-q "[.[] | select(.createdAt >= \"$1\")] | sort_by(.createdAt) | last | .databaseId // empty"
}

start() {
	local runner=$1 since id=
	since=$(date -u +%Y-%m-%dT%H:%M:%SZ)
	gh workflow run "$wf" -R "$repo" --ref "$ref" -f runner="$runner" >/dev/null
	for _ in $(seq 1 30); do
		id=$(newest_run "$since")
		[[ -n $id ]] && break
		sleep 2
	done
	[[ -n $id ]] || { echo "no run of $wf showed up" >&2; exit 1; }
	echo "$id"
}

id=$(start macos-15)
echo "$wf: run $id on macos-15, waiting up to ${wait_s}s for a runner" >&2
for ((t = 0; t < wait_s; t += 5)); do
	state=$(gh run view "$id" -R "$repo" --json jobs -q '[.jobs[].status] | join(",")')
	if [[ $state == *in_progress* || $state == *completed* ]]; then
		echo "$wf: arm64 runner picked it up ($id)" >&2
		echo "$id"
		exit 0
	fi
	sleep 5
done

echo "$wf: still queued after ${wait_s}s, moving to macos-15-intel" >&2
gh run cancel "$id" -R "$repo" >/dev/null || true
id=$(start macos-15-intel)
echo "$wf: run $id on macos-15-intel" >&2
echo "$id"

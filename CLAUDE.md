# ios-vince (fork cjxyz)

Port de iOS 16 (XNU-8796 + userland del iPhone X) al Xiaomi Redmi 5 Plus "vince" (MSM8953, 8× Cortex-A53).
Fork de arabaci0711-ux/ios-vince, que a su vez deriva de dipa-studio/ios-sweet.

Estado (2026-11-10): iOS 16.7.16 llega a la pantalla de bloqueo con 7 núcleos y touch (`artifacts/vince-boot-smp.img`,
raíz HFS+ con journal en `userdata`). Detalle en `docs/vince/PROGRESS.md`.

Lee primero:
- `docs/vince/CONTEXT.md`: objetivo, linaje, decisiones y referencias.
- `docs/vince/HARDWARE.md`: direcciones, IRQ y GPIO sacados del kernel stock en `../vince-stock`.
- `docs/vince/BUILD.md`: cómo compilar (XNU en GitHub Actions, shim/ADT/boot.img en WSL) y arrancar.
- `docs/vince/PROGRESS.md`: estado, pendientes y bitácora.

Reglas:
- Cada cambio de parche o prueba en el teléfono termina con una entrada en `docs/vince/PROGRESS.md` y un commit.
- XNU solo se compila en CI (`.github/workflows/xnu-vince.yml`); los parches viven en `xnu/patches/NNNN-*.patch`,
  numerados y aplicados en orden.
- Arrancar siempre con `fastboot boot`, nunca flashear `boot`.
- Rama de trabajo: `vince-port` (parte de `c3c7b7f`, último build verde de upstream). CI manual: `gh workflow run xnu-vince --ref vince-port`.
- Remotos: `origin` = cjxyz/ios-vince, `upstream` = arabaci0711-ux/ios-vince.

## Commits
Identidad: `cjxyz <cjxyz776@gmail.com>` (git config local del repo). El push usa siempre la cuenta gh `cjxyz` gracias a un
credential helper local (`gh auth token --user cjxyz`), aunque la cuenta activa de gh sea otra; no cambiar la cuenta activa.
Mensajes **en inglés**, con esta estructura:
```
type(scope): imperative summary

Body explaining what changes and why (the problem, how it was found,
what the fix does), wrapped at ~76 columns. Bullets are fine for
several independent points. Refer to other commits of a series by
phase, not by hash.

Co-Authored-By: ...
```
- `type`: feat, fix, perf, refactor, docs, ci, chore, test.
- `scope`: zona del repo: `shim`, `tools`, `docs`, `ci`, `userland`, o el parche XNU (`xnu/0090`, `xnu/lse`).
- Verbo en imperativo: "add", "fix", "disable"; no "adds" ni "added".
- Por ahora no se usa indicador de serie `[series n/total]`.
- Solo los commits triviales pueden ir sin cuerpo.

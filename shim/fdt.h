#pragma once
#include <stdint.h>

/* Read a u32/u64 (cell-size agnostic) property of /chosen. Returns 0 if absent. */
int fdt_chosen_u64(uintptr_t fdt, const char *prop, uint64_t *out);
/*
 * Ranges of the top-level memory node(s) as LK filled them in (#address-cells = #size-cells = 2, as on MSM8953).
 * Fills up to max base/size pairs and returns how many were found.
 */
int fdt_memory(uintptr_t fdt, uint64_t *base, uint64_t *size, int max);

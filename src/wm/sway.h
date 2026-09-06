// SPDX-License-Identifier: AGPL-3.0-or-later
// Copyright (C) 2026 creations

#ifndef GRABIT_WM_SWAY_H
#define GRABIT_WM_SWAY_H

#include <stdbool.h>
#include <stddef.h>

struct rect;

bool grabit_sway_present(void);
int grabit_sway_active_window_rect(struct rect *out);
int grabit_sway_windows(struct rect **out, size_t *n_out);
char *grabit_sway_focused_output(void);

#endif

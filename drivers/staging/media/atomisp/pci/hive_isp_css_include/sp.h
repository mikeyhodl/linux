/* SPDX-License-Identifier: GPL-2.0 */
/*
 * Support for Intel Camera Imaging ISP subsystem.
 * Copyright (c) 2015, Intel Corporation.
 */

#ifndef __SP_H_INCLUDED__
#define __SP_H_INCLUDED__

/*
 * This file is included on every cell {SP,ISP,host} and on every system
 * that uses the SP cell. It defines the API to DLI bridge
 *
 * System and cell specific interfaces and inline code are included
 * conditionally through Makefile path settings.
 *
 *  - .        system and cell agnostic interfaces, constants and identifiers
 *	- public:  system agnostic, cell specific interfaces
 *	- private: system dependent, cell specific interfaces & inline implementations
 *	- global:  system specific constants and identifiers
 *	- local:   system and cell specific constants and identifiers
 */

#include "system_local.h"
#include "sp_local.h"

#ifndef __INLINE_SP__
#define STORAGE_CLASS_SP_H extern
#define STORAGE_CLASS_SP_C
#include "sp_public.h"
#else  /* __INLINE_SP__ */
#define STORAGE_CLASS_SP_H static inline
#define STORAGE_CLASS_SP_C static inline
#include "sp_private.h"
#endif /* __INLINE_SP__ */

#endif /* __SP_H_INCLUDED__ */

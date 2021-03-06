/*
 * Copyright (c) 2017, ARM Limited and Contributors. All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#ifndef __CORTEX_A9_H__
#define __CORTEX_A9_H__

/*******************************************************************************
 * Cortex-A9 midr with version/revision set to 0
 ******************************************************************************/
#define CORTEX_A9_MIDR			0x410FC090

/*******************************************************************************
 * CPU Auxiliary Control register specific definitions.
 ******************************************************************************/
#define CORTEX_A9_ACTLR_SMP_BIT		(1 << 6)
#define CORTEX_A9_ACTLR_FLZW_BIT	(1 << 3)

#if defined(ARMV7_CORTEX_A_ACTLR_FLZW_BIT) && \
	ARMV7_CORTEX_A_ACTLR_FLZW_BIT != CORTEX_A9_ACTLR_FLZW_BIT
#error Cortex-A9 ACTLR field FLZW does not match
#endif

/*******************************************************************************
 * CPU Power Control Register
 ******************************************************************************/
#define PCR		p15, 0, c15, c0, 0

#ifndef __ASSEMBLY__
#include <arch_helpers.h>
DEFINE_COPROCR_RW_FUNCS(pcr, PCR)
#endif

#endif /* __CORTEX_A9_H__ */

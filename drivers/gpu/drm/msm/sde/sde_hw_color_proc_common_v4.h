/* Copyright (c) 2017, The Linux Foundation. All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 and
 * only version 2 as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 */
#ifndef _SDE_HW_COLOR_PROC_COMMON_V4_H_
#define _SDE_HW_COLOR_PROC_COMMON_V4_H_

#define GAMUT_TABLE_SEL_OFF 0x4
#define GAMUT_UPPER_COLOR_OFF 0x8
#define GAMUT_LOWER_COLOR_OFF 0xc
#define GAMUT_SCALEA_OFFSET_OFF 0x10
#define GAMUT_SCALEB_OFFSET_OFF 0xe0
#define GAMUT_TABLE0_SEL BIT(12)
#define GAMUT_MAP_EN BIT(1)
#define GAMUT_EN BIT(0)
#define GAMUT_MODE_13B_OFF 640
#define GAMUT_MODE_5_OFF 1248

enum {
	gamut_mode_17 = 0,
	gamut_mode_5,
	gamut_mode_13a,
	gamut_mode_13b,
};

#define GC_C0_OFF 0x4
#define GC_C0_INDEX_OFF 0x8
#define GC_8B_ROUND_EN BIT(1)
#define GC_EN BIT(0)
#define GC_TBL_NUM 3
#define GC_LUT_SWAP_OFF 0x1c

#define IGC_DITHER_OFF 0x7e0
#define IGC_OPMODE_OFF 0x0
#define IGC_C0_OFF 0x0
#define IGC_DATA_MASK (BIT(12) - 1)
#define IGC_DSPP_SEL_MASK_MAX (BIT(4) - 1)
#define IGC_DSPP_SEL_MASK(n) \
	((IGC_DSPP_SEL_MASK_MAX & ~(1 << (n))) << 28)
#define IGC_INDEX_UPDATE BIT(25)
#define IGC_EN BIT(0)
#define IGC_DIS 0
#define IGC_DITHER_DATA_MASK (BIT(4) - 1)

#define PCC_NUM_PLANES 3
#define PCC_NUM_COEFF 11
#define PCC_EN BIT(0)
#define PCC_DIS 0
#define PCC_C_OFF 0x4
#define PCC_R_OFF 0x10
#define PCC_G_OFF 0x1c
#define PCC_B_OFF 0x28
#define PCC_RG_OFF 0x34
#define PCC_RB_OFF 0x40
#define PCC_GB_OFF 0x4c
#define PCC_RGB_OFF 0x58
#define PCC_RR_OFF 0x64
#define PCC_GG_OFF 0x70
#define PCC_BB_OFF 0x7c

#define PA_EN BIT(20)
#define PA_HUE_EN BIT(25)
#define PA_SAT_EN BIT(26)
#define PA_VAL_EN BIT(27)
#define PA_CONT_EN BIT(28)

#define PA_SIXZONE_HUE_EN BIT(29)
#define PA_SIXZONE_SAT_EN BIT(30)
#define PA_SIXZONE_VAL_EN BIT(31)

#define PA_HIST_EN BIT(16)

#define PA_SKIN_EN BIT(7)
#define PA_FOL_EN BIT(6)
#define PA_SKY_EN BIT(5)

#define PA_HUE_MASK (BIT(12) - 1)
#define PA_SAT_MASK (BIT(16) - 1)
#define PA_VAL_MASK (BIT(8) - 1)
#define PA_CONT_MASK (BIT(8) - 1)

#define PA_HUE_OFF 0x1c
#define PA_SAT_OFF 0x20
#define PA_VAL_OFF 0x24
#define PA_CONT_OFF 0x28
#define PA_PWL_HOLD_OFF 0x40

#define PA_DISABLE_REQUIRED(x) \
	!((x) & (PA_SKIN_EN | PA_SKY_EN | \
	PA_FOL_EN | PA_HUE_EN | \
	PA_SAT_EN | PA_VAL_EN | \
	PA_CONT_EN | PA_HIST_EN | \
	PA_SIXZONE_HUE_EN | PA_SIXZONE_SAT_EN | \
	PA_SIXZONE_VAL_EN))

#define SIXZONE_ADJ_CURVE_P1_OFF 0x4
#define SIXZONE_THRESHOLDS_OFF 0x8

#endif /* _SDE_HW_COLOR_PROC_COMMON_V4_H_ */

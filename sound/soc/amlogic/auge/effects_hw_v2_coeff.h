/*
 * sound/soc/amlogic/auge/effects_hw_v2_coeff.h
 *
 * Copyright (C) 2018 Amlogic, Inc. All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for
 * more details.
 *
 */

#ifndef __EFFECTS_HW_V2_COEFF_H__
#define __EFFECTS_HW_V2_COEFF_H__

#define EQ_BAND                  (20)
#define FILTER_PARAM_SIZE        (5)
#define DC_CUT_FILTER_RAM_ADD    (0)
#define DC_CUT_FILTER_SIZE       (5)
#define EQ_FILTER_RAM_ADD        (5)
#define EQ_FILTER_SIZE_CH        (100)
#define EQ_FILTER_SIZE           (200)
#define CROSSOVER_FILTER_RAM_ADD (205)
#define CROSSOVER_FILTER_SIZE    (20)
#define CROSSOVER_FILTER_BAND    (4)

#define FILTER_PARAM_BYTE        (66) /*"0x%8.8x "*/

/* 20Hz, highpass filter */
static unsigned int DC_CUT_COEFF[DC_CUT_FILTER_SIZE] = {
	0x007fc365, 0x03007935, 0x007fc365, 0x03007952, 0x007f86e7
};

static unsigned int EQ_COEFF[EQ_FILTER_SIZE] = {
	/*Ch1 EQ 0~19*/
	/*0~9 band*/
	0x800000, 0x0, 0x0, 0x0, 0x0,
	0x800000, 0x0, 0x0, 0x0, 0x0,
	0x800000, 0x0, 0x0, 0x0, 0x0,
	0x800000, 0x0, 0x0, 0x0, 0x0,
	0x800000, 0x0, 0x0, 0x0, 0x0,
	0x800000, 0x0, 0x0, 0x0, 0x0,
	0x800000, 0x0, 0x0, 0x0, 0x0,
	0x800000, 0x0, 0x0, 0x0, 0x0,
	0x800000, 0x0, 0x0, 0x0, 0x0,
	0x800000, 0x0, 0x0, 0x0, 0x0,
	/*10~19 band*/
	0x800000, 0x0, 0x0, 0x0, 0x0,
	0x800000, 0x0, 0x0, 0x0, 0x0,
	0x800000, 0x0, 0x0, 0x0, 0x0,
	0x800000, 0x0, 0x0, 0x0, 0x0,
	0x800000, 0x0, 0x0, 0x0, 0x0,
	0x800000, 0x0, 0x0, 0x0, 0x0,
	0x800000, 0x0, 0x0, 0x0, 0x0,
	0x800000, 0x0, 0x0, 0x0, 0x0,
	0x800000, 0x0, 0x0, 0x0, 0x0,
	0x800000, 0x0, 0x0, 0x0, 0x0,
	/*Ch2 EQ 0~19*/
	/*0~9 band*/
	0x800000, 0x0, 0x0, 0x0, 0x0,
	0x800000, 0x0, 0x0, 0x0, 0x0,
	0x800000, 0x0, 0x0, 0x0, 0x0,
	0x800000, 0x0, 0x0, 0x0, 0x0,
	0x800000, 0x0, 0x0, 0x0, 0x0,
	0x800000, 0x0, 0x0, 0x0, 0x0,
	0x800000, 0x0, 0x0, 0x0, 0x0,
	0x800000, 0x0, 0x0, 0x0, 0x0,
	0x800000, 0x0, 0x0, 0x0, 0x0,
	0x800000, 0x0, 0x0, 0x0, 0x0,
	/*10~19 band*/
	0x800000, 0x0, 0x0, 0x0, 0x0,
	0x800000, 0x0, 0x0, 0x0, 0x0,
	0x800000, 0x0, 0x0, 0x0, 0x0,
	0x800000, 0x0, 0x0, 0x0, 0x0,
	0x800000, 0x0, 0x0, 0x0, 0x0,
	0x800000, 0x0, 0x0, 0x0, 0x0,
	0x800000, 0x0, 0x0, 0x0, 0x0,
	0x800000, 0x0, 0x0, 0x0, 0x0,
	0x800000, 0x0, 0x0, 0x0, 0x0,
	0x800000, 0x0, 0x0, 0x0, 0x0,
};

/*fiter1 fc: 150Hz; fiter2 fc: 5KHz*/
static unsigned int CROSSOVER_COEFF[CROSSOVER_FILTER_SIZE] = {
	/*low-pass filter1*/
	0x00000319, 0x00000632, 0x00000319, 0x0304fa54, 0x007b1210,
	/*high-pass filter1*/
	0x007d85ef, 0x0304f422, 0x007d85ef, 0x0304fa54, 0x007b1210,
	/*low-pass filter2*/
	0x0008388a, 0x00107113, 0x0008388a, 0x0381c139, 0x001f20ee,
	/*high-pass filter2*/
	0x004757ed, 0x03715025, 0x004757ed, 0x0381c139, 0x001f20ee,
};

#define AED_SINGLE_BAND_DRC_SIZE (10)
#define AED_MULTIBAND_DRC_BANDS  (3)
#define AED_MULTIBAND_DRC_SIZE   (30)
#define MULTIBAND_DRC_PARAM_BYTE (120) /*"0x%8.8x "*/

static unsigned int multiband_drc_coeff[AED_MULTIBAND_DRC_SIZE] = {
	/*RMS:5ms, ATTACK:10ms, RELEASE:100ms, THD: 0dB, K = 0*/
	0x00012aa0,  /* Low RMS coeff0 */
	0x007ed560,  /* Low RMS coeff1 */
	0x00000eff,  /* Low RELEASE coeff0 */
	0x007ff101,  /* Low RELEASE coeff1 */
	0x000095a8,  /* Low ATTACK coeff0 */
	0x007f6a58,  /* Low ATTACK coeff1 */
	0x00000000,  /* Low THD0 coeff */
	0x00000000,  /* Low K0 coeff */
	0x00040000,  /* Low GAIN */
	0x00000000,  /* Low OFFSET coeff*/

	/*RMS:2ms, ATTACK:5ms, RELEASE:100ms, THD: 0dB, K = 0*/
	0x0002e578,  /* Mid RMS coeff0 */
	0x007d1a88,  /* Mid RMS coeff1 */
	0x00000eff,  /* Mid RELEASE coeff0 */
	0x007ff101,  /* Mid RELEASE coeff1 */
	0x00012aa0,  /* Mid ATTACK coeff0 */
	0x007ed560,  /* Mid ATTACK coeff1 */
	0x00000000,  /* Mid THD0 coeff */
	0x00000000,  /* Mid K0 coeff */
	0x00000000,  /* Mid OFFSET coeff*/
	0x00040000,  /* Mid GAIN */

	/*RMS:1ms, ATTACK:1ms, RELEASE:100ms, THD: 0dB, K = 0*/
	0x0005ba29,  /* High RMS coeff0 */
	0x007a45d7,  /* High RMS coeff1 */
	0x00000eff,  /* High RELEASE coeff0 */
	0x007ff101,  /* High RELEASE coeff1 */
	0x0005ba29,  /* High ATTACK coeff0 */
	0x007a45d7,  /* High ATTACK coeff1 */
	0x00000000,  /* High THD0 coeff */
	0x00000000,  /* High K0 coeff */
	0x00000000,  /* High OFFSET coeff*/
	0x00040000,  /* High GAIN */
};

#define AED_FULLBAND_DRC_SIZE        (17)
#define AED_FULLBAND_DRC_BYTES       (70)
#define AED_FULLBAND_DRC_OFFSET      (6)
#define AED_FULLBAND_DRC_GROUP_SIZE  (3)

/*K0 = 0dB; THD0 = 0; K1 = 1.0; THD1 = -100dB*/
/*ATTACK0:2ms, RELEASE0:20ms*/
/*ATTACK1:100ms, RELEASE1:100ms*/
/*RMS:1ms*/
/*delay: 144 sample max:255*/
static int fullband_drc_coeff[AED_FULLBAND_DRC_SIZE] = {
	0x00004aea,	/* RELEASE_COEF00 */
	0x007fb516,	/* RELEASE_COEF01 */
	0x0002e578,	/* ATTACK_COEF00 */
	0x007d1a88,	/* ATTACK_COEF01 */
	0x00000000,	/* THD0 */
	0x00000000,	/* K0 */

	0x00000eff,	/* RELEASE_COEF10 */
	0x007ff101,	/* RELEASE_COEF11 */
	0x00000eff,	/* ATTACK_COEF10 */
	0x007ff101,	/* ATTACK_COEF11 */
	0xce000000,	/* THD1 */
	0x00040000,	/* K2 */

	0x0005ba29,	/* RMS coeff0 */
	0x007a45d7,	/* RMS coeff1 */
	0x00000090,	/* Delay time*/
	0xdd000000,	/* THD_OUT0 */
	0x00040000,	/* K1 */
};

#endif

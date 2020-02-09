/* Copyright (c) 2020 Pavel Dubrova, <pashadubrova@gmail.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 and
 * only version 2 as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE., See the
 * GNU General Public License for more details.
 *
 */

#include "mpm.h"

const struct mpm_pin mpm_msm8974_gic_chip_data[] = {
	{2, 216}, /* tsens_upper_lower_int */
	{47, 165}, /* usb30_hs_phy_irq */
	{50, 172}, /* usb1_hs_async_wakeup_irq */
	{53, 104}, /* mdss_irq */
	{62, 222}, /* ee0_krait_hlos_spmi_periph_irq */
	{-1},
};

const struct mpm_pin mpm_msm8974_gpio_chip_data[] = {
	{3, 102},
	{4, 1},
	{5, 5},
	{6, 9},
	{7, 18},
	{8, 20},
	{9, 24},
	{10, 27},
	{11, 28},
	{12, 34},
	{13, 35},
	{14, 37},
	{15, 42},
	{16, 44},
	{17, 46},
	{18, 50},
	{19, 54},
	{20, 59},
	{21, 61},
	{22, 62},
	{23, 64},
	{24, 65},
	{25, 66},
	{26, 67},
	{27, 68},
	{28, 71},
	{29, 72},
	{30, 73},
	{31, 74},
	{32, 75},
	{33, 77},
	{34, 79},
	{35, 80},
	{36, 82},
	{37, 86},
	{38, 92},
	{39, 93},
	{40, 95},
	{41, 144},
};
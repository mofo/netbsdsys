/* $Id: imx23_digctlreg.h,v 1.2 2013/10/07 17:36:40 matt Exp $ */

/*
 * Copyright (c) 2012 The NetBSD Foundation, Inc.
 * All rights reserved.
 *
 * This code is derived from software contributed to The NetBSD Foundation
 * by Petri Laakso.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY THE NETBSD FOUNDATION, INC. AND CONTRIBUTORS
 * ``AS IS'' AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED
 * TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
 * PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL THE FOUNDATION OR CONTRIBUTORS
 * BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 */

#ifndef _ARM_IMX_IMX23_DIGCTLREG_H_
#define _ARM_IMX_IMX23_DIGCTLREG_H_

#include <sys/cdefs.h>

#define HW_DIGCTL_BASE 0x8001C000
#define HW_DIGCTL_SIZE 0x2000

/*
 * DIGCTL Control Register.
 */
#define HW_DIGCTL_CTRL		0x000
#define HW_DIGCTL_CTRL_SET	0x004
#define HW_DIGCTL_CTRL_CLR	0x008
#define HW_DIGCTL_CTRL_TOG	0x00C

#define HW_DIGCTL_CTRL_RSVD3			__BIT(31)
#define HW_DIGCTL_CTRL_XTAL24M_GATE		__BIT(30)
#define HW_DIGCTL_CTRL_TRAP_IRQ			__BIT(29)
#define HW_DIGCTL_CTRL_RSVD2			__BITS(28, 27)
#define HW_DIGCTL_CTRL_CACHE_BIST_TMODE		__BIT(26)
#define HW_DIGCTL_CTRL_LCD_BIST_CLKEN		__BIT(25)
#define HW_DIGCTL_CTRL_LCD_BIST_START		__BIT(24)
#define HW_DIGCTL_CTRL_DCP_BIST_CLKEN		__BIT(23)
#define HW_DIGCTL_CTRL_DCP_BIST_START		__BIT(22)
#define HW_DIGCTL_CTRL_ARM_BIST_CLKEN		__BIT(21)
#define HW_DIGCTL_CTRL_USB_TESTMODE		__BIT(20)
#define HW_DIGCTL_CTRL_ANALOG_TESTMODE		__BIT(19)
#define HW_DIGCTL_CTRL_DIGITAL_TESTMODE		__BIT(18)
#define HW_DIGCTL_CTRL_ARM_BIST_START		__BIT(17)
#define HW_DIGCTL_CTRL_UART_LOOPBACK		__BIT(16)
#define HW_DIGCTL_CTRL_SAIF_LOOPBACK		__BIT(15)
#define HW_DIGCTL_CTRL_SAIF_CLKMUX_SEL		__BITS(14, 13)
#define HW_DIGCTL_CTRL_SAIF_CLKMST_SEL		__BIT(12)
#define HW_DIGCTL_CTRL_SAIF_ALT_BITCLK_SEL	__BIT(11)
#define HW_DIGCTL_CTRL_RSVD1			__BIT(10)
#define HW_DIGCTL_CTRL_SY_ENDIAN		__BIT(9)
#define HW_DIGCTL_CTRL_SY_SFTRST		__BIT(8)
#define HW_DIGCTL_CTRL_SY_CLKGATE		__BIT(7)
#define HW_DIGCTL_CTRL_USE_SERIAL_JTAG		__BIT(6)
#define HW_DIGCTL_CTRL_TRAP_IN_RANGE		__BIT(5)
#define HW_DIGCTL_CTRL_TRAP_ENABLE		__BIT(4)
#define HW_DIGCTL_CTRL_DEBUG_DISABLE		__BIT(3)
#define HW_DIGCTL_CTRL_USB_CLKGATE		__BIT(2)
#define HW_DIGCTL_CTRL_JTAG_SHIELD		__BIT(1)
#define HW_DIGCTL_CTRL_LATCH_ENTROPY		__BIT(0)

/*
 * DIGCTL Status Register.
 */
#define HW_DIGCTL_STATUS	0x010
#define HW_DIGCTL_STATUS_SET	0x014
#define HW_DIGCTL_STATUS_CLR	0x018
#define HW_DIGCTL_STATUS_TOG	0x01C

#define HW_DIGCTL_STATUS_USB_HS_PRESENT		__BIT(31)
#define HW_DIGCTL_STATUS_USB_OTG_PRESENT	__BIT(30)
#define HW_DIGCTL_STATUS_USB_HOST_PRESENT	__BIT(29)
#define HW_DIGCTL_STATUS_USB_DEVICE_PRESENT	__BIT(28)
#define HW_DIGCTL_STATUS_RSVD2			__BITS(27, 11)
#define HW_DIGCTL_STATUS_DCP_BIST_FAIL		__BIT(10)
#define HW_DIGCTL_STATUS_DCP_BIST_PASS		__BIT(9)
#define HW_DIGCTL_STATUS_DCP_BIST_DONE		__BIT(8)
#define HW_DIGCTL_STATUS_LCD_BIST_FAIL		__BIT(7)
#define HW_DIGCTL_STATUS_LCD_BIST_PASS		__BIT(6)
#define HW_DIGCTL_STATUS_LCD_BIST_DONE		__BIT(5)
#define HW_DIGCTL_STATUS_JTAG_IN_USE		__BIT(4)
#define HW_DIGCTL_STATUS_PACKAGE_TYPE		__BITS(3, 1)
#define HW_DIGCTL_STATUS_WRITTEN		__BIT(0)

/*
 * Free-Running HCLK Counter Register.
 */
#define HW_DIGCTL_HCLKCOUNT	0x020
#define HW_DIGCTL_HCLKCOUNT_SET	0x024
#define HW_DIGCTL_HCLKCOUNT_CLR	0x028
#define HW_DIGCTL_HCLKCOUNT_TOG	0x02C

#define HW_DIGCTL_HCLKCOUNT_COUNT	__BITS(31, 0)

/*
 * On-Chip RAM Control Register.
 */
#define HW_DIGCTL_RAMCTRL	0x030
#define HW_DIGCTL_RAMCTRL_SET	0x034
#define HW_DIGCTL_RAMCTRL_CLR	0x038
#define HW_DIGCTL_RAMCTRL_TOG	0x03C

#define HW_DIGCTL_RAMCTRL_RSVD1		__BITS(31, 12)
#define HW_DIGCTL_RAMCTRL_SPEED_SELECT	__BITS(11, 8)
#define HW_DIGCTL_RAMCTRL_RSVD0		__BITS(7, 1)
#define HW_DIGCTL_RAMCTRL_RAM_REPAIR_EN	__BIT(0)

/*
 * On-Chip RAM Repair Address Register.
 */
#define HW_DIGCTL_RAMREPAIR	0x040
#define HW_DIGCTL_RAMREPAIR_SET	0x044
#define HW_DIGCTL_RAMREPAIR_CLR	0x048
#define HW_DIGCTL_RAMREPAIR_TOG	0x04C

#define HW_DIGCTL_RAMREPAIR_RSVD1	__BITS(31, 16)
#define HW_DIGCTL_RAMREPAIR_ADDR	__BITS(15, 0)

/*
 * On-Chip ROM Control Register.
 */
#define HW_DIGCTL_ROMCTRL	0x050
#define HW_DIGCTL_ROMCTRL_SET	0x054
#define HW_DIGCTL_ROMCTRL_CLR	0x058
#define HW_DIGCTL_ROMCTRL_TOG	0x05C

#define HW_DIGCTL_ROMCTRL_RSVD0		__BITS(31, 4)
#define HW_DIGCTL_ROMCTRL_RD_MARGIN	__BITS(3, 0)

/*
 * Software Write-Once Register.
 */
#define HW_DIGCTL_WRITEONCE	0x060

#define HW_DIGCTL_WRITEONCE_BITS	__BITS(31, 0)

/*
 * Entropy Register.
 */
#define HW_DIGCTL_ENTROPY	0x090

#define HW_DIGCTL_ENTROPY_VALUE	__BITS(31, 0)

/*
 * Entropy Latched Register.
 */
#define HW_DIGCTL_ENTROPY_LATCHED	0x0A0

#define HW_DIGCTL_ENTROPY_VALUE	__BITS(31, 0)

/*
 * SJTAG Debug Register.
 */
#define HW_DIGCTL_SJTAGDBG	0x0B0
#define HW_DIGCTL_SJTAGDBG_SET	0x0B4
#define HW_DIGCTL_SJTAGDBG_CLR	0x0B8
#define HW_DIGCTL_SJTAGDBG_TOG	0x0BC

#define HW_DIGCTL_SJTAGDBG_RSVD2		__BITS(31, 27)
#define HW_DIGCTL_SJTAGDBG_SJTAG_STATE		__BITS(26, 16)
#define HW_DIGCTL_SJTAGDBG_RSVD1		__BITS(15, 11)
#define HW_DIGCTL_SJTAGDBG_SJTAG_TDO		__BIT(10)
#define HW_DIGCTL_SJTAGDBG_SJTAG_TDI		__BIT(9)
#define HW_DIGCTL_SJTAGDBG_SJTAG_MODE		__BIT(8)
#define HW_DIGCTL_SJTAGDBG_DELAYED_ACTIVE	__BITS(7, 4)
#define HW_DIGCTL_SJTAGDBG_ACTIVE		__BIT(3)
#define HW_DIGCTL_SJTAGDBG_SJTAG_PIN_STATE	__BIT(2)
#define HW_DIGCTL_SJTAGDBG_SJTAG_DEBUG_DATA	__BIT(1)
#define HW_DIGCTL_SJTAGDBG_SJTAG_DEBUG_OE	__BIT(0)

/*
 * Digital Control Microseconds Counter Register.
 */
#define HW_DIGCTL_MICROSECONDS		0x0C0
#define HW_DIGCTL_MICROSECONDS_SET	0x0C4
#define HW_DIGCTL_MICROSECONDS_CLR	0x0C8
#define HW_DIGCTL_MICROSECONDS_TOG	0x0CC

#define HW_DIGCTL_MICROSECONDS_VALUE	__BITS(31, 0)

/*
 * Digital Control Debug Read Test Register.
 */
#define HW_DIGCTL_DBGRD	0x0D0

#define HW_DIGCTL_DBGRD_COMPLEMENT	__BITS(31, 0)

/*
 * Digital Control Debug Register.
 */
#define HW_DIGCTL_DBG	0x0E0

#define HW_DIGCTL_DBG_VALUE	__BITS(31, 0)

/*
 * SRAM BIST Control and Status Register.
 */
#define HW_DIGCTL_OCRAM_BIST_CSR	0x0F0
#define HW_DIGCTL_OCRAM_BIST_CSR_SET	0x0F4
#define HW_DIGCTL_OCRAM_BIST_CSR_CLR	0x0F8
#define HW_DIGCTL_OCRAM_BIST_CSR_TOG	0x0FC

#define HW_DIGCTL_OCRAM_BIST_CSR_RSVD1			__BITS(31, 11)
#define HW_DIGCTL_OCRAM_BIST_CSR_BIST_DEBUG_MODE	__BIT(10)
#define HW_DIGCTL_OCRAM_BIST_CSR_BIST_DATA_CHANGE	__BIT(9)
#define HW_DIGCTL_OCRAM_BIST_CSR_BIST_CLKEN		__BIT(8)
#define HW_DIGCTL_OCRAM_BIST_CSR_RSVD0			__BITS(7, 4)
#define HW_DIGCTL_OCRAM_BIST_CSR_FAIL			__BIT(3)
#define HW_DIGCTL_OCRAM_BIST_CSR_PASS			__BIT(2)
#define HW_DIGCTL_OCRAM_BIST_CSR_DONE			__BIT(1)
#define HW_DIGCTL_OCRAM_BIST_CSR_START			__BIT(0)

/*
 * SRAM Status Register 0.
 */
#define HW_DIGCTL_OCRAM_STATUS0		0x110
#define HW_DIGCTL_OCRAM_STATUS0_SET	0x114
#define HW_DIGCTL_OCRAM_STATUS0_CLR	0x118
#define HW_DIGCTL_OCRAM_STATUS0_TOG	0x11C

#define HW_DIGCTL_OCRAM_STATUS0_FAILDATA00	__BITS(31, 0)

/*
 * SRAM Status Register 1.
 */
#define HW_DIGCTL_OCRAM_STATUS1		0x120
#define HW_DIGCTL_OCRAM_STATUS1_SET	0x124
#define HW_DIGCTL_OCRAM_STATUS1_CLR	0x128
#define HW_DIGCTL_OCRAM_STATUS1_TOG	0x12C

#define HW_DIGCTL_OCRAM_STATUS1_FAILDATA01	__BITS(31, 0)

/*
 * SRAM Status Register 2.
 */
#define HW_DIGCTL_OCRAM_STATUS2		0x130
#define HW_DIGCTL_OCRAM_STATUS2_SET	0x134
#define HW_DIGCTL_OCRAM_STATUS2_CLR	0x138
#define HW_DIGCTL_OCRAM_STATUS2_TOG	0x13C

#define HW_DIGCTL_OCRAM_STATUS2_FAILDATA10	__BITS(31, 0)

/*
 * SRAM Status Register 3.
 */
#define HW_DIGCTL_OCRAM_STATUS3		0x140
#define HW_DIGCTL_OCRAM_STATUS3_SET	0x144
#define HW_DIGCTL_OCRAM_STATUS3_CLR	0x148
#define HW_DIGCTL_OCRAM_STATUS3_TOG	0x14C

#define HW_DIGCTL_OCRAM_STATUS3_FAILDATA20	__BITS(31, 0)

/*
 * SRAM Status Register 4.
 */
#define HW_DIGCTL_OCRAM_STATUS4		0x150
#define HW_DIGCTL_OCRAM_STATUS4_SET	0x154
#define HW_DIGCTL_OCRAM_STATUS4_CLR	0x158
#define HW_DIGCTL_OCRAM_STATUS4_TOG	0x15C

#define HW_DIGCTL_OCRAM_STATUS4_FAILDATA20	__BITS(31, 0)

/*
 * SRAM Status Register 5.
 */
#define HW_DIGCTL_OCRAM_STATUS5		0x160
#define HW_DIGCTL_OCRAM_STATUS5_SET	0x164
#define HW_DIGCTL_OCRAM_STATUS5_CLR	0x168
#define HW_DIGCTL_OCRAM_STATUS5_TOG	0x16C

#define HW_DIGCTL_OCRAM_STATUS5_FAILDATA21	__BITS(31, 0)

/*
 * SRAM Status Register 6.
 */
#define HW_DIGCTL_OCRAM_STATUS6		0x170
#define HW_DIGCTL_OCRAM_STATUS6_SET	0x174
#define HW_DIGCTL_OCRAM_STATUS6_CLR	0x178
#define HW_DIGCTL_OCRAM_STATUS6_TOG	0x17C

#define HW_DIGCTL_OCRAM_STATUS6_FAILDATA30	__BITS(31, 0)

/*
 * SRAM Status Register 7.
 */
#define HW_DIGCTL_OCRAM_STATUS7		0x180
#define HW_DIGCTL_OCRAM_STATUS7_SET	0x184
#define HW_DIGCTL_OCRAM_STATUS7_CLR	0x188
#define HW_DIGCTL_OCRAM_STATUS7_TOG	0x18C

#define HW_DIGCTL_OCRAM_STATUS7_FAILDATA31	__BITS(31, 0)

/*
 * SRAM Status Register 8.
 */
#define HW_DIGCTL_OCRAM_STATUS8		0x190
#define HW_DIGCTL_OCRAM_STATUS8_SET	0x194
#define HW_DIGCTL_OCRAM_STATUS8_CLR	0x198
#define HW_DIGCTL_OCRAM_STATUS8_TOG	0x19C

#define HW_DIGCTL_OCRAM_STATUS8_RSVD3		__BITS(31, 29)
#define HW_DIGCTL_OCRAM_STATUS8_FAILADDR01	__BITS(28, 16)
#define HW_DIGCTL_OCRAM_STATUS8_RSVD2		__BITS(15, 13)
#define HW_DIGCTL_OCRAM_STATUS8_FAILADDR00	__BITS(12, 0)

/*
 * SRAM Status Register 9.
 */
#define HW_DIGCTL_OCRAM_STATUS9		0x1A0
#define HW_DIGCTL_OCRAM_STATUS9_SET	0x1A4
#define HW_DIGCTL_OCRAM_STATUS9_CLR	0x1A8
#define HW_DIGCTL_OCRAM_STATUS9_TOG	0x1AC

#define HW_DIGCTL_OCRAM_STATUS9_RSVD3		__BITS(31, 29)
#define HW_DIGCTL_OCRAM_STATUS9_FAILADDR11	__BITS(28, 16)
#define HW_DIGCTL_OCRAM_STATUS9_RSVD2		__BITS(15, 13)
#define HW_DIGCTL_OCRAM_STATUS9_FAILADDR10	__BITS(12, 0)

/*
 * SRAM Status Register 10.
 */
#define HW_DIGCTL_OCRAM_STATUS10	0x1B0
#define HW_DIGCTL_OCRAM_STATUS10_SET	0x1B4
#define HW_DIGCTL_OCRAM_STATUS10_CLR	0x1B8
#define HW_DIGCTL_OCRAM_STATUS10_TOG	0x1BC

#define HW_DIGCTL_OCRAM_STATUS10_RSVD3		__BITS(31, 29)
#define HW_DIGCTL_OCRAM_STATUS10_FAILADDR21	__BITS(28, 16)
#define HW_DIGCTL_OCRAM_STATUS10_RSVD2		__BITS(15, 13)
#define HW_DIGCTL_OCRAM_STATUS10_FAILADDR20	__BITS(12, 0)

/*
 * SRAM Status Register 11.
 */
#define HW_DIGCTL_OCRAM_STATUS11	0x1C0
#define HW_DIGCTL_OCRAM_STATUS11_SET	0x1C4
#define HW_DIGCTL_OCRAM_STATUS11_CLR	0x1C8
#define HW_DIGCTL_OCRAM_STATUS11_TOG	0x1CC

#define HW_DIGCTL_OCRAM_STATUS11_RSVD3		__BITS(31, 29)
#define HW_DIGCTL_OCRAM_STATUS11_FAILADDR31	__BITS(28, 16)
#define HW_DIGCTL_OCRAM_STATUS11_RSVD2		__BITS(15, 13)
#define HW_DIGCTL_OCRAM_STATUS11_FAILADDR30	__BITS(12, 0)

/*
 * SRAM Status Register 12.
 */
#define HW_DIGCTL_OCRAM_STATUS12	0x1D0
#define HW_DIGCTL_OCRAM_STATUS12_SET	0x1D4
#define HW_DIGCTL_OCRAM_STATUS12_CLR	0x1D8
#define HW_DIGCTL_OCRAM_STATUS12_TOG	0x1DC

#define HW_DIGCTL_OCRAM_STATUS12_RSVD3		__BITS(31, 28)
#define HW_DIGCTL_OCRAM_STATUS12_FAILSTATE11	__BITS(27, 24)
#define HW_DIGCTL_OCRAM_STATUS12_RSVD2		__BITS(23, 20)
#define HW_DIGCTL_OCRAM_STATUS12_FAILSTATE10	__BITS(19, 16)
#define HW_DIGCTL_OCRAM_STATUS12_RSVD1		__BITS(15, 12)
#define HW_DIGCTL_OCRAM_STATUS12_FAILSTATE01	__BITS(11, 8)
#define HW_DIGCTL_OCRAM_STATUS12_RSVD0		__BITS(7, 4)
#define HW_DIGCTL_OCRAM_STATUS12_FAILSTATE00	__BITS(3, 0)

/*
 * SRAM Status Register 13.
 */
#define HW_DIGCTL_OCRAM_STATUS13	0x1E0
#define HW_DIGCTL_OCRAM_STATUS13_SET	0x1E4
#define HW_DIGCTL_OCRAM_STATUS13_CLR	0x1E8
#define HW_DIGCTL_OCRAM_STATUS13_TOG	0x1EC

#define HW_DIGCTL_OCRAM_STATUS13_RSVD3		__BITS(31, 28)
#define HW_DIGCTL_OCRAM_STATUS13_FAILSTATE31	__BITS(27, 24)
#define HW_DIGCTL_OCRAM_STATUS13_RSVD2		__BITS(23, 20)
#define HW_DIGCTL_OCRAM_STATUS13_FAILSTATE30	__BITS(19, 16)
#define HW_DIGCTL_OCRAM_STATUS13_RSVD1		__BITS(15, 12)
#define HW_DIGCTL_OCRAM_STATUS13_FAILSTATE21	__BITS(11, 8)
#define HW_DIGCTL_OCRAM_STATUS13_RSVD0		__BITS(7, 4)
#define HW_DIGCTL_OCRAM_STATUS13_FAILSTATE20	__BITS(3, 0)

/*
 * Digital Control Scratch Register 0.
 */
#define HW_DIGCTL_SCRATCH0	0x290

#define HW_DIGCTL_SCRATCH0_PTR	__BITS(31, 0)

/*
 * Digital Control Scratch Register 1.
 */
#define HW_DIGCTL_SCRATCH1	0x2A0

#define HW_DIGCTL_SCRATCH1_PTR	__BITS(31, 0)

/*
 * Digital Control ARM Cache Register.
 */
#define HW_DIGCTL_ARMCACHE	0x2B0

#define HW_DIGCTL_ARMCACHE_RSVD4	__BITS(31, 18)
#define HW_DIGCTL_ARMCACHE_VALID_SS	__BITS(17, 16)
#define HW_DIGCTL_ARMCACHE_RSVD3	__BITS(15, 14)
#define HW_DIGCTL_ARMCACHE_DRTY_SS	__BITS(13, 12)
#define HW_DIGCTL_ARMCACHE_RSVD2	__BITS(11, 10)
#define HW_DIGCTL_ARMCACHE_CACHE_SS	__BITS(9, 8)
#define HW_DIGCTL_ARMCACHE_RSVD1	__BITS(7, 6)
#define HW_DIGCTL_ARMCACHE_DTAG_SS	__BITS(5, 4)
#define HW_DIGCTL_ARMCACHE_RSVD0	__BITS(3, 2)
#define HW_DIGCTL_ARMCACHE_ITAG_SS	__BITS(1, 0)

/*
 * Debug Trap Range Low Address.
 */
#define HW_DIGCTL_DEBUG_TRAP_ADDR_LOW	0x2C0

#define HW_DIGCTL_DEBUG_TRAP_ADDR_LOW_ADDR	__BITS(31, 0)

/*
 * Debug Trap Range High Address.
 */
#define HW_DIGCTL_DEBUG_TRAP_ADDR_HIGH	0x2D0

#define HW_DIGCTL_DEBUG_TRAP_ADDR_HIGH_ADDR	__BITS(31, 0)

/*
 * Freescale Copyright Identifier Register.
 */
#define HW_DIGCTL_SGTL	0x300

#define HW_DIGCTL_SGTL_COPYRIGHT	__BITS(31, 0)

/*
 * Digital Control Chip Revision Register.
 */
#define HW_DIGCTL_CHIPID	0x310

#define HW_DIGCTL_CHIPID_PRODUCT_CODE	__BITS(31, 16)
#define HW_DIGCTL_CHIPID_RSVD0		__BITS(16, 8)
#define HW_DIGCTL_CHIPID_REVISION	__BITS(7, 0)

/*
 * AHB Statistics Control Register.
 */
#define HW_DIGCTL_AHB_STATS_SELECT	0x330

#define HW_DIGCTL_AHB_STATS_SELECT_RSVD3		__BITS(31, 28)
#define HW_DIGCTL_AHB_STATS_SELECT_L3_MASTER_SELECT	__BITS(27, 24)
#define HW_DIGCTL_AHB_STATS_SELECT_RSVD2		__BITS(23, 20)
#define HW_DIGCTL_AHB_STATS_SELECT_L2_MASTER_SELECT	__BITS(19, 16)
#define HW_DIGCTL_AHB_STATS_SELECT_RSVD1		__BITS(15, 12)
#define HW_DIGCTL_AHB_STATS_SELECT_L1_MASTER_SELECT	__BITS(11, 8)
#define HW_DIGCTL_AHB_STATS_SELECT_RSVD0		__BITS(7, 4)
#define HW_DIGCTL_AHB_STATS_SELECT_L0_MASTER_SELECT	__BITS(3, 0)

/*
 * AHB Layer 0 Transfer Count Register.
 */
#define HW_DIGCTL_L0_AHB_ACTIVE_CYCLES	0x340

#define HW_DIGCTL_L0_AHB_ACTIVE_CYCLES_COUNT	__BITS(31, 0)

/*
 * AHB Layer 0 Performance Metric for Stalled Bus Cycles Register.
 */
#define HW_DIGCTL_L0_AHB_DATA_STALLED	0x350

#define HW_DIGCTL_L0_AHB_DATA_STALLED_COUNT	__BITS(31, 0)

/*
 * AHB Layer 0 Performance Metric for Valid Bus Cycles Register.
 */
#define HW_DIGCTL_L0_AHB_DATA_CYCLES	0x360

#define HW_DIGCTL_L0_AHB_DATA_CYCLES_COUNT	__BITS(31, 0)

/*
 * AHB Layer 1 Transfer Count Register.
 */
#define HW_DIGCTL_L1_AHB_ACTIVE_CYCLES	0x370

#define HW_DIGCTL_L1_AHB_ACTIVE_CYCLES_COUNT	__BITS(31, 0)

/*
 * AHB Layer 1 Performance Metric for Stalled Bus Cycles Register.
 */
#define HW_DIGCTL_L1_AHB_DATA_STALLED	0x380

#define HW_DIGCTL_L1_AHB_DATA_STALLED_COUNT	__BITS(31, 0)

/*
 * AHB Layer 1 Performance Metric for Stalled Bus Cycles Register.
 */
#define HW_DIGCTL_L1_AHB_DATA_STALLED	0x380

#define HW_DIGCTL_L1_AHB_DATA_STALLED_COUNT	__BITS(31, 0)

/*
 * AHB Layer 1 Performance Metric for Valid Bus Cycles Register.
 */
#define HW_DIGCTL_L1_AHB_DATA_CYCLES	0x390

#define HW_DIGCTL_L1_AHB_DATA_CYCLES_COUNT	__BITS(31, 0)

/*
 * AHB Layer 2 Transfer Count Register.
 */
#define HW_DIGCTL_L2_AHB_ACTIVE_CYCLES	0x3A0

#define HW_DIGCTL_L2_AHB_ACTIVE_CYCLES_COUNT	__BITS(31, 0)

/*
 * AHB Layer 2 Performance Metric for Stalled Bus Cycles Register.
 */
#define HW_DIGCTL_L2_AHB_DATA_STALLED	0x3B0

#define HW_DIGCTL_L2_AHB_DATA_STALLED_COUNT	__BITS(31, 0)

/*
 * AHB Layer 2 Performance Metric for Valid Bus Cycles Register.
 */
#define HW_DIGCTL_L2_AHB_DATA_CYCLES	0x3C0

#define HW_DIGCTL_L2_AHB_DATA_CYCLES_COUNT	__BITS(31, 0)

/*
 * AHB Layer 3 Transfer Count Register.
 */
#define HW_DIGCTL_L3_AHB_ACTIVE_CYCLES	0x3D0

#define HW_DIGCTL_L3_AHB_ACTIVE_CYCLES_COUNT	__BITS(31, 0)

/*
 * AHB Layer 3 Performance Metric for Stalled Bus Cycles Register.
 */
#define HW_DIGCTL_L3_AHB_DATA_STALLED	0x3E0

#define HW_DIGCTL_L3_AHB_DATA_STALLED_COUNT	__BITS(31, 0)

/*
 * AHB Layer 3 Performance Metric for Valid Bus Cycles Register.
 */
#define HW_DIGCTL_L3_AHB_DATA_CYCLES	0x3F0

#define HW_DIGCTL_L3_AHB_DATA_CYCLES_COUNT	__BITS(31, 0)

/*
 * EMI CLK/CLKN Delay Adjustment Register.
 */
#define HW_DIGCTL_EMICLK_DELAY	0x500

#define HW_DIGCTL_EMICLK_DELAY_RSVD0	__BITS(31, 5)
#define HW_DIGCTL_EMICLK_DELAY_NUM_TAPS	__BITS(4, 0)

#endif /* !_ARM_IMX_IMX23_DIGCTLREG_H_ */

/*
 * arch/ppc/platforms/4xx/ibm440sp.h
 *
 * PPC440SP definitions
 *
 * Matt Porter <mporter@kernel.crashing.org>
 *
 * Copyright 2004-2005 MontaVista Software, Inc.
 *
 * This program is free software; you can redistribute  it and/or modify it
 * under  the terms of  the GNU General  Public License as published by the
 * Free Software Foundation;  either version 2 of the  License, or (at your
 * option) any later version.
 */

#ifdef __KERNEL__
#ifndef __PPC_PLATFORMS_IBM440SP_H
#define __PPC_PLATFORMS_IBM440SP_H

#include <linux/config.h>

#include <asm/ibm44x.h>

/* UART */
#define PPC440SP_UART0_ADDR	0x00000001f0000200ULL
#define PPC440SP_UART1_ADDR	0x00000001f0000300ULL
#define PPC440SP_UART2_ADDR	0x00000001f0000600ULL
#define UART0_INT		0
#define UART1_INT		1
#define UART2_INT		37

/* Clock and Power Management */
#define IBM_CPM_IIC0		0x80000000	/* IIC interface */
#define IBM_CPM_IIC1		0x40000000	/* IIC interface */
#define IBM_CPM_PCIX0		0x20000000	/* PCIX bridge 0 */
#define IBM_CPM_PCIX1		0x10000000	/* PCIX bridge 1 */
#define IBM_CPM_PCIX2		0x08000000	/* PCIX bridge 2 */
#define IBM_CPM_CPU		0x02000000	/* processor core */
#define IBM_CPM_BGO		0x00800000	/* PLB to OPB bus arbiter */
#define IBM_CPM_EBC		0x00200000	/* External Bux Controller */
#define IBM_CPM_PLB		0x00040000	/* PLB bus arbiter */
#define IBM_CPM_SRAM		0x00020000	/* SRAM memory controller */
#define IBM_CPM_UIC1		0x00001000	/* Universal Interrupt Controller */
#define IBM_CPM_GPIO0		0x00000800	/* General Purpose IO (??) */
#define IBM_CPM_GPT		0x00000400	/* General Purpose Timers  */
#define IBM_CPM_UART0		0x00000200	/* serial port 0 */
#define IBM_CPM_UART1		0x00000100	/* serial port 1 */
#define IBM_CPM_UIC0		0x00000080	/* Universal Interrupt Controller */
#define IBM_CPM_TMRCLK		0x00000040	/* CPU timers */
#define IBM_CPM_EMAC0  		0x00000020	/* EMAC 0     */
#define IBM_CPM_UART2		0x00000010	/* serial port 2 */

#define DFLT_IBM4xx_PM		~(IBM_CPM_UIC0 | IBM_CPM_UIC1 | IBM_CPM_CPU \
				| IBM_CPM_EBC | IBM_CPM_SRAM | IBM_CPM_BGO \
				| IBM_CPM_PLB | IBM_CPM_TMRCLK | IBM_CPM_PCIX0 \
				| IBM_CPM_PCIX1 | IBM_CPM_PCIX2\
				| IBM_CPM_EMAC0 )
#endif /* __PPC_PLATFORMS_IBM440SP_H */
#endif /* __KERNEL__ */

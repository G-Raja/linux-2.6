/*
 *
 * Copyright ? 2005 Raza Microelectronics, Inc. (.RMI.)
 *
 * This program is free software.  You may use it, redistribute it 
 * and/or modify it under the terms of the GNU General Public License as 
 * published by the Free Software Foundation; either version two of the 
 * License or (at your option) any later version.
 *
 * This program is distributed in the hope that you will find it useful.  
 * Notwithstanding the foregoing, you understand and agree that this program 
 * is provided by RMI .as is,. and without any warranties, whether express, 
 * implied or statutory, including without limitation any implied warranty of 
 * non-infringement, merchantability or fitness for a particular purpose.  
 * In no event will RMI be liable for any loss of data, lost profits, cost 
 * of procurement of substitute technology or services or for any direct, 
 * indirect, incidental, consequential or special damages arising from the 
 * use of this program, however caused.  Your unconditional agreement to 
 * these terms and conditions is an express condition to, and shall be deemed 
 * to occur upon, your use, redistribution and/or modification of this program.
 *
 * See the GNU General Public License for more details.  
 */
#ifndef _ASM_RMI_INTERRUPT_H
#define _ASM_RMI_INTERRUPT_H

#include <asm/rmi/pic.h>

/* Defines for the IRQ numbers */

#define IRQ_DUMMY_UART           2
#define IRQ_IPI_SMP_FUNCTION     3
#define IRQ_IPI_SMP_RESCHEDULE   4
#define IRQ_REMOTE_DEBUG         5
#define IRQ_MSGRING              6
#define IRQ_TIMER                7

#endif

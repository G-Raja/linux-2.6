/*************************************************************************
* Author: Cavium Networks info@caviumnetworks.com
*
* 2006 (c) Cavium Networks. This file is licensed under
* the terms of the GNU General Public License version 2 as
* published by the Free Software Foundation. This program
* is licensed "as is" without any warranty of any kind, whether
* express or implied.
* This file may also be available under a different license from
* Cavium Networks.  Contact Cavium Networks for more details.
*************************************************************************/

/**
 * Configuration and status register (CSR) address and type definitions for
 * Octeon pass 1. Include cvmx-csr.h instead of this file directly.
 *
 * This file is divided into three sections. The first section defines the
 * addresses for each of the Octeon CSRs. The second section defines
 * enumerations used with the CSRs. The final section contains the typedefs
 * for each CSR. All sections are in alphabetical order.
 *
 * Note that the typdef section is validated by a script and must be surrounded
 * by two banners (See below).
 */
#ifndef __CVMX_CSR_PASS1_H__
#define __CVMX_CSR_PASS1_H__

#define  CVMX_ASXX_RX_PRT_EN(block_id)                       (CVMX_ADD_IO_SEG(0x00011800B0000000ull+((block_id)*0x8000000ull)))
#define  CVMX_ASXX_TX_PRT_EN(block_id)                       (CVMX_ADD_IO_SEG(0x00011800B0000008ull+((block_id)*0x8000000ull)))
#define  CVMX_ASXX_INT_REG(block_id)                         (CVMX_ADD_IO_SEG(0x00011800B0000010ull+((block_id)*0x8000000ull)))
#define  CVMX_ASXX_INT_EN(block_id)                          (CVMX_ADD_IO_SEG(0x00011800B0000018ull+((block_id)*0x8000000ull)))
#define  CVMX_ASXX_RX_CLK_SETX(offset,block_id)              (CVMX_ADD_IO_SEG(0x00011800B0000020ull+((offset)*8)+((block_id)*0x8000000ull)))
#define  CVMX_ASXX_PRT_LOOP(block_id)                        (CVMX_ADD_IO_SEG(0x00011800B0000040ull+((block_id)*0x8000000ull)))
#define  CVMX_ASXX_TX_CLK_SETX(offset,block_id)              (CVMX_ADD_IO_SEG(0x00011800B0000048ull+((offset)*8)+((block_id)*0x8000000ull)))
#define  CVMX_ASXX_TX_COMP_BYP(block_id)                     (CVMX_ADD_IO_SEG(0x00011800B0000068ull+((block_id)*0x8000000ull)))
#define  CVMX_ASXX_TX_HI_WATERX(offset,block_id)             (CVMX_ADD_IO_SEG(0x00011800B0000080ull+((offset)*8)+((block_id)*0x8000000ull)))
#define  CVMX_ASXX_RX_WOL(block_id)                          (CVMX_ADD_IO_SEG(0x00011800B0000100ull+((block_id)*0x8000000ull)))
#define  CVMX_ASXX_RX_WOL_MSK(block_id)                      (CVMX_ADD_IO_SEG(0x00011800B0000108ull+((block_id)*0x8000000ull)))
#define  CVMX_ASXX_RX_WOL_SIG(block_id)                      (CVMX_ADD_IO_SEG(0x00011800B0000110ull+((block_id)*0x8000000ull)))
#define  CVMX_ASXX_RX_WOL_POWOK(block_id)                    (CVMX_ADD_IO_SEG(0x00011800B0000118ull+((block_id)*0x8000000ull)))
#define  CVMX_ASXX_RLD_FCRAM_MODE(block_id)                  (CVMX_ADD_IO_SEG(0x00011800B0000210ull+((block_id)*0x8000000ull)))
#define  CVMX_ASXX_RLD_DATA_DRV(block_id)                    (CVMX_ADD_IO_SEG(0x00011800B0000218ull+((block_id)*0x8000000ull)))
#define  CVMX_ASXX_RLD_COMP(block_id)                        (CVMX_ADD_IO_SEG(0x00011800B0000220ull+((block_id)*0x8000000ull)))
#define  CVMX_ASXX_RLD_PCTL_STRONG(block_id)                 (CVMX_ADD_IO_SEG(0x00011800B0000228ull+((block_id)*0x8000000ull)))
#define  CVMX_ASXX_RLD_NCTL_STRONG(block_id)                 (CVMX_ADD_IO_SEG(0x00011800B0000230ull+((block_id)*0x8000000ull)))
#define  CVMX_ASXX_RLD_PCTL_WEAK(block_id)                   (CVMX_ADD_IO_SEG(0x00011800B0000238ull+((block_id)*0x8000000ull)))
#define  CVMX_ASXX_RLD_NCTL_WEAK(block_id)                   (CVMX_ADD_IO_SEG(0x00011800B0000240ull+((block_id)*0x8000000ull)))
#define  CVMX_ASXX_RLD_BYPASS(block_id)                      (CVMX_ADD_IO_SEG(0x00011800B0000248ull+((block_id)*0x8000000ull)))
#define  CVMX_ASXX_RLD_BYPASS_SETTING(block_id)              (CVMX_ADD_IO_SEG(0x00011800B0000250ull+((block_id)*0x8000000ull)))
#define  CVMX_ASXX_RLD_SETTING(block_id)                     (CVMX_ADD_IO_SEG(0x00011800B0000258ull+((block_id)*0x8000000ull)))
#define  CVMX_ASX0_DBG_DATA_ENABLE                            CVMX_ADD_IO_SEG(0x00011800B0000200ull)
#define  CVMX_ASX0_DBG_DATA_DRV                               CVMX_ADD_IO_SEG(0x00011800B0000208ull)
#define  CVMX_DFA_CFG                                         CVMX_ADD_IO_SEG(0x0001180030000000ull)
#define  CVMX_DFA_MEMCFG0                                     CVMX_ADD_IO_SEG(0x0001180030000008ull)
#define  CVMX_DFA_MEMCFG1                                     CVMX_ADD_IO_SEG(0x0001180030000010ull)
#define  CVMX_DFA_MEMRLD                                      CVMX_ADD_IO_SEG(0x0001180030000018ull)
#define  CVMX_DFA_NCBCTL                                      CVMX_ADD_IO_SEG(0x0001180030000020ull)
#define  CVMX_DFA_ERR                                         CVMX_ADD_IO_SEG(0x0001180030000028ull)
#define  CVMX_DFA_MEMFADR                                     CVMX_ADD_IO_SEG(0x0001180030000030ull)
#define  CVMX_DFA_MEMFCR                                      CVMX_ADD_IO_SEG(0x0001180030000038ull)
#define  CVMX_DFA_SBD_DBG0                                    CVMX_ADD_IO_SEG(0x0001180030000040ull)
#define  CVMX_DFA_SBD_DBG1                                    CVMX_ADD_IO_SEG(0x0001180030000048ull)
#define  CVMX_DFA_SBD_DBG2                                    CVMX_ADD_IO_SEG(0x0001180030000050ull)
#define  CVMX_DFA_SBD_DBG3                                    CVMX_ADD_IO_SEG(0x0001180030000058ull)
#define  CVMX_DFA_MEMCFG2                                     CVMX_ADD_IO_SEG(0x0001180030000060ull)
#define  CVMX_DFA_BST0                                        CVMX_ADD_IO_SEG(0x00011800300007F0ull)
#define  CVMX_DFA_BST1                                        CVMX_ADD_IO_SEG(0x00011800300007F8ull)
#define  CVMX_DFA_DBELL                                       CVMX_ADD_IO_SEG(0x0001370000000000ull)
#define  CVMX_DFA_DIFRDPTR                                    CVMX_ADD_IO_SEG(0x0001370200000000ull)
#define  CVMX_DFA_DIFCTL                                      CVMX_ADD_IO_SEG(0x0001370600000000ull)
#define  CVMX_FPA_FPF0_MARKS                                  CVMX_ADD_IO_SEG(0x0001180028000000ull)
#define  CVMX_FPA_FPF1_MARKS                                  CVMX_ADD_IO_SEG(0x0001180028000008ull)
#define  CVMX_FPA_FPF2_MARKS                                  CVMX_ADD_IO_SEG(0x0001180028000010ull)
#define  CVMX_FPA_FPF3_MARKS                                  CVMX_ADD_IO_SEG(0x0001180028000018ull)
#define  CVMX_FPA_FPF4_MARKS                                  CVMX_ADD_IO_SEG(0x0001180028000020ull)
#define  CVMX_FPA_FPF5_MARKS                                  CVMX_ADD_IO_SEG(0x0001180028000028ull)
#define  CVMX_FPA_FPF6_MARKS                                  CVMX_ADD_IO_SEG(0x0001180028000030ull)
#define  CVMX_FPA_FPF7_MARKS                                  CVMX_ADD_IO_SEG(0x0001180028000038ull)
#define  CVMX_FPA_INT_SUM                                     CVMX_ADD_IO_SEG(0x0001180028000040ull)
#define  CVMX_FPA_INT_ENB                                     CVMX_ADD_IO_SEG(0x0001180028000048ull)
#define  CVMX_FPA_CTL_STATUS                                  CVMX_ADD_IO_SEG(0x0001180028000050ull)
#define  CVMX_FPA_FPF0_SIZE                                   CVMX_ADD_IO_SEG(0x0001180028000058ull)
#define  CVMX_FPA_FPFX_SIZE(offset)                          (CVMX_ADD_IO_SEG(0x0001180028000060ull+((offset)*8)-8*1))
#define  CVMX_FPA_QUEX_AVAILABLE(offset)                     (CVMX_ADD_IO_SEG(0x0001180028000098ull+((offset)*8)))
#define  CVMX_FPA_WART_CTL                                    CVMX_ADD_IO_SEG(0x00011800280000D8ull)
#define  CVMX_FPA_WART_STATUS                                 CVMX_ADD_IO_SEG(0x00011800280000E0ull)
#define  CVMX_FPA_BIST_STATUS                                 CVMX_ADD_IO_SEG(0x00011800280000E8ull)
#define  CVMX_FPA_QUE0_PAGE_INDEX                             CVMX_ADD_IO_SEG(0x00011800280000F0ull)
#define  CVMX_FPA_QUE1_PAGE_INDEX                             CVMX_ADD_IO_SEG(0x00011800280000F8ull)
#define  CVMX_FPA_QUE2_PAGE_INDEX                             CVMX_ADD_IO_SEG(0x0001180028000100ull)
#define  CVMX_FPA_QUE3_PAGE_INDEX                             CVMX_ADD_IO_SEG(0x0001180028000108ull)
#define  CVMX_FPA_QUE4_PAGE_INDEX                             CVMX_ADD_IO_SEG(0x0001180028000110ull)
#define  CVMX_FPA_QUE5_PAGE_INDEX                             CVMX_ADD_IO_SEG(0x0001180028000118ull)
#define  CVMX_FPA_QUE6_PAGE_INDEX                             CVMX_ADD_IO_SEG(0x0001180028000120ull)
#define  CVMX_FPA_QUE7_PAGE_INDEX                             CVMX_ADD_IO_SEG(0x0001180028000128ull)
#define  CVMX_FPA_QUE_EXP                                     CVMX_ADD_IO_SEG(0x0001180028000130ull)
#define  CVMX_FPA_QUE_ACT                                     CVMX_ADD_IO_SEG(0x0001180028000138ull)
#define  CVMX_GMXX_RXX_INT_REG(offset,block_id)              (CVMX_ADD_IO_SEG(0x0001180008000000ull+((offset)*2048)+((block_id)*0x8000000ull)))
#define  CVMX_GMXX_RXX_INT_EN(offset,block_id)               (CVMX_ADD_IO_SEG(0x0001180008000008ull+((offset)*2048)+((block_id)*0x8000000ull)))
#define  CVMX_GMXX_PRTX_CFG(offset,block_id)                 (CVMX_ADD_IO_SEG(0x0001180008000010ull+((offset)*2048)+((block_id)*0x8000000ull)))
#define  CVMX_GMXX_RXX_FRM_CTL(offset,block_id)              (CVMX_ADD_IO_SEG(0x0001180008000018ull+((offset)*2048)+((block_id)*0x8000000ull)))
#define  CVMX_GMXX_RXX_FRM_CHK(offset,block_id)              (CVMX_ADD_IO_SEG(0x0001180008000020ull+((offset)*2048)+((block_id)*0x8000000ull)))
#define  CVMX_GMXX_RXX_FRM_MIN(offset,block_id)              (CVMX_ADD_IO_SEG(0x0001180008000028ull+((offset)*2048)+((block_id)*0x8000000ull)))
#define  CVMX_GMXX_RXX_FRM_MAX(offset,block_id)              (CVMX_ADD_IO_SEG(0x0001180008000030ull+((offset)*2048)+((block_id)*0x8000000ull)))
#define  CVMX_GMXX_RXX_JABBER(offset,block_id)               (CVMX_ADD_IO_SEG(0x0001180008000038ull+((offset)*2048)+((block_id)*0x8000000ull)))
#define  CVMX_GMXX_RXX_DECISION(offset,block_id)             (CVMX_ADD_IO_SEG(0x0001180008000040ull+((offset)*2048)+((block_id)*0x8000000ull)))
#define  CVMX_GMXX_RXX_UDD_SKP(offset,block_id)              (CVMX_ADD_IO_SEG(0x0001180008000048ull+((offset)*2048)+((block_id)*0x8000000ull)))
#define  CVMX_GMXX_RXX_STATS_CTL(offset,block_id)            (CVMX_ADD_IO_SEG(0x0001180008000050ull+((offset)*2048)+((block_id)*0x8000000ull)))
#define  CVMX_GMXX_RXX_IFG(offset,block_id)                  (CVMX_ADD_IO_SEG(0x0001180008000058ull+((offset)*2048)+((block_id)*0x8000000ull)))
#define  CVMX_GMXX_RXX_RX_INBND(offset,block_id)             (CVMX_ADD_IO_SEG(0x0001180008000060ull+((offset)*2048)+((block_id)*0x8000000ull)))
#define  CVMX_GMXX_RXX_STATS_PKTS(offset,block_id)           (CVMX_ADD_IO_SEG(0x0001180008000080ull+((offset)*2048)+((block_id)*0x8000000ull)))
#define  CVMX_GMXX_RXX_STATS_OCTS(offset,block_id)           (CVMX_ADD_IO_SEG(0x0001180008000088ull+((offset)*2048)+((block_id)*0x8000000ull)))
#define  CVMX_GMXX_RXX_STATS_PKTS_CTL(offset,block_id)       (CVMX_ADD_IO_SEG(0x0001180008000090ull+((offset)*2048)+((block_id)*0x8000000ull)))
#define  CVMX_GMXX_RXX_STATS_OCTS_CTL(offset,block_id)       (CVMX_ADD_IO_SEG(0x0001180008000098ull+((offset)*2048)+((block_id)*0x8000000ull)))
#define  CVMX_GMXX_RXX_STATS_PKTS_DMAC(offset,block_id)      (CVMX_ADD_IO_SEG(0x00011800080000A0ull+((offset)*2048)+((block_id)*0x8000000ull)))
#define  CVMX_GMXX_RXX_STATS_OCTS_DMAC(offset,block_id)      (CVMX_ADD_IO_SEG(0x00011800080000A8ull+((offset)*2048)+((block_id)*0x8000000ull)))
#define  CVMX_GMXX_RXX_STATS_PKTS_DRP(offset,block_id)       (CVMX_ADD_IO_SEG(0x00011800080000B0ull+((offset)*2048)+((block_id)*0x8000000ull)))
#define  CVMX_GMXX_RXX_STATS_OCTS_DRP(offset,block_id)       (CVMX_ADD_IO_SEG(0x00011800080000B8ull+((offset)*2048)+((block_id)*0x8000000ull)))
#define  CVMX_GMXX_RXX_STATS_PKTS_BAD(offset,block_id)       (CVMX_ADD_IO_SEG(0x00011800080000C0ull+((offset)*2048)+((block_id)*0x8000000ull)))
#define  CVMX_GMXX_RXX_ADR_CTL(offset,block_id)              (CVMX_ADD_IO_SEG(0x0001180008000100ull+((offset)*2048)+((block_id)*0x8000000ull)))
#define  CVMX_GMXX_RXX_ADR_CAM_EN(offset,block_id)           (CVMX_ADD_IO_SEG(0x0001180008000108ull+((offset)*2048)+((block_id)*0x8000000ull)))
#define  CVMX_GMXX_RXX_ADR_CAM0(offset,block_id)             (CVMX_ADD_IO_SEG(0x0001180008000180ull+((offset)*2048)+((block_id)*0x8000000ull)))
#define  CVMX_GMXX_RXX_ADR_CAM1(offset,block_id)             (CVMX_ADD_IO_SEG(0x0001180008000188ull+((offset)*2048)+((block_id)*0x8000000ull)))
#define  CVMX_GMXX_RXX_ADR_CAM2(offset,block_id)             (CVMX_ADD_IO_SEG(0x0001180008000190ull+((offset)*2048)+((block_id)*0x8000000ull)))
#define  CVMX_GMXX_RXX_ADR_CAM3(offset,block_id)             (CVMX_ADD_IO_SEG(0x0001180008000198ull+((offset)*2048)+((block_id)*0x8000000ull)))
#define  CVMX_GMXX_RXX_ADR_CAM4(offset,block_id)             (CVMX_ADD_IO_SEG(0x00011800080001A0ull+((offset)*2048)+((block_id)*0x8000000ull)))
#define  CVMX_GMXX_RXX_ADR_CAM5(offset,block_id)             (CVMX_ADD_IO_SEG(0x00011800080001A8ull+((offset)*2048)+((block_id)*0x8000000ull)))
#define  CVMX_GMXX_BIST(block_id)                            (CVMX_ADD_IO_SEG(0x0001180008000400ull+((block_id)*0x8000000ull)))
#define  CVMX_GMXX_RX_LOOP(block_id)                         (CVMX_ADD_IO_SEG(0x0001180008000408ull+((block_id)*0x8000000ull)))
#define  CVMX_GMXX_RX_PRTS(block_id)                         (CVMX_ADD_IO_SEG(0x0001180008000410ull+((block_id)*0x8000000ull)))
#define  CVMX_GMXX_RX_BP_DROPX(offset,block_id)              (CVMX_ADD_IO_SEG(0x0001180008000420ull+((offset)*8)+((block_id)*0x8000000ull)))
#define  CVMX_GMXX_RX_BP_ONX(offset,block_id)                (CVMX_ADD_IO_SEG(0x0001180008000440ull+((offset)*8)+((block_id)*0x8000000ull)))
#define  CVMX_GMXX_RX_BP_OFFX(offset,block_id)               (CVMX_ADD_IO_SEG(0x0001180008000460ull+((offset)*8)+((block_id)*0x8000000ull)))
#define  CVMX_GMXX_RX_PASS_EN(block_id)                      (CVMX_ADD_IO_SEG(0x00011800080005F8ull+((block_id)*0x8000000ull)))
#define  CVMX_GMXX_RX_PASS_MAPX(offset,block_id)             (CVMX_ADD_IO_SEG(0x0001180008000600ull+((offset)*8)+((block_id)*0x8000000ull)))
#define  CVMX_GMXX_TXX_CLK(offset,block_id)                  (CVMX_ADD_IO_SEG(0x0001180008000208ull+((offset)*2048)+((block_id)*0x8000000ull)))
#define  CVMX_GMXX_TXX_THRESH(offset,block_id)               (CVMX_ADD_IO_SEG(0x0001180008000210ull+((offset)*2048)+((block_id)*0x8000000ull)))
#define  CVMX_GMXX_TXX_APPEND(offset,block_id)               (CVMX_ADD_IO_SEG(0x0001180008000218ull+((offset)*2048)+((block_id)*0x8000000ull)))
#define  CVMX_GMXX_TXX_SLOT(offset,block_id)                 (CVMX_ADD_IO_SEG(0x0001180008000220ull+((offset)*2048)+((block_id)*0x8000000ull)))
#define  CVMX_GMXX_TXX_BURST(offset,block_id)                (CVMX_ADD_IO_SEG(0x0001180008000228ull+((offset)*2048)+((block_id)*0x8000000ull)))
#define  CVMX_GMXX_SMACX(offset,block_id)                    (CVMX_ADD_IO_SEG(0x0001180008000230ull+((offset)*2048)+((block_id)*0x8000000ull)))
#define  CVMX_GMXX_TXX_PAUSE_PKT_TIME(offset,block_id)       (CVMX_ADD_IO_SEG(0x0001180008000238ull+((offset)*2048)+((block_id)*0x8000000ull)))
#define  CVMX_GMXX_TXX_MIN_PKT(offset,block_id)              (CVMX_ADD_IO_SEG(0x0001180008000240ull+((offset)*2048)+((block_id)*0x8000000ull)))
#define  CVMX_GMXX_TXX_PAUSE_PKT_INTERVAL(offset,block_id)   (CVMX_ADD_IO_SEG(0x0001180008000248ull+((offset)*2048)+((block_id)*0x8000000ull)))
#define  CVMX_GMXX_TXX_SOFT_PAUSE(offset,block_id)           (CVMX_ADD_IO_SEG(0x0001180008000250ull+((offset)*2048)+((block_id)*0x8000000ull)))
#define  CVMX_GMXX_TXX_PAUSE_TOGO(offset,block_id)           (CVMX_ADD_IO_SEG(0x0001180008000258ull+((offset)*2048)+((block_id)*0x8000000ull)))
#define  CVMX_GMXX_TXX_PAUSE_ZERO(offset,block_id)           (CVMX_ADD_IO_SEG(0x0001180008000260ull+((offset)*2048)+((block_id)*0x8000000ull)))
#define  CVMX_GMXX_TXX_STATS_CTL(offset,block_id)            (CVMX_ADD_IO_SEG(0x0001180008000268ull+((offset)*2048)+((block_id)*0x8000000ull)))
#define  CVMX_GMXX_TXX_CTL(offset,block_id)                  (CVMX_ADD_IO_SEG(0x0001180008000270ull+((offset)*2048)+((block_id)*0x8000000ull)))
#define  CVMX_GMXX_TXX_STAT0(offset,block_id)                (CVMX_ADD_IO_SEG(0x0001180008000280ull+((offset)*2048)+((block_id)*0x8000000ull)))
#define  CVMX_GMXX_TXX_STAT1(offset,block_id)                (CVMX_ADD_IO_SEG(0x0001180008000288ull+((offset)*2048)+((block_id)*0x8000000ull)))
#define  CVMX_GMXX_TXX_STAT2(offset,block_id)                (CVMX_ADD_IO_SEG(0x0001180008000290ull+((offset)*2048)+((block_id)*0x8000000ull)))
#define  CVMX_GMXX_TXX_STAT3(offset,block_id)                (CVMX_ADD_IO_SEG(0x0001180008000298ull+((offset)*2048)+((block_id)*0x8000000ull)))
#define  CVMX_GMXX_TXX_STAT4(offset,block_id)                (CVMX_ADD_IO_SEG(0x00011800080002A0ull+((offset)*2048)+((block_id)*0x8000000ull)))
#define  CVMX_GMXX_TXX_STAT5(offset,block_id)                (CVMX_ADD_IO_SEG(0x00011800080002A8ull+((offset)*2048)+((block_id)*0x8000000ull)))
#define  CVMX_GMXX_TXX_STAT6(offset,block_id)                (CVMX_ADD_IO_SEG(0x00011800080002B0ull+((offset)*2048)+((block_id)*0x8000000ull)))
#define  CVMX_GMXX_TXX_STAT7(offset,block_id)                (CVMX_ADD_IO_SEG(0x00011800080002B8ull+((offset)*2048)+((block_id)*0x8000000ull)))
#define  CVMX_GMXX_TXX_STAT8(offset,block_id)                (CVMX_ADD_IO_SEG(0x00011800080002C0ull+((offset)*2048)+((block_id)*0x8000000ull)))
#define  CVMX_GMXX_TXX_STAT9(offset,block_id)                (CVMX_ADD_IO_SEG(0x00011800080002C8ull+((offset)*2048)+((block_id)*0x8000000ull)))
#define  CVMX_GMXX_TX_PRTS(block_id)                         (CVMX_ADD_IO_SEG(0x0001180008000480ull+((block_id)*0x8000000ull)))
#define  CVMX_GMXX_TX_IFG(block_id)                          (CVMX_ADD_IO_SEG(0x0001180008000488ull+((block_id)*0x8000000ull)))
#define  CVMX_GMXX_TX_JAM(block_id)                          (CVMX_ADD_IO_SEG(0x0001180008000490ull+((block_id)*0x8000000ull)))
#define  CVMX_GMXX_TX_COL_ATTEMPT(block_id)                  (CVMX_ADD_IO_SEG(0x0001180008000498ull+((block_id)*0x8000000ull)))
#define  CVMX_GMXX_TX_PAUSE_PKT_DMAC(block_id)               (CVMX_ADD_IO_SEG(0x00011800080004A0ull+((block_id)*0x8000000ull)))
#define  CVMX_GMXX_TX_PAUSE_PKT_TYPE(block_id)               (CVMX_ADD_IO_SEG(0x00011800080004A8ull+((block_id)*0x8000000ull)))
#define  CVMX_GMXX_TX_SPI_MAX(block_id)                      (CVMX_ADD_IO_SEG(0x00011800080004B0ull+((block_id)*0x8000000ull)))
#define  CVMX_GMXX_TX_SPI_THRESH(block_id)                   (CVMX_ADD_IO_SEG(0x00011800080004B8ull+((block_id)*0x8000000ull)))
#define  CVMX_GMXX_TX_SPI_CTL(block_id)                      (CVMX_ADD_IO_SEG(0x00011800080004C0ull+((block_id)*0x8000000ull)))
#define  CVMX_GMXX_TX_OVR_BP(block_id)                       (CVMX_ADD_IO_SEG(0x00011800080004C8ull+((block_id)*0x8000000ull)))
#define  CVMX_GMXX_TX_BP(block_id)                           (CVMX_ADD_IO_SEG(0x00011800080004D0ull+((block_id)*0x8000000ull)))
#define  CVMX_GMXX_TX_CORRUPT(block_id)                      (CVMX_ADD_IO_SEG(0x00011800080004D8ull+((block_id)*0x8000000ull)))
#define  CVMX_GMXX_TX_LFSR(block_id)                         (CVMX_ADD_IO_SEG(0x00011800080004F8ull+((block_id)*0x8000000ull)))
#define  CVMX_GMXX_TX_INT_REG(block_id)                      (CVMX_ADD_IO_SEG(0x0001180008000500ull+((block_id)*0x8000000ull)))
#define  CVMX_GMXX_TX_INT_EN(block_id)                       (CVMX_ADD_IO_SEG(0x0001180008000508ull+((block_id)*0x8000000ull)))
#define  CVMX_GMXX_NXA_ADR(block_id)                         (CVMX_ADD_IO_SEG(0x0001180008000510ull+((block_id)*0x8000000ull)))
#define  CVMX_GMXX_BAD_REG(block_id)                         (CVMX_ADD_IO_SEG(0x0001180008000518ull+((block_id)*0x8000000ull)))
#define  CVMX_GMXX_STAT_BP(block_id)                         (CVMX_ADD_IO_SEG(0x0001180008000520ull+((block_id)*0x8000000ull)))
#define  CVMX_GMXX_INF_MODE(block_id)                        (CVMX_ADD_IO_SEG(0x00011800080007F8ull+((block_id)*0x8000000ull)))
#define  CVMX_IOB_FAU_TIMEOUT                                 CVMX_ADD_IO_SEG(0x00011800F0000000ull)
#define  CVMX_IOB_N2C_RSP_PRI_CNT                             CVMX_ADD_IO_SEG(0x00011800F0000008ull)
#define  CVMX_IOB_I2C_PRI_CNT                                 CVMX_ADD_IO_SEG(0x00011800F0000010ull)
#define  CVMX_IOB_P2C_REQ_PRI_CNT                             CVMX_ADD_IO_SEG(0x00011800F0000018ull)
#define  CVMX_IOB_N2C_L2C_PRI_CNT                             CVMX_ADD_IO_SEG(0x00011800F0000020ull)
#define  CVMX_IOB_DWB_PRI_CNT                                 CVMX_ADD_IO_SEG(0x00011800F0000028ull)
#define  CVMX_IOB_OUTB_REQ_PRI_CNT                            CVMX_ADD_IO_SEG(0x00011800F0000038ull)
#define  CVMX_IOB_OUTB_COM_PRI_CNT                            CVMX_ADD_IO_SEG(0x00011800F0000040ull)
#define  CVMX_IOB_OUTB_FPA_PRI_CNT                            CVMX_ADD_IO_SEG(0x00011800F0000048ull)
#define  CVMX_IOB_CTL_STATUS                                  CVMX_ADD_IO_SEG(0x00011800F0000050ull)
#define  CVMX_IOB_INT_SUM                                     CVMX_ADD_IO_SEG(0x00011800F0000058ull)
#define  CVMX_IOB_INT_ENB                                     CVMX_ADD_IO_SEG(0x00011800F0000060ull)
#define  CVMX_IOB_PKT_ERR                                     CVMX_ADD_IO_SEG(0x00011800F0000068ull)
#define  CVMX_IOB_INB_DATA_MATCH                              CVMX_ADD_IO_SEG(0x00011800F0000070ull)
#define  CVMX_IOB_INB_CONTROL_MATCH                           CVMX_ADD_IO_SEG(0x00011800F0000078ull)
#define  CVMX_IOB_INB_DATA_MATCH_ENB                          CVMX_ADD_IO_SEG(0x00011800F0000080ull)
#define  CVMX_IOB_INB_CONTROL_MATCH_ENB                       CVMX_ADD_IO_SEG(0x00011800F0000088ull)
#define  CVMX_IOB_OUTB_DATA_MATCH                             CVMX_ADD_IO_SEG(0x00011800F0000090ull)
#define  CVMX_IOB_OUTB_CONTROL_MATCH                          CVMX_ADD_IO_SEG(0x00011800F0000098ull)
#define  CVMX_IOB_OUTB_DATA_MATCH_ENB                         CVMX_ADD_IO_SEG(0x00011800F00000A0ull)
#define  CVMX_IOB_OUTB_CONTROL_MATCH_ENB                      CVMX_ADD_IO_SEG(0x00011800F00000A8ull)
#define  CVMX_IOB_BIST_STATUS                                 CVMX_ADD_IO_SEG(0x00011800F00007F8ull)
#define  CVMX_IPD_1ST_MBUFF_SKIP                              CVMX_ADD_IO_SEG(0x00014F0000000000ull)
#define  CVMX_IPD_NOT_1ST_MBUFF_SKIP                          CVMX_ADD_IO_SEG(0x00014F0000000008ull)
#define  CVMX_IPD_PACKET_MBUFF_SIZE                           CVMX_ADD_IO_SEG(0x00014F0000000010ull)
#define  CVMX_IPD_CTL_STATUS                                  CVMX_ADD_IO_SEG(0x00014F0000000018ull)
#define  CVMX_IPD_WQE_FPA_QUEUE                               CVMX_ADD_IO_SEG(0x00014F0000000020ull)
#define  CVMX_IPD_PORTX_BP_PAGE_CNT(offset)                  (CVMX_ADD_IO_SEG(0x00014F0000000028ull+((offset)*8)))
#define  CVMX_IPD_SUB_PORT_BP_PAGE_CNT                        CVMX_ADD_IO_SEG(0x00014F0000000148ull)
#define  CVMX_IPD_1st_NEXT_PTR_BACK                           CVMX_ADD_IO_SEG(0x00014F0000000150ull)
#define  CVMX_IPD_2nd_NEXT_PTR_BACK                           CVMX_ADD_IO_SEG(0x00014F0000000158ull)
#define  CVMX_IPD_INT_ENB                                     CVMX_ADD_IO_SEG(0x00014F0000000160ull)
#define  CVMX_IPD_INT_SUM                                     CVMX_ADD_IO_SEG(0x00014F0000000168ull)
#define  CVMX_IPD_SUB_PORT_FCS                                CVMX_ADD_IO_SEG(0x00014F0000000170ull)
#define  CVMX_IPD_QOS0_RED_MARKS                              CVMX_ADD_IO_SEG(0x00014F0000000178ull)
#define  CVMX_IPD_QOS1_RED_MARKS                              CVMX_ADD_IO_SEG(0x00014F0000000180ull)
#define  CVMX_IPD_QOS2_RED_MARKS                              CVMX_ADD_IO_SEG(0x00014F0000000188ull)
#define  CVMX_IPD_QOS3_RED_MARKS                              CVMX_ADD_IO_SEG(0x00014F0000000190ull)
#define  CVMX_IPD_QOS4_RED_MARKS                              CVMX_ADD_IO_SEG(0x00014F0000000198ull)
#define  CVMX_IPD_QOS5_RED_MARKS                              CVMX_ADD_IO_SEG(0x00014F00000001A0ull)
#define  CVMX_IPD_QOS6_RED_MARKS                              CVMX_ADD_IO_SEG(0x00014F00000001A8ull)
#define  CVMX_IPD_QOS7_RED_MARKS                              CVMX_ADD_IO_SEG(0x00014F00000001B0ull)
#define  CVMX_IPD_PORT_BP_COUNTERS_PAIRX(offset)             (CVMX_ADD_IO_SEG(0x00014F00000001B8ull+((offset)*8)))
#define  CVMX_IPD_RED_PORT_ENABLE                             CVMX_ADD_IO_SEG(0x00014F00000002D8ull)
#define  CVMX_IPD_RED_QUE0_PARAM                              CVMX_ADD_IO_SEG(0x00014F00000002E0ull)
#define  CVMX_IPD_RED_QUE1_PARAM                              CVMX_ADD_IO_SEG(0x00014F00000002E8ull)
#define  CVMX_IPD_RED_QUE2_PARAM                              CVMX_ADD_IO_SEG(0x00014F00000002F0ull)
#define  CVMX_IPD_RED_QUE3_PARAM                              CVMX_ADD_IO_SEG(0x00014F00000002F8ull)
#define  CVMX_IPD_RED_QUE4_PARAM                              CVMX_ADD_IO_SEG(0x00014F0000000300ull)
#define  CVMX_IPD_RED_QUE5_PARAM                              CVMX_ADD_IO_SEG(0x00014F0000000308ull)
#define  CVMX_IPD_RED_QUE6_PARAM                              CVMX_ADD_IO_SEG(0x00014F0000000310ull)
#define  CVMX_IPD_RED_QUE7_PARAM                              CVMX_ADD_IO_SEG(0x00014F0000000318ull)
#define  CVMX_IPD_PTR_COUNT                                   CVMX_ADD_IO_SEG(0x00014F0000000320ull)
#define  CVMX_IPD_BP_PRT_RED_END                              CVMX_ADD_IO_SEG(0x00014F0000000328ull)
#define  CVMX_IPD_QUE0_FREE_PAGE_CNT                          CVMX_ADD_IO_SEG(0x00014F0000000330ull)
#define  CVMX_IPD_CLK_COUNT                                   CVMX_ADD_IO_SEG(0x00014F0000000338ull)
#define  CVMX_IPD_BIST_STATUS                                 CVMX_ADD_IO_SEG(0x00014F00000007F8ull)
#define  CVMX_KEY_INT_SUM                                     CVMX_ADD_IO_SEG(0x0001180020000000ull)
#define  CVMX_KEY_INT_ENB                                     CVMX_ADD_IO_SEG(0x0001180020000008ull)
#define  CVMX_KEY_CTL_STATUS                                  CVMX_ADD_IO_SEG(0x0001180020000010ull)
#define  CVMX_KEY_BIST_REG                                    CVMX_ADD_IO_SEG(0x0001180020000018ull)
#define  CVMX_L2C_CFG                                         CVMX_ADD_IO_SEG(0x0001180080000000ull)
#define  CVMX_L2T_ERR                                         CVMX_ADD_IO_SEG(0x0001180080000008ull)
#define  CVMX_L2D_ERR                                         CVMX_ADD_IO_SEG(0x0001180080000010ull)
#define  CVMX_L2D_FADR                                        CVMX_ADD_IO_SEG(0x0001180080000018ull)
#define  CVMX_L2D_FSYN0                                       CVMX_ADD_IO_SEG(0x0001180080000020ull)
#define  CVMX_L2D_FSYN1                                       CVMX_ADD_IO_SEG(0x0001180080000028ull)
#define  CVMX_L2C_DBG                                         CVMX_ADD_IO_SEG(0x0001180080000030ull)
#define  CVMX_L2C_LFB0                                        CVMX_ADD_IO_SEG(0x0001180080000038ull)
#define  CVMX_L2C_LFB1                                        CVMX_ADD_IO_SEG(0x0001180080000040ull)
#define  CVMX_L2C_LFB2                                        CVMX_ADD_IO_SEG(0x0001180080000048ull)
#define  CVMX_L2C_DUT                                         CVMX_ADD_IO_SEG(0x0001180080000050ull)
#define  CVMX_L2C_LCKBASE                                     CVMX_ADD_IO_SEG(0x0001180080000058ull)
#define  CVMX_L2C_LCKOFF                                      CVMX_ADD_IO_SEG(0x0001180080000060ull)
#define  CVMX_L2C_SPAR0                                       CVMX_ADD_IO_SEG(0x0001180080000068ull)
#define  CVMX_L2C_SPAR1                                       CVMX_ADD_IO_SEG(0x0001180080000070ull)
#define  CVMX_L2C_SPAR2                                       CVMX_ADD_IO_SEG(0x0001180080000078ull)
#define  CVMX_L2C_SPAR3                                       CVMX_ADD_IO_SEG(0x0001180080000080ull)
#define  CVMX_L2C_SPAR4                                       CVMX_ADD_IO_SEG(0x0001180080000088ull)
#define  CVMX_L2C_PFCTL                                       CVMX_ADD_IO_SEG(0x0001180080000090ull)
#define  CVMX_L2C_PFC0                                        CVMX_ADD_IO_SEG(0x0001180080000098ull)
#define  CVMX_L2C_PFC1                                        CVMX_ADD_IO_SEG(0x00011800800000A0ull)
#define  CVMX_L2C_PFC2                                        CVMX_ADD_IO_SEG(0x00011800800000A8ull)
#define  CVMX_L2C_PFC3                                        CVMX_ADD_IO_SEG(0x00011800800000B0ull)
#define  CVMX_L2C_LFB3                                        CVMX_ADD_IO_SEG(0x00011800800000B8ull)
#define  CVMX_L2D_BST0                                        CVMX_ADD_IO_SEG(0x0001180080000780ull)
#define  CVMX_L2D_BST1                                        CVMX_ADD_IO_SEG(0x0001180080000788ull)
#define  CVMX_L2D_BST2                                        CVMX_ADD_IO_SEG(0x0001180080000790ull)
#define  CVMX_L2D_BST3                                        CVMX_ADD_IO_SEG(0x0001180080000798ull)
#define  CVMX_L2D_FUS0                                        CVMX_ADD_IO_SEG(0x00011800800007A0ull)
#define  CVMX_L2D_FUS1                                        CVMX_ADD_IO_SEG(0x00011800800007A8ull)
#define  CVMX_L2D_FUS2                                        CVMX_ADD_IO_SEG(0x00011800800007B0ull)
#define  CVMX_L2D_FUS3                                        CVMX_ADD_IO_SEG(0x00011800800007B8ull)
#define  CVMX_L2C_BST2                                        CVMX_ADD_IO_SEG(0x00011800800007E8ull)
#define  CVMX_L2C_BST1                                        CVMX_ADD_IO_SEG(0x00011800800007F0ull)
#define  CVMX_L2C_BST0                                        CVMX_ADD_IO_SEG(0x00011800800007F8ull)
#define  CVMX_LMC_MEM_CFG0                                    CVMX_ADD_IO_SEG(0x0001180088000000ull)
#define  CVMX_LMC_MEM_CFG1                                    CVMX_ADD_IO_SEG(0x0001180088000008ull)
#define  CVMX_LMC_CTL                                         CVMX_ADD_IO_SEG(0x0001180088000010ull)
#define  CVMX_LMC_DDR2_CTL                                    CVMX_ADD_IO_SEG(0x0001180088000018ull)
#define  CVMX_LMC_FADR                                        CVMX_ADD_IO_SEG(0x0001180088000020ull)
#define  CVMX_LMC_COMP_CTL                                    CVMX_ADD_IO_SEG(0x0001180088000028ull)
#define  CVMX_LMC_ODT_CTL                                     CVMX_ADD_IO_SEG(0x0001180088000030ull)
#define  CVMX_LMC_ECC_SYND                                    CVMX_ADD_IO_SEG(0x0001180088000038ull)
#define  CVMX_LMC_PLL_BWCTL                                   CVMX_ADD_IO_SEG(0x0001180088000040ull)
#define  CVMX_LMC_IFB_CNT_LO                                  CVMX_ADD_IO_SEG(0x0001180088000048ull)
#define  CVMX_LMC_IFB_CNT_HI                                  CVMX_ADD_IO_SEG(0x0001180088000050ull)
#define  CVMX_LMC_OPS_CNT_LO                                  CVMX_ADD_IO_SEG(0x0001180088000058ull)
#define  CVMX_LMC_OPS_CNT_HI                                  CVMX_ADD_IO_SEG(0x0001180088000060ull)
#define  CVMX_LMC_DCLK_CNT_LO                                 CVMX_ADD_IO_SEG(0x0001180088000068ull)
#define  CVMX_LMC_DCLK_CNT_HI                                 CVMX_ADD_IO_SEG(0x0001180088000070ull)
#define  CVMX_LMC_RODT_CTL                                    CVMX_ADD_IO_SEG(0x0001180088000078ull)
#define  CVMX_MIO_BOOT_REG_CFG0                               CVMX_ADD_IO_SEG(0x0001180000000000ull)
#define  CVMX_MIO_BOOT_REG_CFGX(offset)                      (CVMX_ADD_IO_SEG(0x0001180000000008ull+((offset)*8)-8*1))
#define  CVMX_MIO_BOOT_REG_TIM0                               CVMX_ADD_IO_SEG(0x0001180000000040ull)
#define  CVMX_MIO_BOOT_REG_TIMX(offset)                      (CVMX_ADD_IO_SEG(0x0001180000000048ull+((offset)*8)-8*1))
#define  CVMX_MIO_BOOT_LOC_CFGX(offset)                      (CVMX_ADD_IO_SEG(0x0001180000000080ull+((offset)*8)))
#define  CVMX_MIO_BOOT_LOC_ADR                                CVMX_ADD_IO_SEG(0x0001180000000090ull)
#define  CVMX_MIO_BOOT_LOC_DAT                                CVMX_ADD_IO_SEG(0x0001180000000098ull)
#define  CVMX_MIO_BOOT_ERR                                    CVMX_ADD_IO_SEG(0x00011800000000A0ull)
#define  CVMX_MIO_BOOT_INT                                    CVMX_ADD_IO_SEG(0x00011800000000A8ull)
#define  CVMX_MIO_BOOT_THR                                    CVMX_ADD_IO_SEG(0x00011800000000B0ull)
#define  CVMX_MIO_BOOT_BIST_STAT                              CVMX_ADD_IO_SEG(0x00011800000000F8ull)
#define  CVMX_MIO_UARTX_RBR(offset)                          (CVMX_ADD_IO_SEG(0x0001180000000800ull+((offset)*1024)))
#define  CVMX_MIO_UARTX_THR(offset)                          (CVMX_ADD_IO_SEG(0x0001180000000840ull+((offset)*1024)))
#define  CVMX_MIO_UARTX_DLL(offset)                          (CVMX_ADD_IO_SEG(0x0001180000000880ull+((offset)*1024)))
#define  CVMX_MIO_UARTX_IER(offset)                          (CVMX_ADD_IO_SEG(0x0001180000000808ull+((offset)*1024)))
#define  CVMX_MIO_UARTX_DLH(offset)                          (CVMX_ADD_IO_SEG(0x0001180000000888ull+((offset)*1024)))
#define  CVMX_MIO_UARTX_IIR(offset)                          (CVMX_ADD_IO_SEG(0x0001180000000810ull+((offset)*1024)))
#define  CVMX_MIO_UARTX_FCR(offset)                          (CVMX_ADD_IO_SEG(0x0001180000000850ull+((offset)*1024)))
#define  CVMX_MIO_UARTX_LCR(offset)                          (CVMX_ADD_IO_SEG(0x0001180000000818ull+((offset)*1024)))
#define  CVMX_MIO_UARTX_MCR(offset)                          (CVMX_ADD_IO_SEG(0x0001180000000820ull+((offset)*1024)))
#define  CVMX_MIO_UARTX_LSR(offset)                          (CVMX_ADD_IO_SEG(0x0001180000000828ull+((offset)*1024)))
#define  CVMX_MIO_UARTX_MSR(offset)                          (CVMX_ADD_IO_SEG(0x0001180000000830ull+((offset)*1024)))
#define  CVMX_MIO_UARTX_SCR(offset)                          (CVMX_ADD_IO_SEG(0x0001180000000838ull+((offset)*1024)))
#define  CVMX_MIO_UARTX_FAR(offset)                          (CVMX_ADD_IO_SEG(0x0001180000000920ull+((offset)*1024)))
#define  CVMX_MIO_UARTX_TFR(offset)                          (CVMX_ADD_IO_SEG(0x0001180000000928ull+((offset)*1024)))
#define  CVMX_MIO_UARTX_RFW(offset)                          (CVMX_ADD_IO_SEG(0x0001180000000930ull+((offset)*1024)))
#define  CVMX_MIO_UARTX_USR(offset)                          (CVMX_ADD_IO_SEG(0x0001180000000938ull+((offset)*1024)))
#define  CVMX_MIO_UARTX_TFL(offset)                          (CVMX_ADD_IO_SEG(0x0001180000000A00ull+((offset)*1024)))
#define  CVMX_MIO_UARTX_RFL(offset)                          (CVMX_ADD_IO_SEG(0x0001180000000A08ull+((offset)*1024)))
#define  CVMX_MIO_UARTX_SRR(offset)                          (CVMX_ADD_IO_SEG(0x0001180000000A10ull+((offset)*1024)))
#define  CVMX_MIO_UARTX_SRTS(offset)                         (CVMX_ADD_IO_SEG(0x0001180000000A18ull+((offset)*1024)))
#define  CVMX_MIO_UARTX_SBCR(offset)                         (CVMX_ADD_IO_SEG(0x0001180000000A20ull+((offset)*1024)))
#define  CVMX_MIO_UARTX_SFE(offset)                          (CVMX_ADD_IO_SEG(0x0001180000000A30ull+((offset)*1024)))
#define  CVMX_MIO_UARTX_SRT(offset)                          (CVMX_ADD_IO_SEG(0x0001180000000A38ull+((offset)*1024)))
#define  CVMX_MIO_UARTX_STT(offset)                          (CVMX_ADD_IO_SEG(0x0001180000000B00ull+((offset)*1024)))
#define  CVMX_MIO_UARTX_HTX(offset)                          (CVMX_ADD_IO_SEG(0x0001180000000B08ull+((offset)*1024)))
#define  CVMX_MIO_FUS_DAT0                                    CVMX_ADD_IO_SEG(0x0001180000001400ull)
#define  CVMX_MIO_FUS_DAT1                                    CVMX_ADD_IO_SEG(0x0001180000001408ull)
#define  CVMX_MIO_FUS_DAT2                                    CVMX_ADD_IO_SEG(0x0001180000001410ull)
#define  CVMX_MIO_FUS_DAT3                                    CVMX_ADD_IO_SEG(0x0001180000001418ull)
#define  CVMX_MIO_FUS_RCMD                                    CVMX_ADD_IO_SEG(0x0001180000001500ull)
#define  CVMX_MIO_FUS_WADR                                    CVMX_ADD_IO_SEG(0x0001180000001508ull)
#define  CVMX_MIO_FUS_PROG                                    CVMX_ADD_IO_SEG(0x0001180000001510ull)
#define  CVMX_CIU_INTX_SUM0(offset)                          (CVMX_ADD_IO_SEG(0x0001070000000000ull+((offset)*8)))
#define  CVMX_CIU_INT_SUM1                                    CVMX_ADD_IO_SEG(0x0001070000000108ull)
#define  CVMX_CIU_INTX_EN0(offset)                           (CVMX_ADD_IO_SEG(0x0001070000000200ull+((offset)*16)))
#define  CVMX_CIU_INTX_EN1(offset)                           (CVMX_ADD_IO_SEG(0x0001070000000208ull+((offset)*16)))
#define  CVMX_CIU_TIMX(offset)                               (CVMX_ADD_IO_SEG(0x0001070000000480ull+((offset)*8)))
#define  CVMX_CIU_WDOGX(offset)                              (CVMX_ADD_IO_SEG(0x0001070000000500ull+((offset)*8)))
#define  CVMX_CIU_PP_POKEX(offset)                           (CVMX_ADD_IO_SEG(0x0001070000000580ull+((offset)*8)))
#define  CVMX_CIU_MBOX_SETX(offset)                          (CVMX_ADD_IO_SEG(0x0001070000000600ull+((offset)*8)))
#define  CVMX_CIU_MBOX_CLRX(offset)                          (CVMX_ADD_IO_SEG(0x0001070000000680ull+((offset)*8)))
#define  CVMX_CIU_PP_RST                                      CVMX_ADD_IO_SEG(0x0001070000000700ull)
#define  CVMX_CIU_PP_DBG                                      CVMX_ADD_IO_SEG(0x0001070000000708ull)
#define  CVMX_CIU_GSTOP                                       CVMX_ADD_IO_SEG(0x0001070000000710ull)
#define  CVMX_CIU_NMI                                         CVMX_ADD_IO_SEG(0x0001070000000718ull)
#define  CVMX_CIU_DINT                                        CVMX_ADD_IO_SEG(0x0001070000000720ull)
#define  CVMX_CIU_FUSE                                        CVMX_ADD_IO_SEG(0x0001070000000728ull)
#define  CVMX_CIU_BIST                                        CVMX_ADD_IO_SEG(0x0001070000000730ull)
#define  CVMX_CIU_SOFT_BIST                                   CVMX_ADD_IO_SEG(0x0001070000000738ull)
#define  CVMX_CIU_SOFT_RST                                    CVMX_ADD_IO_SEG(0x0001070000000740ull)
#define  CVMX_CIU_SOFT_PRST                                   CVMX_ADD_IO_SEG(0x0001070000000748ull)
#define  CVMX_CIU_PCI_INTA                                    CVMX_ADD_IO_SEG(0x0001070000000750ull)
#define  CVMX_GPIO_BIT_CFGX(offset)                          (CVMX_ADD_IO_SEG(0x0001070000000800ull+((offset)*8)))
#define  CVMX_GPIO_RX_DAT                                     CVMX_ADD_IO_SEG(0x0001070000000880ull)
#define  CVMX_GPIO_TX_SET                                     CVMX_ADD_IO_SEG(0x0001070000000808ull) /* Pass1 GPIO-1 Errata - Overlaps with GPIO_BIT_CFG1 */
#define  CVMX_GPIO_TX_CLR                                     CVMX_ADD_IO_SEG(0x0001070000000810ull) /* Pass1 GPIO-1 Errata - Overlaps with GPIO_BIT_CFG2 */
#define  CVMX_GPIO_INT_CLR                                    CVMX_ADD_IO_SEG(0x0001070000000818ull) /* Pass1 GPIO-1 Errata - Overlaps with GPIO_BIT_CFG3 */
#define  CVMX_LED_EN                                          CVMX_ADD_IO_SEG(0x0001180000001A00ull)
#define  CVMX_LED_CLK_PHASE                                   CVMX_ADD_IO_SEG(0x0001180000001A08ull)
#define  CVMX_LED_PRT                                         CVMX_ADD_IO_SEG(0x0001180000001A10ull)
#define  CVMX_LED_DBG                                         CVMX_ADD_IO_SEG(0x0001180000001A18ull)
#define  CVMX_LED_UDD_CNTX(offset)                           (CVMX_ADD_IO_SEG(0x0001180000001A20ull+((offset)*8)))
#define  CVMX_LED_PRT_FMT                                     CVMX_ADD_IO_SEG(0x0001180000001A30ull)
#define  CVMX_LED_UDD_DATX(offset)                           (CVMX_ADD_IO_SEG(0x0001180000001A38ull+((offset)*8)))
#define  CVMX_LED_BLINK                                       CVMX_ADD_IO_SEG(0x0001180000001A48ull)
#define  CVMX_LED_POLARITY                                    CVMX_ADD_IO_SEG(0x0001180000001A50ull)
#define  CVMX_LED_PRT_STATUSX(offset)                        (CVMX_ADD_IO_SEG(0x0001180000001A80ull+((offset)*8)))
#define  CVMX_LED_UDD_DAT_SETX(offset)                       (CVMX_ADD_IO_SEG(0x0001180000001AC0ull+((offset)*16)))
#define  CVMX_LED_UDD_DAT_CLRX(offset)                       (CVMX_ADD_IO_SEG(0x0001180000001AC8ull+((offset)*16)))
#define  CVMX_LED_CYLON                                       CVMX_ADD_IO_SEG(0x0001180000001AF8ull)
#define  CVMX_SMI_CMD                                         CVMX_ADD_IO_SEG(0x0001180000001800ull)
#define  CVMX_SMI_WR_DAT                                      CVMX_ADD_IO_SEG(0x0001180000001808ull)
#define  CVMX_SMI_RD_DAT                                      CVMX_ADD_IO_SEG(0x0001180000001810ull)
#define  CVMX_SMI_CLK                                         CVMX_ADD_IO_SEG(0x0001180000001818ull)
#define  CVMX_SMI_EN                                          CVMX_ADD_IO_SEG(0x0001180000001820ull)
#define  CVMX_MIO_TWS_SW_TWSI                                 CVMX_ADD_IO_SEG(0x0001180000001000ull)
#define  CVMX_MIO_TWS_TWSI_SW                                 CVMX_ADD_IO_SEG(0x0001180000001008ull)
#define  CVMX_MIO_TWS_INT                                     CVMX_ADD_IO_SEG(0x0001180000001010ull)
#define  CVMX_MIO_TWS_SW_TWSI_EXT                             CVMX_ADD_IO_SEG(0x0001180000001018ull)
#define  CVMX_NPI_RSL_INT_BLOCKS                              CVMX_ADD_IO_SEG(0x00011F0000000000ull)
#define  CVMX_NPI_DBG_SELECT                                  CVMX_ADD_IO_SEG(0x00011F0000000008ull)
#define  CVMX_NPI_CTL_STATUS                                  CVMX_ADD_IO_SEG(0x00011F0000000010ull)
#define  CVMX_NPI_INT_SUM                                     CVMX_ADD_IO_SEG(0x00011F0000000018ull)
#define  CVMX_NPI_INT_ENB                                     CVMX_ADD_IO_SEG(0x00011F0000000020ull)
#define  CVMX_NPI_MEM_ACCESS_SUBID3                           CVMX_ADD_IO_SEG(0x00011F0000000028ull)
#define  CVMX_NPI_MEM_ACCESS_SUBID4                           CVMX_ADD_IO_SEG(0x00011F0000000030ull)
#define  CVMX_NPI_MEM_ACCESS_SUBID5                           CVMX_ADD_IO_SEG(0x00011F0000000038ull)
#define  CVMX_NPI_MEM_ACCESS_SUBID6                           CVMX_ADD_IO_SEG(0x00011F0000000040ull)
#define  CVMX_NPI_PCI_READ_CMD                                CVMX_ADD_IO_SEG(0x00011F0000000048ull)
#define  CVMX_NPI_NUM_DESC_OUTPUT0                            CVMX_ADD_IO_SEG(0x00011F0000000050ull)
#define  CVMX_NPI_NUM_DESC_OUTPUT1                            CVMX_ADD_IO_SEG(0x00011F0000000058ull)
#define  CVMX_NPI_NUM_DESC_OUTPUT2                            CVMX_ADD_IO_SEG(0x00011F0000000060ull)
#define  CVMX_NPI_NUM_DESC_OUTPUT3                            CVMX_ADD_IO_SEG(0x00011F0000000068ull)
#define  CVMX_NPI_BASE_ADDR_INPUT0                            CVMX_ADD_IO_SEG(0x00011F0000000070ull)
#define  CVMX_NPI_SIZE_INPUT0                                 CVMX_ADD_IO_SEG(0x00011F0000000078ull)
#define  CVMX_NPI_BASE_ADDR_INPUT1                            CVMX_ADD_IO_SEG(0x00011F0000000080ull)
#define  CVMX_NPI_SIZE_INPUT1                                 CVMX_ADD_IO_SEG(0x00011F0000000088ull)
#define  CVMX_NPI_BASE_ADDR_INPUT2                            CVMX_ADD_IO_SEG(0x00011F0000000090ull)
#define  CVMX_NPI_SIZE_INPUT2                                 CVMX_ADD_IO_SEG(0x00011F0000000098ull)
#define  CVMX_NPI_BASE_ADDR_INPUT3                            CVMX_ADD_IO_SEG(0x00011F00000000A0ull)
#define  CVMX_NPI_SIZE_INPUT3                                 CVMX_ADD_IO_SEG(0x00011F00000000A8ull)
#define  CVMX_PCI_READ_TIMEOUT                                CVMX_ADD_IO_SEG(0x00011F00000000B0ull)
#define  CVMX_NPI_BASE_ADDR_OUTPUT0                           CVMX_ADD_IO_SEG(0x00011F00000000B8ull)
#define  CVMX_NPI_BASE_ADDR_OUTPUT1                           CVMX_ADD_IO_SEG(0x00011F00000000C0ull)
#define  CVMX_NPI_BASE_ADDR_OUTPUT2                           CVMX_ADD_IO_SEG(0x00011F00000000C8ull)
#define  CVMX_NPI_BASE_ADDR_OUTPUT3                           CVMX_ADD_IO_SEG(0x00011F00000000D0ull)
#define  CVMX_NPI_PCI_BURST_SIZE                              CVMX_ADD_IO_SEG(0x00011F00000000D8ull)
#define  CVMX_NPI_BUFF_SIZE_OUTPUT0                           CVMX_ADD_IO_SEG(0x00011F00000000E0ull)
#define  CVMX_NPI_BUFF_SIZE_OUTPUT1                           CVMX_ADD_IO_SEG(0x00011F00000000E8ull)
#define  CVMX_NPI_BUFF_SIZE_OUTPUT2                           CVMX_ADD_IO_SEG(0x00011F00000000F0ull)
#define  CVMX_NPI_BUFF_SIZE_OUTPUT3                           CVMX_ADD_IO_SEG(0x00011F00000000F8ull)
#define  CVMX_NPI_OUTPUT_CONTROL                              CVMX_ADD_IO_SEG(0x00011F0000000100ull)
#define  CVMX_NPI_LOWP_IBUFF_SADDR                            CVMX_ADD_IO_SEG(0x00011F0000000108ull)
#define  CVMX_NPI_HIGHP_IBUFF_SADDR                           CVMX_ADD_IO_SEG(0x00011F0000000110ull)
#define  CVMX_NPI_LOWP_DBELL                                  CVMX_ADD_IO_SEG(0x00011F0000000118ull)
#define  CVMX_NPI_HIGHP_DBELL                                 CVMX_ADD_IO_SEG(0x00011F0000000120ull)
#define  CVMX_NPI_DMA_CONTROL                                 CVMX_ADD_IO_SEG(0x00011F0000000128ull)
#define  CVMX_NPI_PCI_INT_ARB_CFG                             CVMX_ADD_IO_SEG(0x00011F0000000130ull)
#define  CVMX_NPI_INPUT_CONTROL                               CVMX_ADD_IO_SEG(0x00011F0000000138ull)
#define  CVMX_NPI_DMA_LOWP_COUNTS                             CVMX_ADD_IO_SEG(0x00011F0000000140ull)
#define  CVMX_NPI_DMA_HIGHP_COUNTS                            CVMX_ADD_IO_SEG(0x00011F0000000148ull)
#define  CVMX_NPI_DMA_LOWP_NADDR                              CVMX_ADD_IO_SEG(0x00011F0000000150ull)
#define  CVMX_NPI_DMA_HIGHP_NADDR                             CVMX_ADD_IO_SEG(0x00011F0000000158ull)
#define  CVMX_NPI_P0_PAIR_CNTS                                CVMX_ADD_IO_SEG(0x00011F0000000160ull)
#define  CVMX_NPI_P1_PAIR_CNTS                                CVMX_ADD_IO_SEG(0x00011F0000000168ull)
#define  CVMX_NPI_P2_PAIR_CNTS                                CVMX_ADD_IO_SEG(0x00011F0000000170ull)
#define  CVMX_NPI_P3_PAIR_CNTS                                CVMX_ADD_IO_SEG(0x00011F0000000178ull)
#define  CVMX_NPI_P0_DBPAIR_ADDR                              CVMX_ADD_IO_SEG(0x00011F0000000180ull)
#define  CVMX_NPI_P1_DBPAIR_ADDR                              CVMX_ADD_IO_SEG(0x00011F0000000188ull)
#define  CVMX_NPI_P2_DBPAIR_ADDR                              CVMX_ADD_IO_SEG(0x00011F0000000190ull)
#define  CVMX_NPI_P3_DBPAIR_ADDR                              CVMX_ADD_IO_SEG(0x00011F0000000198ull)
#define  CVMX_NPI_P0_INSTR_CNTS                               CVMX_ADD_IO_SEG(0x00011F00000001A0ull)
#define  CVMX_NPI_P1_INSTR_CNTS                               CVMX_ADD_IO_SEG(0x00011F00000001A8ull)
#define  CVMX_NPI_P2_INSTR_CNTS                               CVMX_ADD_IO_SEG(0x00011F00000001B0ull)
#define  CVMX_NPI_P3_INSTR_CNTS                               CVMX_ADD_IO_SEG(0x00011F00000001B8ull)
#define  CVMX_NPI_P0_INSTR_ADDR                               CVMX_ADD_IO_SEG(0x00011F00000001C0ull)
#define  CVMX_NPI_P1_INSTR_ADDR                               CVMX_ADD_IO_SEG(0x00011F00000001C8ull)
#define  CVMX_NPI_P2_INSTR_ADDR                               CVMX_ADD_IO_SEG(0x00011F00000001D0ull)
#define  CVMX_NPI_P3_INSTR_ADDR                               CVMX_ADD_IO_SEG(0x00011F00000001D8ull)
#define  CVMX_NPI_WIN_READ_TO                                 CVMX_ADD_IO_SEG(0x00011F00000001E0ull)
#define  CVMX_DBG_DATA                                        CVMX_ADD_IO_SEG(0x00011F00000001E8ull)
#define  CVMX_NPI_PORT_BP_CONTROL                             CVMX_ADD_IO_SEG(0x00011F00000001F0ull)
#define  CVMX_NPI_PORT32_INSTR_HDR                            CVMX_ADD_IO_SEG(0x00011F00000001F8ull)
#define  CVMX_NPI_PORT33_INSTR_HDR                            CVMX_ADD_IO_SEG(0x00011F0000000200ull)
#define  CVMX_NPI_PORT34_INSTR_HDR                            CVMX_ADD_IO_SEG(0x00011F0000000208ull)
#define  CVMX_NPI_PORT35_INSTR_HDR                            CVMX_ADD_IO_SEG(0x00011F0000000210ull)
#define  CVMX_NPI_BIST_STATUS                                 CVMX_ADD_IO_SEG(0x00011F00000003F8ull)
#define  CVMX_PCI_CFG00                                                      (0x0000000000000000ull)
#define  CVMX_PCI_CFG01                                                      (0x0000000000000004ull)
#define  CVMX_PCI_CFG02                                                      (0x0000000000000008ull)
#define  CVMX_PCI_CFG03                                                      (0x000000000000000Cull)
#define  CVMX_PCI_CFG04                                                      (0x0000000000000010ull)
#define  CVMX_PCI_CFG05                                                      (0x0000000000000014ull)
#define  CVMX_PCI_CFG06                                                      (0x0000000000000018ull)
#define  CVMX_PCI_CFG07                                                      (0x000000000000001Cull)
#define  CVMX_PCI_CFG08                                                      (0x0000000000000020ull)
#define  CVMX_PCI_CFG09                                                      (0x0000000000000024ull)
#define  CVMX_PCI_CFG10                                                      (0x0000000000000028ull)
#define  CVMX_PCI_CFG11                                                      (0x000000000000002Cull)
#define  CVMX_PCI_CFG12                                                      (0x0000000000000030ull)
#define  CVMX_PCI_CFG13                                                      (0x0000000000000034ull)
#define  CVMX_PCI_CFG15                                                      (0x000000000000003Cull)
#define  CVMX_PCI_CFG16                                                      (0x0000000000000040ull)
#define  CVMX_PCI_CFG17                                                      (0x0000000000000044ull)
#define  CVMX_PCI_CFG18                                                      (0x0000000000000048ull)
#define  CVMX_PCI_CFG19                                                      (0x000000000000004Cull)
#define  CVMX_PCI_CFG20                                                      (0x0000000000000050ull)
#define  CVMX_PCI_CFG21                                                      (0x0000000000000054ull)
#define  CVMX_PCI_CFG22                                                      (0x0000000000000058ull)
#define  CVMX_PCI_CFG56                                                      (0x00000000000000E0ull)
#define  CVMX_PCI_CFG57                                                      (0x00000000000000E4ull)
#define  CVMX_PCI_CFG58                                                      (0x00000000000000E8ull)
#define  CVMX_PCI_CFG59                                                      (0x00000000000000ECull)
#define  CVMX_PCI_CFG60                                                      (0x00000000000000F0ull)
#define  CVMX_PCI_CFG61                                                      (0x00000000000000F4ull)
#define  CVMX_PCI_CFG62                                                      (0x00000000000000F8ull)
#define  CVMX_PCI_CFG63                                                      (0x00000000000000FCull)
#define  CVMX_PIP_BIST_STATUS                                 CVMX_ADD_IO_SEG(0x00011800A0000000ull)
#define  CVMX_PIP_INT_REG                                     CVMX_ADD_IO_SEG(0x00011800A0000008ull)
#define  CVMX_PIP_INT_EN                                      CVMX_ADD_IO_SEG(0x00011800A0000010ull)
#define  CVMX_PIP_STAT_CTL                                    CVMX_ADD_IO_SEG(0x00011800A0000018ull)
#define  CVMX_PIP_GBL_CTL                                     CVMX_ADD_IO_SEG(0x00011800A0000020ull)
#define  CVMX_PIP_GBL_CFG                                     CVMX_ADD_IO_SEG(0x00011800A0000028ull)
#define  CVMX_PIP_BCK_PRS                                     CVMX_ADD_IO_SEG(0x00011800A0000038ull)
#define  CVMX_PIP_CRC_CTLX(offset)                           (CVMX_ADD_IO_SEG(0x00011800A0000040ull+((offset)*8)))
#define  CVMX_PIP_CRC_IVX(offset)                            (CVMX_ADD_IO_SEG(0x00011800A0000050ull+((offset)*8)))
#define  CVMX_PIP_IP_OFFSET                                   CVMX_ADD_IO_SEG(0x00011800A0000060ull)
#define  CVMX_PIP_TAG_SECRET                                  CVMX_ADD_IO_SEG(0x00011800A0000068ull)
#define  CVMX_PIP_TAG_MASK                                    CVMX_ADD_IO_SEG(0x00011800A0000070ull)
#define  CVMX_PIP_TODO_ENTRY                                  CVMX_ADD_IO_SEG(0x00011800A0000078ull)
#define  CVMX_PIP_DEC_IPSECX(offset)                         (CVMX_ADD_IO_SEG(0x00011800A0000080ull+((offset)*8)))
#define  CVMX_PIP_RAW_WORD                                    CVMX_ADD_IO_SEG(0x00011800A00000B0ull)
#define  CVMX_PIP_QOS_VLANX(offset)                          (CVMX_ADD_IO_SEG(0x00011800A00000C0ull+((offset)*8)))
#define  CVMX_PIP_QOS_WATCHX(offset)                         (CVMX_ADD_IO_SEG(0x00011800A0000100ull+((offset)*8)))
#define  CVMX_PIP_PRT_CFGX(offset)                           (CVMX_ADD_IO_SEG(0x00011800A0000200ull+((offset)*8)))
#define  CVMX_PIP_PRT_TAGX(offset)                           (CVMX_ADD_IO_SEG(0x00011800A0000400ull+((offset)*8)))
#define  CVMX_PIP_QOS_DIFFX(offset)                          (CVMX_ADD_IO_SEG(0x00011800A0000600ull+((offset)*8)))
#define  CVMX_PIP_STAT0_PRTX(offset)                         (CVMX_ADD_IO_SEG(0x00011800A0000800ull+((offset)*80)))
#define  CVMX_PIP_STAT1_PRTX(offset)                         (CVMX_ADD_IO_SEG(0x00011800A0000808ull+((offset)*80)))
#define  CVMX_PIP_STAT2_PRTX(offset)                         (CVMX_ADD_IO_SEG(0x00011800A0000810ull+((offset)*80)))
#define  CVMX_PIP_STAT3_PRTX(offset)                         (CVMX_ADD_IO_SEG(0x00011800A0000818ull+((offset)*80)))
#define  CVMX_PIP_STAT4_PRTX(offset)                         (CVMX_ADD_IO_SEG(0x00011800A0000820ull+((offset)*80)))
#define  CVMX_PIP_STAT5_PRTX(offset)                         (CVMX_ADD_IO_SEG(0x00011800A0000828ull+((offset)*80)))
#define  CVMX_PIP_STAT6_PRTX(offset)                         (CVMX_ADD_IO_SEG(0x00011800A0000830ull+((offset)*80)))
#define  CVMX_PIP_STAT7_PRTX(offset)                         (CVMX_ADD_IO_SEG(0x00011800A0000838ull+((offset)*80)))
#define  CVMX_PIP_STAT8_PRTX(offset)                         (CVMX_ADD_IO_SEG(0x00011800A0000840ull+((offset)*80)))
#define  CVMX_PIP_STAT9_PRTX(offset)                         (CVMX_ADD_IO_SEG(0x00011800A0000848ull+((offset)*80)))
#define  CVMX_PIP_STAT_INB_PKTSX(offset)                     (CVMX_ADD_IO_SEG(0x00011800A0001A00ull+((offset)*32)))
#define  CVMX_PIP_STAT_INB_OCTSX(offset)                     (CVMX_ADD_IO_SEG(0x00011800A0001A08ull+((offset)*32)))
#define  CVMX_PIP_STAT_INB_ERRSX(offset)                     (CVMX_ADD_IO_SEG(0x00011800A0001A10ull+((offset)*32)))
#define  CVMX_PIP_TAG_INCX(offset)                           (CVMX_ADD_IO_SEG(0x00011800A0001800ull+((offset)*8)))
#define  CVMX_PKO_REG_FLAGS                                   CVMX_ADD_IO_SEG(0x0001180050000000ull)
#define  CVMX_PKO_REG_READ_IDX                                CVMX_ADD_IO_SEG(0x0001180050000008ull)
#define  CVMX_PKO_REG_CMD_BUF                                 CVMX_ADD_IO_SEG(0x0001180050000010ull)
#define  CVMX_PKO_REG_GMX_PORT_MODE                           CVMX_ADD_IO_SEG(0x0001180050000018ull)
#define  CVMX_PKO_REG_CRC_ENABLE                              CVMX_ADD_IO_SEG(0x0001180050000020ull)
#define  CVMX_PKO_REG_CRC_CTLX(offset)                       (CVMX_ADD_IO_SEG(0x0001180050000028ull+((offset)*8)))
#define  CVMX_PKO_REG_CRC_IVX(offset)                        (CVMX_ADD_IO_SEG(0x0001180050000038ull+((offset)*8)))
#define  CVMX_PKO_REG_QUEUE_MODE                              CVMX_ADD_IO_SEG(0x0001180050000048ull)
#define  CVMX_PKO_REG_BIST_RESULT                             CVMX_ADD_IO_SEG(0x0001180050000080ull)
#define  CVMX_PKO_REG_ERROR                                   CVMX_ADD_IO_SEG(0x0001180050000088ull)
#define  CVMX_PKO_REG_INT_MASK                                CVMX_ADD_IO_SEG(0x0001180050000090ull)
#define  CVMX_PKO_REG_DEBUG0                                  CVMX_ADD_IO_SEG(0x0001180050000098ull)
#define  CVMX_PKO_MEM_QUEUE_PTRS                              CVMX_ADD_IO_SEG(0x0001180050001000ull)
#define  CVMX_PKO_MEM_QUEUE_QOS                               CVMX_ADD_IO_SEG(0x0001180050001008ull)
#define  CVMX_PKO_MEM_COUNT0                                  CVMX_ADD_IO_SEG(0x0001180050001080ull)
#define  CVMX_PKO_MEM_COUNT1                                  CVMX_ADD_IO_SEG(0x0001180050001088ull)
#define  CVMX_PKO_MEM_DEBUG0                                  CVMX_ADD_IO_SEG(0x0001180050001100ull)
#define  CVMX_PKO_MEM_DEBUG1                                  CVMX_ADD_IO_SEG(0x0001180050001108ull)
#define  CVMX_PKO_MEM_DEBUG2                                  CVMX_ADD_IO_SEG(0x0001180050001110ull)
#define  CVMX_PKO_MEM_DEBUG3                                  CVMX_ADD_IO_SEG(0x0001180050001118ull)
#define  CVMX_PKO_MEM_DEBUG4                                  CVMX_ADD_IO_SEG(0x0001180050001120ull)
#define  CVMX_PKO_MEM_DEBUG5                                  CVMX_ADD_IO_SEG(0x0001180050001128ull)
#define  CVMX_PKO_MEM_DEBUG6                                  CVMX_ADD_IO_SEG(0x0001180050001130ull)
#define  CVMX_PKO_MEM_DEBUG7                                  CVMX_ADD_IO_SEG(0x0001180050001138ull)
#define  CVMX_PKO_MEM_DEBUG8                                  CVMX_ADD_IO_SEG(0x0001180050001140ull)
#define  CVMX_PKO_MEM_DEBUG9                                  CVMX_ADD_IO_SEG(0x0001180050001148ull)
#define  CVMX_PKO_MEM_DEBUG10                                 CVMX_ADD_IO_SEG(0x0001180050001150ull)
#define  CVMX_PKO_MEM_DEBUG11                                 CVMX_ADD_IO_SEG(0x0001180050001158ull)
#define  CVMX_PKO_MEM_DEBUG12                                 CVMX_ADD_IO_SEG(0x0001180050001160ull)
#define  CVMX_PKO_MEM_DEBUG13                                 CVMX_ADD_IO_SEG(0x0001180050001168ull)
#define  CVMX_PKO_MEM_DEBUG14                                 CVMX_ADD_IO_SEG(0x0001180050001170ull)
#define  CVMX_PCI_WIN_WR_ADDR                                                (0x0000000000000000ull)
#define  CVMX_PCI_WIN_RD_ADDR                                                (0x0000000000000008ull)
#define  CVMX_PCI_WIN_WR_DATA                                                (0x0000000000000010ull)
#define  CVMX_PCI_WIN_WR_MASK                                                (0x0000000000000018ull)
#define  CVMX_PCI_WIN_RD_DATA                                                (0x0000000000000020ull)
#define  CVMX_PCI_INT_SUM                                                    (0x0000000000000030ull)
#define  CVMX_PCI_INT_ENB                                                    (0x0000000000000038ull)
#define  CVMX_PCI_PKTS_SENT0                                                 (0x0000000000000040ull)
#define  CVMX_PCI_PKTS_SENT1                                                 (0x0000000000000050ull)
#define  CVMX_PCI_PKTS_SENT2                                                 (0x0000000000000060ull)
#define  CVMX_PCI_PKTS_SENT3                                                 (0x0000000000000070ull)
#define  CVMX_PCI_PKT_CREDITS0                                               (0x0000000000000044ull)
#define  CVMX_PCI_PKT_CREDITS1                                               (0x0000000000000054ull)
#define  CVMX_PCI_PKT_CREDITS2                                               (0x0000000000000064ull)
#define  CVMX_PCI_PKT_CREDITS3                                               (0x0000000000000074ull)
#define  CVMX_PCI_PKTS_SENT_INT_LEV0                                         (0x0000000000000048ull)
#define  CVMX_PCI_PKTS_SENT_INT_LEV1                                         (0x0000000000000058ull)
#define  CVMX_PCI_PKTS_SENT_INT_LEV2                                         (0x0000000000000068ull)
#define  CVMX_PCI_PKTS_SENT_INT_LEV3                                         (0x0000000000000078ull)
#define  CVMX_PCI_PKTS_SENT_TIME0                                            (0x000000000000004Cull)
#define  CVMX_PCI_PKTS_SENT_TIME1                                            (0x000000000000005Cull)
#define  CVMX_PCI_PKTS_SENT_TIME2                                            (0x000000000000006Cull)
#define  CVMX_PCI_PKTS_SENT_TIME3                                            (0x000000000000007Cull)
#define  CVMX_PCI_DBELL_0                                                    (0x0000000000000080ull)
#define  CVMX_PCI_DBELL_1                                                    (0x0000000000000088ull)
#define  CVMX_PCI_DBELL_2                                                    (0x0000000000000090ull)
#define  CVMX_PCI_DBELL_3                                                    (0x0000000000000098ull)
#define  CVMX_PCI_INSTR_COUNT0                                               (0x0000000000000084ull)
#define  CVMX_PCI_INSTR_COUNT1                                               (0x000000000000008Cull)
#define  CVMX_PCI_INSTR_COUNT2                                               (0x0000000000000094ull)
#define  CVMX_PCI_INSTR_COUNT3                                               (0x000000000000009Cull)
#define  CVMX_PCI_DMA_CNT0                                                   (0x00000000000000A0ull)
#define  CVMX_PCI_DMA_CNT1                                                   (0x00000000000000A8ull)
#define  CVMX_PCI_DMA_INT_LEV0                                               (0x00000000000000A4ull)
#define  CVMX_PCI_DMA_INT_LEV1                                               (0x00000000000000ACull)
#define  CVMX_PCI_DMA_TIME0                                                  (0x00000000000000B0ull)
#define  CVMX_PCI_DMA_TIME1                                                  (0x00000000000000B4ull)
#define  CVMX_PCI_MSI_RCV                                                    (0x00000000000000F0ull)
#define  CVMX_PCI_BAR1_INDEXX(offset)                                       ((0x0000000000000100ull+((offset)*4)))
#define  CVMX_PCI_READ_CMD_6                                                 (0x0000000000000180ull)
#define  CVMX_PCI_READ_CMD_C                                                 (0x0000000000000184ull)
#define  CVMX_PCI_READ_CMD_E                                                 (0x0000000000000188ull)
#define  CVMX_PCI_CTL_STATUS_2                                               (0x000000000000018Cull)
#define  CVMX_NPI_MSI_RCV                                     CVMX_ADD_IO_SEG(0x0000000000000190ull)
#define  CVMX_PCI_INT_SUM2                                                   (0x0000000000000198ull)
#define  CVMX_PCI_INT_ENB2                                                   (0x00000000000001A0ull)
#define  CVMX_PCI_SCM_REG                                                    (0x00000000000001A8ull)
#define  CVMX_PCI_TSR_REG                                                    (0x00000000000001B0ull)
#define  CVMX_POW_PP_GRP_MSKX(offset)                        (CVMX_ADD_IO_SEG(0x0001670000000000ull+((offset)*8)))
#define  CVMX_POW_WQ_INT_THRX(offset)                        (CVMX_ADD_IO_SEG(0x0001670000000080ull+((offset)*8)))
#define  CVMX_POW_WQ_INT_CNTX(offset)                        (CVMX_ADD_IO_SEG(0x0001670000000100ull+((offset)*8)))
#define  CVMX_POW_QOS_THRX(offset)                           (CVMX_ADD_IO_SEG(0x0001670000000180ull+((offset)*8)))
#define  CVMX_POW_QOS_RNDX(offset)                           (CVMX_ADD_IO_SEG(0x00016700000001C0ull+((offset)*8)))
#define  CVMX_POW_WQ_INT                                      CVMX_ADD_IO_SEG(0x0001670000000200ull)
#define  CVMX_POW_WQ_INT_PC                                   CVMX_ADD_IO_SEG(0x0001670000000208ull)
#define  CVMX_POW_NW_TIM                                      CVMX_ADD_IO_SEG(0x0001670000000210ull)
#define  CVMX_POW_ECC_ERR                                     CVMX_ADD_IO_SEG(0x0001670000000218ull)
#define  CVMX_POW_INT_CTL                                     CVMX_ADD_IO_SEG(0x0001670000000220ull)
#define  CVMX_POW_NOS_CNT                                     CVMX_ADD_IO_SEG(0x0001670000000228ull)
#define  CVMX_POW_WS_PCX(offset)                             (CVMX_ADD_IO_SEG(0x0001670000000280ull+((offset)*8)))
#define  CVMX_POW_WA_PCX(offset)                             (CVMX_ADD_IO_SEG(0x0001670000000300ull+((offset)*8)))
#define  CVMX_POW_IQ_CNTX(offset)                            (CVMX_ADD_IO_SEG(0x0001670000000340ull+((offset)*8)))
#define  CVMX_POW_WA_COM_PC                                   CVMX_ADD_IO_SEG(0x0001670000000380ull)
#define  CVMX_POW_IQ_COM_CNT                                  CVMX_ADD_IO_SEG(0x0001670000000388ull)
#define  CVMX_POW_TS_PC                                       CVMX_ADD_IO_SEG(0x0001670000000390ull)
#define  CVMX_POW_DS_PC                                       CVMX_ADD_IO_SEG(0x0001670000000398ull)
#define  CVMX_POW_BIST_STAT                                   CVMX_ADD_IO_SEG(0x00016700000003F8ull)
#define  CVMX_RNM_CTL_STATUS                                  CVMX_ADD_IO_SEG(0x0001180040000000ull)
#define  CVMX_RNM_BIST_STATUS                                 CVMX_ADD_IO_SEG(0x0001180040000008ull)
#define  CVMX_SPXX_INT_REG(block_id)                         (CVMX_ADD_IO_SEG(0x0001180090000300ull+((block_id)*0x8000000ull)))
#define  CVMX_SPXX_INT_MSK(block_id)                         (CVMX_ADD_IO_SEG(0x0001180090000308ull+((block_id)*0x8000000ull)))
#define  CVMX_SPXX_INT_SYNC(block_id)                        (CVMX_ADD_IO_SEG(0x0001180090000310ull+((block_id)*0x8000000ull)))
#define  CVMX_SPXX_INT_DAT(block_id)                         (CVMX_ADD_IO_SEG(0x0001180090000318ull+((block_id)*0x8000000ull)))
#define  CVMX_SPXX_ERR_CTL(block_id)                         (CVMX_ADD_IO_SEG(0x0001180090000320ull+((block_id)*0x8000000ull)))
#define  CVMX_SPXX_TPA_SEL(block_id)                         (CVMX_ADD_IO_SEG(0x0001180090000328ull+((block_id)*0x8000000ull)))
#define  CVMX_SPXX_TPA_MAX(block_id)                         (CVMX_ADD_IO_SEG(0x0001180090000330ull+((block_id)*0x8000000ull)))
#define  CVMX_SPXX_TPA_ACC(block_id)                         (CVMX_ADD_IO_SEG(0x0001180090000338ull+((block_id)*0x8000000ull)))
#define  CVMX_SPXX_BCKPRS_CNT(block_id)                      (CVMX_ADD_IO_SEG(0x0001180090000340ull+((block_id)*0x8000000ull)))
#define  CVMX_SPXX_CLK_CTL(block_id)                         (CVMX_ADD_IO_SEG(0x0001180090000348ull+((block_id)*0x8000000ull)))
#define  CVMX_SPXX_CLK_STAT(block_id)                        (CVMX_ADD_IO_SEG(0x0001180090000350ull+((block_id)*0x8000000ull)))
#define  CVMX_SPXX_DRV_CTL(block_id)                         (CVMX_ADD_IO_SEG(0x0001180090000358ull+((block_id)*0x8000000ull)))
#define  CVMX_SPXX_TRN4_CTL(block_id)                        (CVMX_ADD_IO_SEG(0x0001180090000360ull+((block_id)*0x8000000ull)))
#define  CVMX_SPXX_DBG_DESKEW_CTL(block_id)                  (CVMX_ADD_IO_SEG(0x0001180090000368ull+((block_id)*0x8000000ull)))
#define  CVMX_SPXX_DBG_DESKEW_STATE(block_id)                (CVMX_ADD_IO_SEG(0x0001180090000370ull+((block_id)*0x8000000ull)))
#define  CVMX_SPXX_BIST_STAT(block_id)                       (CVMX_ADD_IO_SEG(0x00011800900007F8ull+((block_id)*0x8000000ull)))
#define  CVMX_SRXX_SPI4_CALX(offset,block_id)                (CVMX_ADD_IO_SEG(0x0001180090000000ull+((offset)*8)+((block_id)*0x8000000ull)))
#define  CVMX_SRXX_COM_CTL(block_id)                         (CVMX_ADD_IO_SEG(0x0001180090000200ull+((block_id)*0x8000000ull)))
#define  CVMX_SRXX_SPI4_STAT(block_id)                       (CVMX_ADD_IO_SEG(0x0001180090000208ull+((block_id)*0x8000000ull)))
#define  CVMX_SRXX_IGN_RX_FULL(block_id)                     (CVMX_ADD_IO_SEG(0x0001180090000218ull+((block_id)*0x8000000ull)))
#define  CVMX_STXX_SPI4_CALX(offset,block_id)                (CVMX_ADD_IO_SEG(0x0001180090000400ull+((offset)*8)+((block_id)*0x8000000ull)))
#define  CVMX_STXX_COM_CTL(block_id)                         (CVMX_ADD_IO_SEG(0x0001180090000600ull+((block_id)*0x8000000ull)))
#define  CVMX_STXX_ARB_CTL(block_id)                         (CVMX_ADD_IO_SEG(0x0001180090000608ull+((block_id)*0x8000000ull)))
#define  CVMX_STXX_IGN_CAL(block_id)                         (CVMX_ADD_IO_SEG(0x0001180090000610ull+((block_id)*0x8000000ull)))
#define  CVMX_STXX_MIN_BST(block_id)                         (CVMX_ADD_IO_SEG(0x0001180090000618ull+((block_id)*0x8000000ull)))
#define  CVMX_STXX_SPI4_DAT(block_id)                        (CVMX_ADD_IO_SEG(0x0001180090000628ull+((block_id)*0x8000000ull)))
#define  CVMX_STXX_SPI4_STAT(block_id)                       (CVMX_ADD_IO_SEG(0x0001180090000630ull+((block_id)*0x8000000ull)))
#define  CVMX_STXX_STAT_CTL(block_id)                        (CVMX_ADD_IO_SEG(0x0001180090000638ull+((block_id)*0x8000000ull)))
#define  CVMX_STXX_STAT_PKT_XMT(block_id)                    (CVMX_ADD_IO_SEG(0x0001180090000640ull+((block_id)*0x8000000ull)))
#define  CVMX_STXX_STAT_BYTES_HI(block_id)                   (CVMX_ADD_IO_SEG(0x0001180090000648ull+((block_id)*0x8000000ull)))
#define  CVMX_STXX_STAT_BYTES_LO(block_id)                   (CVMX_ADD_IO_SEG(0x0001180090000680ull+((block_id)*0x8000000ull)))
#define  CVMX_STXX_BCKPRS_CNT(block_id)                      (CVMX_ADD_IO_SEG(0x0001180090000688ull+((block_id)*0x8000000ull)))
#define  CVMX_STXX_DIP_CNT(block_id)                         (CVMX_ADD_IO_SEG(0x0001180090000690ull+((block_id)*0x8000000ull)))
#define  CVMX_STXX_INT_REG(block_id)                         (CVMX_ADD_IO_SEG(0x0001180090000698ull+((block_id)*0x8000000ull)))
#define  CVMX_STXX_INT_MSK(block_id)                         (CVMX_ADD_IO_SEG(0x00011800900006A0ull+((block_id)*0x8000000ull)))
#define  CVMX_STXX_INT_SYNC(block_id)                        (CVMX_ADD_IO_SEG(0x00011800900006A8ull+((block_id)*0x8000000ull)))
#define  CVMX_SPX0_PLL_SETTING                                CVMX_ADD_IO_SEG(0x0001180090000380ull)
#define  CVMX_SPX0_PLL_BW_CTL                                 CVMX_ADD_IO_SEG(0x0001180090000388ull)
#define  CVMX_TIM_REG_FLAGS                                   CVMX_ADD_IO_SEG(0x0001180058000000ull)
#define  CVMX_TIM_REG_READ_IDX                                CVMX_ADD_IO_SEG(0x0001180058000008ull)
#define  CVMX_TIM_REG_BIST_RESULT                             CVMX_ADD_IO_SEG(0x0001180058000080ull)
#define  CVMX_TIM_REG_ERROR                                   CVMX_ADD_IO_SEG(0x0001180058000088ull)
#define  CVMX_TIM_REG_INT_MASK                                CVMX_ADD_IO_SEG(0x0001180058000090ull)
#define  CVMX_TIM_MEM_RING0                                   CVMX_ADD_IO_SEG(0x0001180058001000ull)
#define  CVMX_TIM_MEM_RING1                                   CVMX_ADD_IO_SEG(0x0001180058001008ull)
#define  CVMX_TIM_MEM_DEBUG0                                  CVMX_ADD_IO_SEG(0x0001180058001100ull)
#define  CVMX_TIM_MEM_DEBUG1                                  CVMX_ADD_IO_SEG(0x0001180058001108ull)
#define  CVMX_TIM_MEM_DEBUG2                                  CVMX_ADD_IO_SEG(0x0001180058001110ull)
#define  CVMX_TRA_CTL                                         CVMX_ADD_IO_SEG(0x00011800A8000000ull)
#define  CVMX_TRA_INT_STATUS                                  CVMX_ADD_IO_SEG(0x00011800A8000008ull)
#define  CVMX_TRA_BIST_STATUS                                 CVMX_ADD_IO_SEG(0x00011800A8000010ull)
#define  CVMX_TRA_CYCLES_SINCE                                CVMX_ADD_IO_SEG(0x00011800A8000018ull)
#define  CVMX_TRA_READ_DAT                                    CVMX_ADD_IO_SEG(0x00011800A8000020ull)
#define  CVMX_TRA_FILT_CMD                                    CVMX_ADD_IO_SEG(0x00011800A8000040ull)
#define  CVMX_TRA_FILT_SID                                    CVMX_ADD_IO_SEG(0x00011800A8000048ull)
#define  CVMX_TRA_FILT_DID                                    CVMX_ADD_IO_SEG(0x00011800A8000050ull)
#define  CVMX_TRA_FILT_ADR_ADR                                CVMX_ADD_IO_SEG(0x00011800A8000058ull)
#define  CVMX_TRA_FILT_ADR_MSK                                CVMX_ADD_IO_SEG(0x00011800A8000060ull)
#define  CVMX_TRA_TRIG0_CMD                                   CVMX_ADD_IO_SEG(0x00011800A8000080ull)
#define  CVMX_TRA_TRIG0_SID                                   CVMX_ADD_IO_SEG(0x00011800A8000088ull)
#define  CVMX_TRA_TRIG0_DID                                   CVMX_ADD_IO_SEG(0x00011800A8000090ull)
#define  CVMX_TRA_TRIG0_ADR_ADR                               CVMX_ADD_IO_SEG(0x00011800A8000098ull)
#define  CVMX_TRA_TRIG0_ADR_MSK                               CVMX_ADD_IO_SEG(0x00011800A80000A0ull)
#define  CVMX_TRA_TRIG1_CMD                                   CVMX_ADD_IO_SEG(0x00011800A80000C0ull)
#define  CVMX_TRA_TRIG1_SID                                   CVMX_ADD_IO_SEG(0x00011800A80000C8ull)
#define  CVMX_TRA_TRIG1_DID                                   CVMX_ADD_IO_SEG(0x00011800A80000D0ull)
#define  CVMX_TRA_TRIG1_ADR_ADR                               CVMX_ADD_IO_SEG(0x00011800A80000D8ull)
#define  CVMX_TRA_TRIG1_ADR_MSK                               CVMX_ADD_IO_SEG(0x00011800A80000E0ull)
#define  CVMX_ZIP_CMD_CTL                                     CVMX_ADD_IO_SEG(0x0001180038000000ull)
#define  CVMX_ZIP_CMD_BUF                                     CVMX_ADD_IO_SEG(0x0001180038000008ull)
#define  CVMX_ZIP_CMD_BIST_RESULT                             CVMX_ADD_IO_SEG(0x0001180038000080ull)
#define  CVMX_ZIP_ERROR                                       CVMX_ADD_IO_SEG(0x0001180038000088ull)
#define  CVMX_ZIP_INT_MASK                                    CVMX_ADD_IO_SEG(0x0001180038000090ull)
#define  CVMX_ZIP_DEBUG0                                      CVMX_ADD_IO_SEG(0x0001180038000098ull)
#define  CVMX_ZIP_CONSTANTS                                   CVMX_ADD_IO_SEG(0x00011800380000A0ull)
#define  CVMX_NPI_PCI_BAR1_INDEXX(offset)                    (CVMX_ADD_IO_SEG(0x00011F0000001100ull+((offset)*4)))
#define  CVMX_NPI_PCI_READ_CMD_6                              CVMX_ADD_IO_SEG(0x00011F0000001180ull)
#define  CVMX_NPI_PCI_READ_CMD_C                              CVMX_ADD_IO_SEG(0x00011F0000001184ull)
#define  CVMX_NPI_PCI_READ_CMD_E                              CVMX_ADD_IO_SEG(0x00011F0000001188ull)
#define  CVMX_NPI_PCI_CTL_STATUS_2                            CVMX_ADD_IO_SEG(0x00011F000000118Cull)
#define  CVMX_NPI_NPI_MSI_RCV                                 CVMX_ADD_IO_SEG(0x00011F0000001190ull)
#define  CVMX_NPI_PCI_INT_SUM2                                CVMX_ADD_IO_SEG(0x00011F0000001198ull)
#define  CVMX_NPI_PCI_INT_ENB2                                CVMX_ADD_IO_SEG(0x00011F00000011A0ull)
#define  CVMX_NPI_PCI_SCM_REG                                 CVMX_ADD_IO_SEG(0x00011F00000011A8ull)
#define  CVMX_NPI_PCI_TSR_REG                                 CVMX_ADD_IO_SEG(0x00011F00000011B0ull)
#define  CVMX_NPI_PCI_CFG00                                   CVMX_ADD_IO_SEG(0x00011F0000001800ull)
#define  CVMX_NPI_PCI_CFG01                                   CVMX_ADD_IO_SEG(0x00011F0000001804ull)
#define  CVMX_NPI_PCI_CFG02                                   CVMX_ADD_IO_SEG(0x00011F0000001808ull)
#define  CVMX_NPI_PCI_CFG03                                   CVMX_ADD_IO_SEG(0x00011F000000180Cull)
#define  CVMX_NPI_PCI_CFG04                                   CVMX_ADD_IO_SEG(0x00011F0000001810ull)
#define  CVMX_NPI_PCI_CFG05                                   CVMX_ADD_IO_SEG(0x00011F0000001814ull)
#define  CVMX_NPI_PCI_CFG06                                   CVMX_ADD_IO_SEG(0x00011F0000001818ull)
#define  CVMX_NPI_PCI_CFG07                                   CVMX_ADD_IO_SEG(0x00011F000000181Cull)
#define  CVMX_NPI_PCI_CFG08                                   CVMX_ADD_IO_SEG(0x00011F0000001820ull)
#define  CVMX_NPI_PCI_CFG09                                   CVMX_ADD_IO_SEG(0x00011F0000001824ull)
#define  CVMX_NPI_PCI_CFG10                                   CVMX_ADD_IO_SEG(0x00011F0000001828ull)
#define  CVMX_NPI_PCI_CFG11                                   CVMX_ADD_IO_SEG(0x00011F000000182Cull)
#define  CVMX_NPI_PCI_CFG12                                   CVMX_ADD_IO_SEG(0x00011F0000001830ull)
#define  CVMX_NPI_PCI_CFG13                                   CVMX_ADD_IO_SEG(0x00011F0000001834ull)
#define  CVMX_NPI_PCI_CFG15                                   CVMX_ADD_IO_SEG(0x00011F000000183Cull)
#define  CVMX_NPI_PCI_CFG16                                   CVMX_ADD_IO_SEG(0x00011F0000001840ull)
#define  CVMX_NPI_PCI_CFG17                                   CVMX_ADD_IO_SEG(0x00011F0000001844ull)
#define  CVMX_NPI_PCI_CFG18                                   CVMX_ADD_IO_SEG(0x00011F0000001848ull)
#define  CVMX_NPI_PCI_CFG19                                   CVMX_ADD_IO_SEG(0x00011F000000184Cull)
#define  CVMX_NPI_PCI_CFG20                                   CVMX_ADD_IO_SEG(0x00011F0000001850ull)
#define  CVMX_NPI_PCI_CFG21                                   CVMX_ADD_IO_SEG(0x00011F0000001854ull)
#define  CVMX_NPI_PCI_CFG22                                   CVMX_ADD_IO_SEG(0x00011F0000001858ull)
#define  CVMX_NPI_PCI_CFG56                                   CVMX_ADD_IO_SEG(0x00011F00000018E0ull)
#define  CVMX_NPI_PCI_CFG57                                   CVMX_ADD_IO_SEG(0x00011F00000018E4ull)
#define  CVMX_NPI_PCI_CFG58                                   CVMX_ADD_IO_SEG(0x00011F00000018E8ull)
#define  CVMX_NPI_PCI_CFG59                                   CVMX_ADD_IO_SEG(0x00011F00000018ECull)
#define  CVMX_NPI_PCI_CFG60                                   CVMX_ADD_IO_SEG(0x00011F00000018F0ull)
#define  CVMX_NPI_PCI_CFG61                                   CVMX_ADD_IO_SEG(0x00011F00000018F4ull)
#define  CVMX_NPI_PCI_CFG62                                   CVMX_ADD_IO_SEG(0x00011F00000018F8ull)
#define  CVMX_NPI_PCI_CFG63                                   CVMX_ADD_IO_SEG(0x00011F00000018FCull)







typedef enum {
   CVMX_IPD_OPC_MODE_STT = 0LL,   /* All blocks DRAM, not cached in L2 */
   CVMX_IPD_OPC_MODE_STF = 1LL,   /* All bloccks into  L2 */
   CVMX_IPD_OPC_MODE_STF1_STT = 2LL,   /* 1st block L2, rest DRAM */
   CVMX_IPD_OPC_MODE_STF2_STT = 3LL    /* 1st, 2nd blocks L2, rest DRAM */
} cvmx_ipd_mode_t;


/**
 * Enumeration representing the amount of packet processing
 * and validation performed by the input hardware.
 */
typedef enum
{
    CVMX_PIP_PORT_CFG_MODE_NONE = 0ull,  /**< Packet input doesn't perform any
                                            processing of the input packet. */
    CVMX_PIP_PORT_CFG_MODE_SKIPL2 = 1ull,/**< Full packet processing is performed
                                            with pointer starting at the L2
                                            (ethernet MAC) header. */
    CVMX_PIP_PORT_CFG_MODE_SKIPIP = 2ull /**< Input packets are assumed to be IP.
                                            Results from non IP packets is
                                            undefined. Pointers reference the
                                            beginning of the IP header. */
} cvmx_pip_port_parse_mode_t;


/**
 * This enumeration controls how a QoS watcher matches a packet.
 */
typedef enum
{
    CVMX_PIP_QOS_WATCH_DISABLE = 0ull,   /**< QoS watcher is diabled */
    CVMX_PIP_QOS_WATCH_PROTNH = 1ull,    /**< QoS watcher will match based on the IP protocol */
    CVMX_PIP_QOS_WATCH_TCP = 2ull,       /**< QoS watcher will match TCP packets to a specific destination port */
    CVMX_PIP_QOS_WATCH_UDP = 3ull        /**< QoS watcher will match UDP packets to a specific destination port */
} cvmx_pip_qos_watch_types;


/**
 * Tag type definitions
 */
typedef enum
{
    CVMX_POW_TAG_TYPE_ORDERED   = 0L,   /**< Tag ordering is maintained */
    CVMX_POW_TAG_TYPE_ATOMIC    = 1L,   /**< Tag ordering is maintained, and at most one PP has the tag */
    CVMX_POW_TAG_TYPE_NULL      = 2L,   /**< The work queue entry from the order
                                            - NEVER tag switch from NULL to NULL */
    CVMX_POW_TAG_TYPE_NULL_NULL = 3L    /**< A tag switch to NULL, and there is no space reserved in POW
                                            - NEVER tag switch to NULL_NULL
                                            - NEVER tag switch from NULL_NULL
                                            - NULL_NULL is entered at the beginning of time and on a deschedule.
                                            - NULL_NULL can be exited by a new work request. A NULL_SWITCH load can also switch the state to NULL */
} cvmx_pow_tag_type_t;


/**
 * LCR bits 0 and 1 control the number of bits per character. See the following table for encodings:
 *
 * - 00 = 5 bits (bits 0-4 sent)
 * - 01 = 6 bits (bits 0-5 sent)
 * - 10 = 7 bits (bits 0-6 sent)
 * - 11 = 8 bits (all bits sent)
 */
typedef enum
{
    CVMX_UART_BITS5 = 0,
    CVMX_UART_BITS6 = 1,
    CVMX_UART_BITS7 = 2,
    CVMX_UART_BITS8 = 3
} cvmx_uart_bits_t;


/**
 * Interrupt   Priority   Interrupt         Interrupt                                       Interrupt
 * ID          Level      Type              Source                                          Reset By
 * ---------------------------------------------------------------------------------------------------------------------------------
 * 0001        -          None              None                                            -
 *
 * 0110        Highest    Receiver Line     Overrun, parity, or framing errors or break     Reading the Line Status Register
 *                        Status            interrupt
 *
 * 0100        Second     Received Data     Receiver data available (FIFOs disabled) or     Reading the Receiver Buffer Register
 *                        Available         RX FIFO trigger level reached (FIFOs            (FIFOs disabled) or the FIFO drops below
 *                                          enabled)                                        the trigger level (FIFOs enabled)
 *
 * 1100        Second     Character         No characters in or out of the RX FIFO          Reading the Receiver Buffer Register
 *                        Timeout           during the last 4 character times and there
 *                        Indication        is at least 1 character in it during this
 *                                          time
 *
 * 0010        Third      Transmitter       Transmitter Holding Register Empty              Reading the Interrupt Identity Register
 *                        Holding           (Programmable THRE Mode disabled) or TX         (if source of interrupt) or writing into
 *                        Register          FIFO at or below threshold (Programmable        THR (FIFOs or THRE Mode disabled) or TX
 *                        Empty             THRE Mode enabled)                              FIFO above threshold (FIFOs and THRE
 *                                                                                          Mode enabled)
 *
 * 0000        Fourth     Modem Status      Clear To Send (CTS) or Data Set Ready (DSR)     Reading the Modem Status Register
 *                        Changed           or Ring Indicator (RI) or Data Center
 *                                          Detect (DCD) changed
 */
typedef enum
{
    CVMX_UART_IID_NONE          = 1,
    CVMX_UART_IID_RX_ERROR      = 6,
    CVMX_UART_IID_RX_DATA       = 4,
    CVMX_UART_IID_RX_TIMEOUT    = 12,
    CVMX_UART_IID_TX_EMPTY      = 2,
    CVMX_UART_IID_MODEM         = 0
} cvmx_uart_iid_t;









/* Beginning of Control and Status Register (CSR) definitions */


/**
 * ASX_DBG_DATA_DRV
 *
 * - Access using the CVMX_ASX0_DBG_DATA_DRV CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 56;      /**< Reserved */
        uint64_t pctl                    : 4;       /**< These bits control the driving strength of the dbg
                                                         interface. */
        uint64_t nctl                    : 4;       /**< These bits control the driving strength of the dbg
                                                         interface. */
#else
        uint64_t nctl                    : 4;
        uint64_t pctl                    : 4;
        uint64_t reserved                : 56;
#endif
    } s;
} cvmx_asx0_dbg_data_drv_t;


/**
 * ASX_DBG_DATA_ENABLE
 *
 * - Access using the CVMX_ASX0_DBG_DATA_ENABLE CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 63;      /**< Reserved */
        uint64_t en                      : 1;       /**< A 1->0 transistion, turns the dbg interface OFF. */
#else
        uint64_t en                      : 1;
        uint64_t reserved                : 63;
#endif
    } s;
} cvmx_asx0_dbg_data_enable_t;


/**
 * ASX_INT_EN = Interrupt Enable
 *
 * - Access using the CVMX_ASXX_INT_EN(0..) CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 52;      /**< Reserved */
        uint64_t txpop                   : 4;       /**< TX FIFO underflow on RMGII port */
        uint64_t txpsh                   : 4;       /**< TX FIFO overflow on RMGII port */
        uint64_t ovrflw                  : 4;       /**< RX FIFO overflow on RMGII port */
#else
        uint64_t ovrflw                  : 4;
        uint64_t txpsh                   : 4;
        uint64_t txpop                   : 4;
        uint64_t reserved                : 52;
#endif
    } s;
} cvmx_asxx_int_en_t;


/**
 * ASX_INT_REG = Interrupt Register
 *
 * - Access using the CVMX_ASXX_INT_REG(0..) CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 52;      /**< Reserved */
        uint64_t txpop                   : 4;       /**< TX FIFO underflow on RMGII port */
        uint64_t txpsh                   : 4;       /**< TX FIFO overflow on RMGII port */
        uint64_t ovrflw                  : 4;       /**< RX FIFO overflow on RMGII port */
#else
        uint64_t ovrflw                  : 4;
        uint64_t txpsh                   : 4;
        uint64_t txpop                   : 4;
        uint64_t reserved                : 52;
#endif
    } s;
} cvmx_asxx_int_reg_t;


/**
 * ASX_PRT_LOOP = Internal Loopback mode - TX FIFO output goes into RX FIFO (and maybe pins)
 *
 * - Access using the CVMX_ASXX_PRT_LOOP(0..) CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 56;      /**< Reserved */
        uint64_t ext_loop                : 4;       /**< External Loopback Enable
                                                         0 = No Loopback (TX FIFO is filled by RMGII)
                                                         1 = RX FIFO drives the TX FIFO
                                                         - GMX_PRT_CFG[DUPLEX] must be 1 (FullDuplex)
                                                         - GMX_PRT_CFG[SPEED] must be 1  (GigE speed)
                                                         - core clock > 250MHZ
                                                         - rxc must not deviate from the +-50ppm
                                                         - if txc>rxc, idle cycle may drop over time */
        uint64_t int_loop                : 4;       /**< Internal Loopback Enable
                                                         0 = No Loopback (RX FIFO is filled by RMGII pins)
                                                         1 = TX FIFO drives the RX FIFO */
#else
        uint64_t int_loop                : 4;
        uint64_t ext_loop                : 4;
        uint64_t reserved                : 56;
#endif
    } s;
} cvmx_asxx_prt_loop_t;


/**
 * ASX_RLD_BYPASS_SETTING
 *
 * - Access using the CVMX_ASXX_RLD_BYPASS_SETTING(0..) CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 59;      /**< Reserved */
        uint64_t setting                 : 5;       /**< The rld_dll setting bypass value */
#else
        uint64_t setting                 : 5;
        uint64_t reserved                : 59;
#endif
    } s;
} cvmx_asxx_rld_bypass_setting_t;


/**
 * ASX_RLD_BYPASS
 *
 * - Access using the CVMX_ASXX_RLD_BYPASS(0..) CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 63;      /**< Reserved */
        uint64_t bypass                  : 1;       /**< When set, the rld_dll setting is bypassed with
                                                         ASX_RLD_BYPASS_SETTING */
#else
        uint64_t bypass                  : 1;
        uint64_t reserved                : 63;
#endif
    } s;
} cvmx_asxx_rld_bypass_t;


/**
 * ASX_RLD_COMP
 *
 * - Access using the CVMX_ASXX_RLD_COMP(0..) CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 56;      /**< Reserved */
        uint64_t pctl                    : 4;       /**< These bits reflect the computed compensation
                                                         values from the built-in compensation circuit. */
        uint64_t nctl                    : 4;       /**< These bits reflect the computed compensation
                                                         values from the built-in compensation circuit. */
#else
        uint64_t nctl                    : 4;
        uint64_t pctl                    : 4;
        uint64_t reserved                : 56;
#endif
    } s;
} cvmx_asxx_rld_comp_t;


/**
 * ASX_RLD_DATA_DRV
 *
 * - Access using the CVMX_ASXX_RLD_DATA_DRV(0..) CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 56;      /**< Reserved */
        uint64_t pctl                    : 4;       /**< These bits specify a driving strength (positive
                                                         integer) for the RLD I/Os when the built-in
                                                         compensation circuit is bypassed. */
        uint64_t nctl                    : 4;       /**< These bits specify a driving strength (positive
                                                         integer) for the RLD I/Os when the built-in
                                                         compensation circuit is bypassed. */
#else
        uint64_t nctl                    : 4;
        uint64_t pctl                    : 4;
        uint64_t reserved                : 56;
#endif
    } s;
} cvmx_asxx_rld_data_drv_t;


/**
 * ASX_RLD_FCRAM_MODE
 *
 * - Access using the CVMX_ASXX_RLD_FCRAM_MODE(0..) CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 63;      /**< Reserved */
        uint64_t mode                    : 1;       /**< Memory Mode
                                                         0: RLDRAM
                                                         1: FCRAM */
#else
        uint64_t mode                    : 1;
        uint64_t reserved                : 63;
#endif
    } s;
} cvmx_asxx_rld_fcram_mode_t;


/**
 * ASX_RLD_NCTL_STRONG
 *
 * - Access using the CVMX_ASXX_RLD_NCTL_STRONG(0..) CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 59;      /**< Reserved */
        uint64_t nctl                    : 5;       /**< Duke's drive control */
#else
        uint64_t nctl                    : 5;
        uint64_t reserved                : 59;
#endif
    } s;
} cvmx_asxx_rld_nctl_strong_t;


/**
 * ASX_RLD_NCTL_WEAK
 *
 * - Access using the CVMX_ASXX_RLD_NCTL_WEAK(0..) CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 59;      /**< Reserved */
        uint64_t nctl                    : 5;       /**< Duke's drive control */
#else
        uint64_t nctl                    : 5;
        uint64_t reserved                : 59;
#endif
    } s;
} cvmx_asxx_rld_nctl_weak_t;


/**
 * ASX_RLD_PCTL_STRONG
 *
 * - Access using the CVMX_ASXX_RLD_PCTL_STRONG(0..) CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 59;      /**< Reserved */
        uint64_t pctl                    : 5;       /**< Duke's drive control */
#else
        uint64_t pctl                    : 5;
        uint64_t reserved                : 59;
#endif
    } s;
} cvmx_asxx_rld_pctl_strong_t;


/**
 * ASX_RLD_PCTL_WEAK
 *
 * - Access using the CVMX_ASXX_RLD_PCTL_WEAK(0..) CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 59;      /**< Reserved */
        uint64_t pctl                    : 5;       /**< Duke's drive control */
#else
        uint64_t pctl                    : 5;
        uint64_t reserved                : 59;
#endif
    } s;
} cvmx_asxx_rld_pctl_weak_t;


/**
 * ASX_RLD_SETTING
 *
 * - Access using the CVMX_ASXX_RLD_SETTING(0..) CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 59;      /**< Reserved */
        uint64_t setting                 : 5;       /**< This is the read-only true rld dll_setting. */
#else
        uint64_t setting                 : 5;
        uint64_t reserved                : 59;
#endif
    } s;
} cvmx_asxx_rld_setting_t;


/**
 * ASX_RX_CLK_SET = RGMII Clock delay setting
 *
 * - Access using the CVMX_ASXX_RX_CLK_SETX(0..3, 0..1) CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 59;      /**< Reserved */
        uint64_t setting                 : 5;       /**< Setting to place on the RXC (RGMII receive clk)
                                                         delay line. */
#else
        uint64_t setting                 : 5;
        uint64_t reserved                : 59;
#endif
    } s;
} cvmx_asxx_rx_clk_setx_t;


/**
 * ASX_RX_PRT_EN = RGMII Port Enable
 *
 * - Access using the CVMX_ASXX_RX_PRT_EN(0..) CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 60;      /**< Reserved */
        uint64_t prt_en                  : 4;       /**< Port enable. Must be set for Octeon to receive
                                                         RMGII traffic. */
#else
        uint64_t prt_en                  : 4;
        uint64_t reserved                : 60;
#endif
    } s;
} cvmx_asxx_rx_prt_en_t;


/**
 * ASX_RX_WOL_MSK = RGMII RX Wake on LAN byte mask
 *
 * - Access using the CVMX_ASXX_RX_WOL_MSK(0..) CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t msk                     : 64;      /**< Bytes to include in the CRC signature */
#else
        uint64_t msk                     : 64;
#endif
    } s;
} cvmx_asxx_rx_wol_msk_t;


/**
 * ASX_RX_WOL_POWOK = RGMII RX Wake on LAN Power OK
 *
 * - Access using the CVMX_ASXX_RX_WOL_POWOK(0..) CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 63;      /**< Reserved */
        uint64_t powerok                 : 1;       /**< Power OK */
#else
        uint64_t powerok                 : 1;
        uint64_t reserved                : 63;
#endif
    } s;
} cvmx_asxx_rx_wol_powok_t;


/**
 * ASX_RX_WOL_SIG = RGMII RX Wake on LAN CRC signature
 *
 * - Access using the CVMX_ASXX_RX_WOL_SIG(0..) CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 32;      /**< Reserved */
        uint64_t sig                     : 32;      /**< CRC signature */
#else
        uint64_t sig                     : 32;
        uint64_t reserved                : 32;
#endif
    } s;
} cvmx_asxx_rx_wol_sig_t;


/**
 * ASX_RX_WOL = RGMII RX Wake on LAN status register
 *
 * - Access using the CVMX_ASXX_RX_WOL(0..) CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 62;      /**< Reserved */
        uint64_t status                  : 1;       /**< Copy of PMCSR[15] - PME_status */
        uint64_t enable                  : 1;       /**< Copy of PMCSR[8] - PME_enable */
#else
        uint64_t enable                  : 1;
        uint64_t status                  : 1;
        uint64_t reserved                : 62;
#endif
    } s;
} cvmx_asxx_rx_wol_t;


/**
 * ASX_TX_CLK_SET = RGMII Clock delay setting
 *
 * - Access using the CVMX_ASXX_TX_CLK_SETX(0..3, 0..1) CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 59;      /**< Reserved */
        uint64_t setting                 : 5;       /**< Setting to place on the TXC (RGMII transmit clk)
                                                         delay line. */
#else
        uint64_t setting                 : 5;
        uint64_t reserved                : 59;
#endif
    } s;
} cvmx_asxx_tx_clk_setx_t;


/**
 * ASX_TX_COMP_BYP = RGMII Clock delay setting
 *
 * - Access using the CVMX_ASXX_TX_COMP_BYP(0..) CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 56;      /**< Reserved */
        uint64_t pctl                    : 4;       /**< PCTL Compensation Value (see Duke) */
        uint64_t nctl                    : 4;       /**< NCTL Compensation Value (see Duke) */
#else
        uint64_t nctl                    : 4;
        uint64_t pctl                    : 4;
        uint64_t reserved                : 56;
#endif
    } s;
} cvmx_asxx_tx_comp_byp_t;


/**
 * ASX_TX_HI_WATER = RGMII TX FIFO Hi WaterMark
 *
 * - Access using the CVMX_ASXX_TX_HI_WATERX(0..3, 0..1) CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 60;      /**< Reserved */
        uint64_t mark                    : 4;       /**< TX FIFO HiWatermark to stall GMX */
#else
        uint64_t mark                    : 4;
        uint64_t reserved                : 60;
#endif
    } s;
} cvmx_asxx_tx_hi_waterx_t;


/**
 * ASX_TX_PRT_EN = RGMII Port Enable
 *
 * - Access using the CVMX_ASXX_TX_PRT_EN(0..) CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 60;      /**< Reserved */
        uint64_t prt_en                  : 4;       /**< Port enable. Must be set for Octeon to send
                                                         RMGII traffic. */
#else
        uint64_t prt_en                  : 4;
        uint64_t reserved                : 60;
#endif
    } s;
} cvmx_asxx_tx_prt_en_t;


/**
 * - Access using the CVMX_CIU_BIST CSR.
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 60;      /**< Reserved for future use. Set to zero */
        uint64_t bist                    : 4;       /**< BIST Results. HW sets a bit in BIST for for memory that fails BIST. */
#else
        uint64_t bist                    : 4;
        uint64_t reserved                : 60;
#endif
    } s;
} cvmx_ciu_bist_t;


/**
 * This is a 16-bit write-only register, one bit per PP, that
 *  generates DINT pulses for individual PP's. Each written "1"
 *  causes the HW to send an DINT (i.e. debug interrupt)
 *  to the selected PP.
 *
 *  The only other DINT source for the PP's is its local
 *  TAP controller (i.e. ECR[EjtagBrk]).
 *
 * - Access using the CVMX_CIU_DINT CSR.
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 48;      /**< Reserved for future use. Set to zero */
        uint64_t dint                    : 16;      /**< One bit per PP, that generates DINT pulses for individual PP's */
#else
        uint64_t dint                    : 16;
        uint64_t reserved                : 48;
#endif
    } s;
} cvmx_ciu_dint_t;


/**
 * This is a 16-bit read-only register, one bit per physical
 * PP, indicating whether that physical PP is present (i.e.
 * is not fuse disabled). SW can count the number of ones
 * set in this register to determine the number of available
 * PP's.
 *
 * - Access using the CVMX_CIU_FUSE CSR.
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 48;      /**< Reserved for future use. Set to zero */
        uint64_t fuse                    : 16;      /**< One bit per physical PP, indicating whether that physical PP is present */
#else
        uint64_t fuse                    : 16;
        uint64_t reserved                : 48;
#endif
    } s;
} cvmx_ciu_fuse_t;


/**
 * CIU contains a single GSTOP bit. This bit can be read/written
 * by any one of the PP's. The value of this bit can change Octeon
 * behavior in the following ways:
 *   - Each of the 16 watchdogs has an associated GSTOPEN bit. When
 *     both GSTOPEN and GSTOP are set, the associated watchdog
 *     time stops incrementing.
 *   - Each of the 16 PP's has a GSTOPEN bit for each of the Count
 *     and CvmCount registers. When both GSTOPEN and GSTOP are set,
 *     the associated counter stops incrementing.
 *   - Each of the general timers has a GSTOPEN bit. When both
 *     GSTOPEN and GSTOP are set, the associated general timer
 *     stops incrementing.
 *
 * - Access using the CVMX_CIU_GSTOP CSR.
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 63;      /**< Reserved for future use. Set to zero */
        uint64_t gstop                   : 1;       /**< CIU contains a single GSTOP bit */
#else
        uint64_t gstop                   : 1;
        uint64_t reserved                : 63;
#endif
    } s;
} cvmx_ciu_gstop_t;


/**
 * This structure represents the interrupt status bits for
 * CVMX_CIU_INT_SUM1(0..32) and the interrupt enable bits for
 * CVMX_CIU_INTX_EN1. There in only one cvmx_ciu_intx1_t register.
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 48;      /**< Reserved for future use. Set to zero */
        uint64_t wdog                    : 16;      /**< 16 watchdog interrupts. 1 bit per PP watchdog. */
#else
        uint64_t wdog                    : 16;
        uint64_t reserved                : 48;
#endif
    } s;
} cvmx_ciu_int1_t;


/**
 * This structure represents the interrupt status bits for
 * CVMX_CIU_INTX_SUM0(0..32) and the interrupt enable bits for
 * CVMX_CIU_INTX_EN0. There are 34 cvmx_ciu_intx0_t register
 * aliases - two for each of 16 PP's and two for PCI. With the
 * exception of the mailbox interrupts (<33:32>), each bit is
 * accessible through all aliases. There are two for each unit
 * representing the two user interrupt lines (Cause[IP2,IP3]).
 * For each unit the first entry controls what signals are
 * summed for the IP2 interrupt line. the second for IP3.
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 8;       /**< Reserved for future use. Set to zero */
        uint64_t timer                   : 4;       /**< Four general timer interrupts */
        uint64_t key_zero                : 1;       /**< Key zeroization interrupt. Set when the external key
                                                         zeroization pin has a 0->1 edge. */
        uint64_t ipd_drp                 : 1;       /**< One IPD packet drop interrupt. Indicates that IPD
                                                         dropped a packet.
                                                         - This bit is the sum of 8 bits held in IPD - one per QOS.
                                                         - IPD should also have 8 local mask bits. */
        uint64_t gmx_drp                 : 2;       /**< Two GMX packet drop interrupts, one per GMX */
        uint64_t trace                   : 1;       /**< Trace buffer interrupt. L2C has the CMB trace buffer */
        uint64_t rml                     : 1;       /**< RML is an N2 unit that:
                                                         - Provides indirect CSR access for Octeon
                                                             CSR's that cannot directly be accessed from
                                                             the NCB bus.
                                                         - Provides interrupt accumulation for
                                                             attached CSR's/units and or's them together
                                                             into the single wire fed into CIU.
                                                             The RML-based access methods are slower than direct
                                                         NCB access, so it contains CSR's and interrupts
                                                         intended to be accessed rarely. The interrupts are
                                                         typically error interrupts. The following are included
                                                         in the interrupts ored together:
                                                         - LMC SECDED failure information
                                                         - RGMII error information
                                                         - SPI-4.2 error information
                                                         - DFA SECDED failure information
                                                         - Many others */
        uint64_t twsi                    : 1;       /**< TWSI interrupt */
        uint64_t wdog_sum                : 1;       /**< Watchdog summary */
        uint64_t pci_msi                 : 4;       /**< PCI MSI - The PCI MSI bit array is 64-bits.
                                                         External devices can set bits via the
                                                         PCI_MSI_RCV BAR0 register.
                                                         - First bit is the or of <15:0>
                                                         - Second bit is the or of <31:16>
                                                         - Third bit is the or of <47:32>
                                                         - Fourth bit is the or of <63:48> */
        uint64_t pci_int                 : 4;       /**< PCI INTA/B/C/D when Octeon is in host mode */
        uint64_t uart                    : 2;       /**< Two uart interrupts */
        uint64_t mbox                    : 2;       /**< 2 mailbox interrupts. Each PP can only see
                                                         the two bits associated with its mailbox
                                                         register.
                                                         - First bit is the or of mailbox<15:0>
                                                         - Second bit is the or of mailbox<31:16> */
        uint64_t gpio                    : 16;      /**< One per GPIO pin. Each bit is RO if the
                                                         interrupt is level-sensitive, R/W1C if
                                                         edge-triggered. */
        uint64_t workq                   : 16;      /**< Work queue interrupt - one per group */
#else
        uint64_t workq                   : 16;
        uint64_t gpio                    : 16;
        uint64_t mbox                    : 2;
        uint64_t uart                    : 2;
        uint64_t pci_int                 : 4;
        uint64_t pci_msi                 : 4;
        uint64_t wdog_sum                : 1;
        uint64_t twsi                    : 1;
        uint64_t rml                     : 1;
        uint64_t trace                   : 1;
        uint64_t gmx_drp                 : 2;
        uint64_t ipd_drp                 : 1;
        uint64_t key_zero                : 1;
        uint64_t timer                   : 4;
        uint64_t reserved                : 8;
#endif
    } s;
} cvmx_ciu_intx0_t;


/**
 * Each PP has a corresponding 32-bit mailbox register that can
 * be written by any PP. This register is useful for inter-PP
 * direct interrupts. The HW sets mailbox bits that are written
 * with a "1" using one of the two address aliases for the mailbox
 * register. This alias can be used by the PP requesting the
 * interrupt. The HW clears mailbox bits that are written with
 * a "1" using the second of the two address aliases for the
 * mailbox register. This alias can be used by the corresponding
 * PP (that recieves the interrupt) to clear out the interrupt
 * condition. (The mailbox register can also be read through
 * either alias.) The mailbox register for each PP contributes
 * two interrupt wires to the corresponding PP. One wire is the OR of
 * mailbox<31:16> and the other is the OR of mailbox<15:0>.
 *
 * Access the mailbox using the CSRs CVMX_CIU_MBOX_SETX(0..15) and CVMX_CIU_MBOX_CLRX(0..15).
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 32;      /**< Reserved for future use. Set to zero */
        uint64_t bits                    : 32;      /**< Mailbox register bits */
#else
        uint64_t bits                    : 32;
        uint64_t reserved                : 32;
#endif
    } s;
} cvmx_ciu_mbox_t;


/**
 * This is a 16-bit write-only register, one bit per PP, that
 *  generates NMI pulses for individual PP's. Each written "1"
 *  causes the HW to send an NMI (i.e. non-maskable interrupt)
 *  to the selected PP.
 *
 *  The only other NMI source for the PP's is the watchdog
 *  timers.
 *
 * - Access using the CVMX_CIU_NMI CSR.
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 48;      /**< Reserved for future use. Set to zero */
        uint64_t nmi                     : 16;      /**< One bit per PP, that generates NMI pulses for individual PP's */
#else
        uint64_t nmi                     : 16;
        uint64_t reserved                : 48;
#endif
    } s;
} cvmx_ciu_nmi_t;


/**
 * - Access using the CVMX_CIU_PCI_INTA CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 62;      /**< Reserved */
        uint64_t intr                    : 2;       /**< PCI interrupt
                                                         These bits are observed in CIU_INT32_SUM0<33:32> */
#else
        uint64_t intr                    : 2;
        uint64_t reserved                : 62;
#endif
    } s;
} cvmx_ciu_pci_inta_t;


/**
 * This is a 16-bit read-only register, one bit per PP, that
 *  indicates the Debug[DM] value of each PP (i.e. whether the
 *  PP's are in debug mode or not).
 *
 * - Access using the CVMX_CIU_PP_DBG CSR.
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 48;      /**< Reserved for future use. Set to zero */
        uint64_t ppdbg                   : 16;      /**< Bitfield showing if each PP is in debug mode */
#else
        uint64_t ppdbg                   : 16;
        uint64_t reserved                : 48;
#endif
    } s;
} cvmx_ciu_pp_dbg_t;


/**
 * The Octeon CIU contains a 16-bit reset register with one
 *  bit per PP. At chip reset time, bits <15:1> are always
 *  set, indicating that PP's 1-15 are held in reset and do
 *  not fetch any instructions until they are taken out of
 *  reset. Bit <0> (i.e. the one corresponding to PP 0) is
 *  clear in the standalone boot case, and set in the assisted
 *  boot case.
 *
 * In the standalone case, PP 0 will start fetching instructions
 * from the boot bus) and configure parts of the chip before
 *  bringing up the rest of the PP's. In the assisted case,
 *  all PP's are kept in reset until an external host device
 *  enables them.
 *
 *  The reset register may only function properly for 1->0
 *  transitions on the bits; 0->1 transitions (i.e. resetting
 *  a PP while it is already running) may cause chip deadlock
 *  and may not work.
 *
 * - Access using the CVMX_CIU_PP_RST CSR.
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 48;      /**< Reserved for future use. Set to zero */
        uint64_t rst                     : 15;      /**< Hold processor (1-15) in reset */
        uint64_t rst0                    : 1;       /**< Hold processor 0 in reset */
#else
        uint64_t rst0                    : 1;
        uint64_t rst                     : 15;
        uint64_t reserved                : 48;
#endif
    } s;
} cvmx_ciu_pp_rst_t;


/**
 * - Access using the CVMX_CIU_SOFT_BIST CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 63;      /**< Reserved */
        uint64_t soft_bist               : 1;       /**< Run BIST on soft reset. */
#else
        uint64_t soft_bist               : 1;
        uint64_t reserved                : 63;
#endif
    } s;
} cvmx_ciu_soft_bist_t;


/**
 * - Access using the CVMX_CIU_SOFT_PRST CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 61;      /**< Reserved */
        uint64_t host64                  : 1;       /**< PCX Host Mode Device Capability (0=32b/1=64b) */
        uint64_t npi                     : 1;       /**< When PCI soft reset is asserted, also reset the
                                                         NPI and PNI logic */
        uint64_t soft_prst               : 1;       /**< Reset the PCI bus. Only works when Octane is
                                                         Configured as a HOST. */
#else
        uint64_t soft_prst               : 1;
        uint64_t npi                     : 1;
        uint64_t host64                  : 1;
        uint64_t reserved                : 61;
#endif
    } s;
} cvmx_ciu_soft_prst_t;


/**
 * - Access using the CVMX_CIU_SOFT_RST CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 63;      /**< Reserved */
        uint64_t soft_rst                : 1;       /**< Reset the Octeon core. */
#else
        uint64_t soft_rst                : 1;
        uint64_t reserved                : 63;
#endif
    } s;
} cvmx_ciu_soft_rst_t;


/**
 * The CIU contains 4 general timers. Each consists of:
 *
 *  - A 36-bit configuration value specifying the timeout length
 *    in cycles.
 *    - The timer is disabled when this value is zero
 *
 *  - A configuration bit indicating one-shot. One-shot is
 *    the reset configuration.
 *
 *  - A 36-bit count register
 *    - This register is loaded with the configuration value in
 *      any of the following conditions:
 *      - The configuration value and/or one-shot bit is written.
 *      - The HW decremented the counter to zero the previous
 *        cycle and the mode is not one-shot.
 *    - The HW forces the counter to zero if it was zero the
 *      previous cycle and the mode is one-shot, and during
 *      reset.
 *    - Under all remaining conditions, the HW decrements the
 *      counter every cycle.
 *    - The HW sets the corresponding CVMX_CIU_INT_SUM bit
 *      when it decrements the counter to zero.
 *
 * - Access using the CVMX_CIU_TIMX(0..3) CSR.
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 27;      /**< Reserved for future use. Set to zero */
        uint64_t one_shot                : 1;       /**< Fire only once */
        uint64_t len                     : 36;      /**< Timeout length in cycles. */
#else
        uint64_t len                     : 36;
        uint64_t one_shot                : 1;
        uint64_t reserved                : 27;
#endif
    } s;
} cvmx_ciu_timx_t;


/**
 * There are 16 watchdogs, one for each of the 16 PP's. The watchdogs
 *  reside in the centralized interrupt unit and can be accessed by any
 *  PP, though a watchdog may generally only be accessed by its
 *  associated PP.
 *
 *  Each of the 16 watchdogs can be configured in one of four modes:
 *    MODE = OFF
 *           No interrupt / non-maskable interrupt / soft-reset
 *           is ever sourced by the watchdog.
 *
 *    MODE = INTERRUPT ONLY
 *           An interrupt is sourced from the point of the first
 *           time-out until a "PP poke" later arrives for this
 *           watchdog. (This interrupt can assert Cause[IP2/IP3]
 *           on the PP associated with the watchdog timer (only),
 *           depending on the settings of the centralized interrupt
 *           unit.) A "PP poke" for this watchdog is an IO store
 *           (i.e. a CSR write) by one of the PP's to an address
 *           associated with the watchdog.
 *
 *    MODE = INTERRUPT + NMI
 *           An interrupt is sourced from the point of the first
 *           time-out until a "PP poke" later arrives. An NMI
 *           pulse is generated for the associated PP when an
 *           interrupt is being sourced and a second time-out
 *           occurs.
 *
 *    MODE = INTERRUPT + NMI + SOFT-RESET
 *           An interrupt is sourced from the point of the first
 *           time-out until a "PP poke" later arrives. An NMI
 *           pulse is generated when an interrupt is being sourced
 *           and a second time-out occurs. A chip-wide soft-reset
 *           pulse is generated when an interrupt is being sourced
 *           and a third time-out occurs.
 *
 *  The HW maintains the following for each watchdog:
 *
 *    - A 2-bit configuration value specifying the mode.
 *
 *    - A 2-bit current state specifying the number of watchdog
 *      time expirations since the last "PP poke".
 *       - The HW sources a watchdog interrupt when this state is
 *         non-zero.
 *       - The HW clears the state on the following conditions:
 *          - A CSR write to the "PP poke" register.
 *          - An write to the CSR containing the mode.
 *       - The HW increments the state upon a watchdog time
 *         expiration as long as the current state is not
 *         three
 *       - The HW pulses an NMI when it increments the state to
 *         two and the mode includes the NMI option.
 *       - The HW pulses a soft reset when it increments the
 *         state to three and the mode includes the soft reset
 *         option.
 *
 *    - A 16-bit configuration value specifying the watchdog
 *      time expiration length.
 *
 *    - A 24-bit counter holding the remaining time until the
 *      next watchdog time expiration.
 *       - The HW sets the counter to the watchdog time expiration
 *         length (<< 8) under the following conditions:
 *          - The time expiration length config value is written.
 *          - The Hw decrements the counter to zero.
 *          - The "PP poke" register is written.
 *       - The HW decrements the counter once every 256
 *         cycles.
 *          - If Debug[DM] of the corresponding PP is set (i.e.
 *            if it is in debug mode) and DSTOP is set, the
 *            HW does not decrement the counter
 *          - If both GSTOP and GSTOPEN are set, the HW does
 *            not decrement the counter.
 *
 *    - A DSTOP configuration bit. When this bit is set and
 *      Debug[DM] of the corresponding PP is set (i.e. it is
 *      in debug mode), the counter does not decrement.
 *
 *    - A GSTOPEN configuration bit. When this bit is set and
 *      GSTOP is set, the counter does not decrement.
 *
 *  There are three topics that deserve special mention with
 *  respect to the use of watchdog timers:
 *
 *  - Delayed requests for new work
 *
 *      The POW HW can optionally delay a request for new
 *      work. When SW selects this option, if work is not
 *      immediately available in one of the groups that the
 *      PP is in, the HW will hold onto the request until
 *      work comes available or the request times out. Without
 *      timeouts, a PP could hang forever waiting for work,
 *      causing a watchdog expiration. With delayed work
 *      timeouts that are small relative to the watchdog
 *      expirations, as would be desired for this and other
 *      reasons, the software delayed work timeout handler
 *      can issue "PP poke" requests. The software may
 *      need to occasionally issue "PP poke" requests on
 *      timeouts when continuously waiting for work.
 *
 *  - Long tag switch waits
 *
 *      Depending on software configuration, it may be
 *      possible for the delay of a tag switch wait
 *      to cause a watchdog expiration. In these
 *      situations, it may be necessary for the software
 *      handler that is polling for the tag switch
 *      completion to occasionally issue "PP poke"'s.
 *      (In some cases, the preferred behavior may
 *      be the time out in this case, though.)
 *
 *  - Delayed Fetch&Add requests
 *
 *      The Octeon HW can optionally delay a Fetch&Add
 *      request. When SW selects this option, it either
 *      delays the operation until the prior tag switch
 *      completes, or times out the request. This is
 *      very similar to the delayed new work requests
 *      mentioned above. The solution could be the same
 *      also. But the solution may also be different since
 *      the SW may not continuously re-submit the requests;
 *      it may instead fall into a tag switch wait.
 *
 * Access the watchdogs using the CSRs CVMX_CIU_WDOGX(0..15) and CVMX_CIU_PP_POKEX(0..15).
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 18;      /**< Reserved for future use. Set to zero */
        uint64_t gstopen                 : 1;       /**< A GSTOPEN configuration bit. When this bit
                                                         is set and GSTOP is set, the counter does
                                                         not decrement. */
        uint64_t dstop                   : 1;       /**< A DSTOP configuration bit. When this bit
                                                         is set and Debug[DM] of the corresponding
                                                         PP is set (i.e. it is in debug mode), the
                                                         counter does not decrement. */
        uint64_t cnt                     : 24;      /**< A 24-bit counter holding the remaining time
                                                         until the next watchdog time expiration. */
        uint64_t len                     : 16;      /**< A 16-bit configuration value specifying the
                                                         watchdog time expiration length. */
        uint64_t state                   : 2;       /**< A 2-bit current state specifying the
                                                         number of watchdog time expirations since
                                                         the last poke. */
        uint64_t mode                    : 2;       /**< Watchdog mode */
#else
        uint64_t mode                    : 2;
        uint64_t state                   : 2;
        uint64_t len                     : 16;
        uint64_t cnt                     : 24;
        uint64_t dstop                   : 1;
        uint64_t gstopen                 : 1;
        uint64_t reserved                : 18;
#endif
    } s;
} cvmx_ciu_wdogx_t;


/**
 * DBG_DATA = Debug Data Register
 *  Value returned on the debug-data lines from the RSLs
 *
 * - Access using the CVMX_DBG_DATA CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 35;      /**< Reserved */
        uint64_t pll_mul                 : 11;      /**< Value of dbg_select pins at time pll_dcok asserts. */
        uint64_t dsel_ext                : 1;       /**< Allows changes in the external pins to set the
                                                         debug select value. */
        uint64_t data                    : 17;      /**< Value on the debug data lines. */
#else
        uint64_t data                    : 17;
        uint64_t dsel_ext                : 1;
        uint64_t pll_mul                 : 11;
        uint64_t reserved                : 35;
#endif
    } s;
} cvmx_dbg_data_t;


/**
 * DFA_BST0 = DFA Bist Status
 * - Access using the CVMX_DFA_BST0 CSR.
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 32;      /**< Must be zero */
        uint64_t rdf                     : 16;      /**< Bist Results for RDF RAM(s)
                                                         - 0: GOOD (or bist in progress/never run)
                                                         - 1: BAD */
        uint64_t pdf                     : 16;      /**< Bist Results for PDF RAM(s)
                                                         - 0: GOOD (or bist in progress/never run)
                                                         - 1: BAD */
#else
        uint64_t pdf                     : 16;
        uint64_t rdf                     : 16;
        uint64_t reserved                : 32;
#endif
    } s;
} cvmx_dfa_bst0_t;


/**
 * DFA_BST1 = DFA Bist Status
 *  Description:
 *
 * - Access using the CVMX_DFA_BST1 CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 41;      /**< RESERVED */
        uint64_t crq                     : 1;       /**< Bist Results for CRQ RAM
                                                         0: GOOD (or bist in progress/never run)
                                                         1: BAD */
        uint64_t ifu                     : 1;       /**< Bist Results for IFU RAM
                                                         0: GOOD (or bist in progress/never run)
                                                         1: BAD */
        uint64_t gfu                     : 1;       /**< Bist Results for GFU RAM
                                                         0: GOOD (or bist in progress/never run)
                                                         1: BAD */
        uint64_t drf                     : 1;       /**< Bist Results for DRF RAM
                                                         0: GOOD (or bist in progress/never run)
                                                         1: BAD */
        uint64_t crf                     : 1;       /**< Bist Results for CRF RAM
                                                         0: GOOD (or bist in progress/never run)
                                                         1: BAD */
        uint64_t p1_bwb                  : 1;       /**< Bist Results for P1_BWB RAM
                                                         0: GOOD (or bist in progress/never run)
                                                         1: BAD */
        uint64_t p0_bwb                  : 1;       /**< Bist Results for P0_BWB RAM
                                                         0: GOOD (or bist in progress/never run)
                                                         1: BAD */
        uint64_t p1_brf                  : 8;       /**< Bist Results for P1_BRF RAM
                                                         0: GOOD (or bist in progress/never run)
                                                         1: BAD */
        uint64_t p0_brf                  : 8;       /**< Bist Results for P0_BRF RAM
                                                         0: GOOD (or bist in progress/never run)
                                                         1: BAD */
#else
        uint64_t p0_brf                  : 8;
        uint64_t p1_brf                  : 8;
        uint64_t p0_bwb                  : 1;
        uint64_t p1_bwb                  : 1;
        uint64_t crf                     : 1;
        uint64_t drf                     : 1;
        uint64_t gfu                     : 1;
        uint64_t ifu                     : 1;
        uint64_t crq                     : 1;
        uint64_t reserved                : 41;
#endif
    } s;
} cvmx_dfa_bst1_t;


/**
 * DFA_CFG = DFA Configuration
 * - Access using the CVMX_DFA_CFG CSR.
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 63;      /**< Must be zero */
        uint64_t sarb                    : 1;       /**< DFA Source Arbiter Mode. Selects the
                                                         arbitration mode used to select DFA
                                                         requests issued from either CP2 or the
                                                         DTE (NCB-CSR or DFA HW engine).
                                                         - 0: Fixed Priority [Highest=CP2, Lowest=DTE]
                                                         - 1: Round-Robin */
#else
        uint64_t sarb                    : 1;
        uint64_t reserved                : 63;
#endif
    } s;
} cvmx_dfa_cfg_t;


/**
 * DFA_DBELL = DFA Doorbell Register
 *
 *  NOTE: To write to the DRP register, a device would issue an IOBST directed at the DFA with addr[34:33]=2'b00.
 *        To read the DRP register, a device would issue an IOBLD64 directed at the DFA with addr[34:33]=2'b00.
 * - Access using the CVMX_DFA_DBELL CSR.
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 44;      /**< Must be zero */
        uint64_t dbell                   : 20;      /**< Represents the cumulative total of pending
                                                         DFA instructions which SW has previously written
                                                         into the DFA Instruction FIFO (DIF) in main memory.
                                                         Each DFA instruction contains a fixed size 32B
                                                         instruction word which is executed by the DFA HW.
                                                         The DBL register can hold up to 1M-1 (2^20-1)
                                                         pending DFA instruction requests.

                                                         During a read (by SW), the 'most recent' contents
                                                         of the DFA_DBELL register are returned at the time
                                                         the NCB-INB bus is driven.

                                                         NOTE: Since DFA HW updates this register, its
                                                         contents are unpredictable in SW. */
#else
        uint64_t dbell                   : 20;
        uint64_t reserved                : 44;
#endif
    } s;
} cvmx_dfa_dbell_t;


/**
 * DFA_DIFCTL = DFA Instruction FIFO (DIF) Control Register
 *
 *  NOTE: To write to the DRP register, a device would issue an IOBST directed at the DFA with addr[34:33]=2'b11.
 *        To read the DRP register, a device would issue an IOBLD64 directed at the DFA with addr[34:33]=2'b11.
 *
 *  NOTE: This register is intended to ONLY be written once (at power-up). Any future writes could
 *  cause the DFA and FPA HW to become unpredictable.
 * - Access using the CVMX_DFA_DIFCTL CSR.
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 44;      /**< Must be zero */
        uint64_t dwbcnt                  : 8;       /**< Don't write back count in cache lines */
        uint64_t pool                    : 3;       /**< Memory Pool to use */
        uint64_t size                    : 9;       /**< Size of memory buffers is 64bit words */
#else
        uint64_t size                    : 9;
        uint64_t pool                    : 3;
        uint64_t dwbcnt                  : 8;
        uint64_t reserved                : 44;
#endif
    } s;
} cvmx_dfa_difctl_t;


/**
 * DFA_DIFRDPTR = DFA Instruction FIFO (DIF) RDPTR Register
 *
 *  NOTE: To write to the DRP register, a device would issue an IOBST directed at the DFA with addr[34:33]=2'b01.
 *        To read the DRP register, a device would issue an IOBLD64 directed at the DFA with addr[34:33]=2'b01.
 * - Access using the CVMX_DFA_DIFRDPTR CSR.
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved1               : 28;      /**< Must be zero */
        uint64_t rdptr                   : 31;      /**< Represents the 32B-aligned address of the current
                                                         instruction in the DFA Instruction FIFO in main
                                                         memory. The RDPTR must be seeded by software at
                                                         boot time, and is then maintained thereafter
                                                         by DFA HW.

                                                         During the seed write (by SW), RDPTR[6:5]=0,
                                                         since DFA instruction chunks must be 128B aligned.

                                                         During a read (by SW), the 'most recent' contents
                                                         of the RDPTR register are returned at the time
                                                         the NCB-INB bus is driven.

                                                         NOTE: Since DFA HW updates this register, its
                                                         contents are unpredictable in SW (unless
                                                         its guaranteed that no new DoorBell register
                                                         writes have occurred and the DoorBell register is
                                                         read as zero). */
        uint64_t reserved0               : 5;       /**< Must be zero */
#else
        uint64_t reserved0               : 5;
        uint64_t rdptr                   : 31;
        uint64_t reserved1               : 28;
#endif
    } s;
} cvmx_dfa_difrdptr_t;


/**
 * DFA_ERR = DFA ERROR Register
 * - Access using the CVMX_DFA_ERR CSR.
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 31;      /**< Must be zero */
        uint64_t dblina                  : 1;       /**< Doorbell Overflow Interrupt Enable bit.
                                                         When set, doorbell overflow conditions are reported. */
        uint64_t dblovf                  : 1;       /**< Doorbell Overflow detected - Status bit
                                                         When set, the 20b accumulated doorbell register
                                                         had overflowed (SW wrote too many doorbell requests).

                                                         If the DBLINA had previously been enabled(set),
                                                         an interrupt will be posted. Software can clear
                                                         the interrupt by writing a 1 to this register bit.

                                                         NOTE: Detection of a Doorbell Register overflow
                                                         is a catastrophic error which may leave the DFA
                                                         HW in an unrecoverable state. */
        uint64_t cp2pina                 : 1;       /**< CP2 LW Mode Parity Error Interrupt Enable bit.
                                                         When set, all PP-generated LW Mode read
                                                         transactions which encounter a parity error (across
                                                         the 36b of data) are reported. */
        uint64_t cp2perr                 : 1;       /**< PP-CP2 Parity Error Detected - Status bit
                                                         When set, a parity error had been detected for a
                                                         PP-generated LW Mode read transaction.

                                                         If the CP2PINA had previously been enabled(set),
                                                         an interrupt will be posted. Software can clear
                                                         the interrupt by writing a 1 to this register bit.

                                                         See also: DFA_MEMFADR CSR which contains more data
                                                         about the memory address/control to help isolate
                                                         the failure. */
        uint64_t cp2parena               : 1;       /**< CP2 LW Mode Parity Error Enable
                                                         When set, all PP-generated LW Mode read
                                                         transactions which encounter a parity error (across
                                                         the 36b of data) are reported. */
        uint64_t dtepina                 : 1;       /**< DTE Parity Error Interrupt Enable bit
                                                         (for 18b SIMPLE mode ONLY).
                                                         When set, all DTE-generated 18b SIMPLE Mode read
                                                         transactions which encounter a parity error (across
                                                         the 17b of data) are reported. */
        uint64_t dteperr                 : 1;       /**< DTE Parity Error Detected (for 18b SIMPLE mode ONLY)
                                                         When set, all DTE-generated 18b SIMPLE Mode read
                                                         transactions which encounter a parity error (across
                                                         the 17b of data) are reported. */
        uint64_t dteparena               : 1;       /**< DTE Parity Error Enable (for 18b SIMPLE mode ONLY)
                                                         When set, all DTE-generated 18b SIMPLE Mode read
                                                         transactions which encounter a parity error (across
                                                         the 17b of data) are reported. */
        uint64_t dtesyn                  : 7;       /**< DTE 29b ECC Failing 6bit Syndrome
                                                         When DTESBE or DTEDBE are set, this field contains
                                                         the failing 7b ECC syndrome. */
        uint64_t dtedbina                : 1;       /**< DTE 29b Double Bit Error Interrupt Enable bit
                                                         When set, an interrupt is posted for any DTE-generated
                                                         36b SIMPLE Mode read which encounters a double bit
                                                         error. */
        uint64_t dtesbina                : 1;       /**< DTE 29b Single Bit Error Interrupt Enable bit
                                                         When set, an interrupt is posted for any DTE-generated
                                                         36b SIMPLE Mode read which encounters a single bit
                                                         error (which is also corrected). */
        uint64_t dtedbe                  : 1;       /**< DTE 29b Double Bit Error Detected - Status bit
                                                         When set, a double bit error had been detected
                                                         for a DTE-generated 36b SIMPLE Mode read transaction.
                                                         The DTESYN contains the failing syndrome.

                                                         If the DTEDBINA had previously been enabled(set),
                                                         an interrupt will be posted. Software can clear
                                                         the interrupt by writing a 1 to this register bit.

                                                         See also: DFA_MEMFADR CSR which contains more data
                                                         about the memory address/control to help isolate
                                                         the failure.

                                                         NOTE: DTE-generated 18b SIMPLE Mode Read transactions
                                                         do not participate in ECC check/correct). */
        uint64_t dtesbe                  : 1;       /**< DTE 29b Single Bit Error Corrected - Status bit
                                                         When set, a single bit error had been detected and
                                                         corrected for a DTE-generated 36b SIMPLE Mode read
                                                         transaction.
                                                         If the DTEDBE=0, then the DTESYN contains the
                                                         failing syndrome (used during correction).

                                                         NOTE: DTE-generated 18b SIMPLE Mode Read
                                                         transactions do not participate in ECC check/correct).

                                                         If the DTESBINA had previously been enabled(set),
                                                         an interrupt will be posted. Software can clear
                                                         the interrupt by writing a 1 to this register bit.

                                                         See also: DFA_MEMFADR CSR which contains more data
                                                         about the memory address/control to help isolate
                                                         the failure. */
        uint64_t dteeccena               : 1;       /**< DTE 29b ECC Enable (for 36b SIMPLE mode ONLY)
                                                         When set, 29b ECC is enabled on all DTE-generated
                                                         36b SIMPLE Mode read transactions. */
        uint64_t cp2syn                  : 8;       /**< PP-CP2 QW ECC Failing 8bit Syndrome
                                                         When CP2SBE or CP2DBE are set, this field contains
                                                         the failing ECC 8b syndrome. */
        uint64_t cp2dbina                : 1;       /**< PP-CP2 Double Bit Error Interrupt Enable bit
                                                         When set, an interrupt is posted for any PP-generated
                                                         QW Mode read which encounters a double bit error. */
        uint64_t cp2sbina                : 1;       /**< PP-CP2 Single Bit Error Interrupt Enable bit
                                                         When set, an interrupt is posted for any PP-generated
                                                         QW Mode read which encounters a single bit error
                                                         (which is also corrected). */
        uint64_t cp2dbe                  : 1;       /**< PP-CP2 Double Bit Error Detected - Status bit
                                                         When set, a double bit error had been detected
                                                         for a PP-generated QW Mode read transaction.
                                                         The CP2SYN contains the failing syndrome.

                                                         NOTE: PP-generated LW Mode Read transactions
                                                         do not participate in ECC check/correct).

                                                         If the CP2DBINA had previously been enabled(set),
                                                         an interrupt will be posted. Software can clear
                                                         the interrupt by writing a 1 to this register bit.

                                                         See also: DFA_MEMFADR CSR which contains more data
                                                         about the memory address/control to help isolate
                                                         the failure. */
        uint64_t cp2sbe                  : 1;       /**< PP-CP2 Single Bit Error Corrected - Status bit
                                                         When set, a single bit error had been detected and
                                                         corrected for a PP-generated QW Mode read
                                                         transaction.
                                                         If the CP2DBE=0, then the CP2SYN contains the
                                                         failing syndrome (used during correction).

                                                         If the CP2SBINA had previously been enabled(set),
                                                         an interrupt will be posted. Software can clear
                                                         the interrupt by writing a 1 to this register bit.

                                                         See also: DFA_MEMFADR CSR which contains more data
                                                         about the memory address/control to help isolate
                                                         the failure.

                                                         NOTE: PP-generated LW Mode Read transactions
                                                         do not participate in ECC check/correct). */
        uint64_t cp2eccena               : 1;       /**< PP-CP2 QW ECC Enable (for QW Mode transactions)
                                                         When set, 8bit QW ECC is enabled on all PP-generated
                                                         QW Mode read transactions. */
#else
        uint64_t cp2eccena               : 1;
        uint64_t cp2sbe                  : 1;
        uint64_t cp2dbe                  : 1;
        uint64_t cp2sbina                : 1;
        uint64_t cp2dbina                : 1;
        uint64_t cp2syn                  : 8;
        uint64_t dteeccena               : 1;
        uint64_t dtesbe                  : 1;
        uint64_t dtedbe                  : 1;
        uint64_t dtesbina                : 1;
        uint64_t dtedbina                : 1;
        uint64_t dtesyn                  : 7;
        uint64_t dteparena               : 1;
        uint64_t dteperr                 : 1;
        uint64_t dtepina                 : 1;
        uint64_t cp2parena               : 1;
        uint64_t cp2perr                 : 1;
        uint64_t cp2pina                 : 1;
        uint64_t dblovf                  : 1;
        uint64_t dblina                  : 1;
        uint64_t reserved                : 31;
#endif
    } s;
} cvmx_dfa_err_t;


/**
 * DFA_MEMCFG0 = DFA Memory Configuration
 *  Description:
 *
 * - Access using the CVMX_DFA_MEMCFG0 CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved1               : 37;      /**< RESERVED */
        uint64_t bunk_init               : 2;       /**< Controls the CS_N[1:0] during a HW Initialization
                                                         sequence (triggered by DFA_MEMCFG0[Px_INIT]). If
                                                         the BNK_INIT[x]=1, the corresponding CS_N[x] is
                                                         driven.
                                                         NOTE: This is required for DRAM used in a
                                                         clamshell configuration, since the address lines
                                                         carry Mode Register write data that is unique
                                                         per bunk(or clam). In a clamshell configuration,
                                                         The N3K A[x] pin may be tied into Clam#0's A[x]
                                                         and also into Clam#1's 'mirrored' address bit A[y]
                                                         (eg: Clam0 sees A[5] and Clam1 sees A[15]).
                                                         To support clamshell designs, SW must initiate
                                                         two separate HW init sequences for the two bunks
                                                         (or clams) . Before each HW init sequence is triggered,
                                                         SW must preload the DFA_MEMRLD[22:0] with the data
                                                         that will be driven onto the A[22:0] wires during
                                                         an MRS mode register write. */
        uint64_t p1_init                 : 1;       /**< When a '1' is written, and the previous value was '0',
                                                         the HW init sequence(s) for Memory Port #1 is
                                                         initiated.
                                                         NOTE: To initialize memory, SW must:
                                                         1) Enable memory port(s):
                                                         a) P0_ENA=1 (single port) OR
                                                         b) P0_ENA=1/P1_ENA=1 (dual ports)
                                                         2) Wait 100us (to ensure a stable clock
                                                         to the RLDRAMs) - as per RLDRAM spec.
                                                         3) Write a '1' to the corresponding Px_INIT which
                                                         will initiate a hardware initialization
                                                         sequence. */
        uint64_t p0_init                 : 1;       /**< When a '1' is written, and the previous value was '0',
                                                         the HW init sequence(s) for Memory Port #0 is
                                                         initiated.
                                                         NOTE: To initialize memory, SW must:
                                                         1) Enable memory port(s):
                                                         a) P0_ENA=1 (single port) OR
                                                         b) P0_ENA=1/P1_ENA=1 (dual ports)
                                                         2) Wait 100us (to ensure a stable clock
                                                         to the RLDRAMs) - as per RLDRAM spec.
                                                         3) Write a '1' to the corresponding Px_INIT which
                                                         will initiate a hardware initialization
                                                         sequence. */
        uint64_t r2r_pbunk               : 1;       /**< When enabled, an additional command bubble is inserted
                                                         if back to back reads are issued to different physical
                                                         bunks. This is to avoid DQ data bus collisions when
                                                         references cross between physical bunks.
                                                         [NOTE: physical bunk address crossing is determined
                                                         with the PBUNK bit]. */
        uint64_t pbunk                   : 3;       /**< Physical Bunk address bit pointer.
                                                         Specifies which address bit within the Memory address
                                                         MA[23:0] is used to determine the chip selects.
                                                         [RLD_CS0_N corresponds to physical bunk #0, and
                                                         RLD_CS1_N corresponds to physical bunk #1].
                                                         000: CS0_N = MA[19]/CS1_N = !MA[19]
                                                         001: CS0_N = MA[20]/CS1_N = !MA[20]
                                                         010: CS0_N = MA[21]/CS1_N = !MA[21]
                                                         011: CS0_N = MA[22]/CS1_N = !MA[22]
                                                         100: CS0_N = MA[23]/CS1_N = !MA[23]
                                                         101-111: RESERVED
                                                         Example(s):
                                                         To build out a 128MB DFA memory, 4x 32Mx9
                                                         parts could be used to fill out TWO physical
                                                         bunks (clamshell configuration). Each (of the
                                                         two) physical bunks contains 2x 32Mx9 = 16Mx36.
                                                         Each RLDRAM device also contains 8 internal banks,
                                                         therefore the memory Address is 16M/8banks = 2M
                                                         addresses/bunk (2^21). In this case, MA[21] would
                                                         be used to determine the Chip Select(s). */
        uint64_t blen                    : 1;       /**< Burst Length (0=2-burst/1=4-burst)
                                                         NOTE: If MTYPE=0 (RLDRAM), BLEN must be zero. */
        uint64_t bprch                   : 2;       /**< Tristate Enable (back porch) (#dclks)
                                                         On reads, allows user to control the shape of the
                                                         tristate disable back porch for the DQ data bus.
                                                         This parameter is also very dependent on the
                                                         RW_DLY and WR_DLY parameters and care must be
                                                         taken when programming these parameters to avoid
                                                         data bus contention. Valid range [0..2] */
        uint64_t fprch                   : 2;       /**< Tristate Enable (front porch) (#dclks)
                                                         On reads, allows user to control the shape of the
                                                         tristate disable front porch for the DQ data bus.
                                                         This parameter is also very dependent on the
                                                         RW_DLY and WR_DLY parameters and care must be
                                                         taken when programming these parameters to avoid
                                                         data bus contention. Valid range [0..2] */
        uint64_t wr_dly                  : 4;       /**< Write->Read CMD Delay (#mclks):
                                                         Determines #mclk cycles to insert when controller
                                                         switches from write to read. This allows programmer
                                                         to control the data bus contention. */
        uint64_t rw_dly                  : 4;       /**< Read->Write CMD Delay (#mclks):
                                                         Determines #mclk cycles to insert when controller
                                                         switches from read to write. This allows programmer
                                                         to control the data bus contention. */
        uint64_t sil_lat                 : 2;       /**< Silo Latency (#dclks): On reads, determines how many
                                                         additional dclks to wait (on top of tRL+1) before
                                                         pulling data out of the padring silos used for time
                                                         domain boundary crossing. */
        uint64_t mtype                   : 1;       /**< Memory Type (0=RLDRAM-II/1=Network FCRAM)
                                                         NOTE: N3K-P1 only supports RLDRAM-II */
        uint64_t reserved2               : 1;       /**< RESERVED */
        uint64_t p1_ena                  : 1;       /**< Enable DFA RLDRAM Port#1
                                                         When enabled, this bit lets N3K be the default
                                                         driver for memory port #1.
                                                         NOTE: To enable Port#1(2nd port), Port#0 MUST ALSO
                                                         be enabled. */
        uint64_t p0_ena                  : 1;       /**< Enable DFA RLDRAM Port#0
                                                         When enabled, this bit lets N3K be the default
                                                         driver for memory port #0.
                                                         NOTE: If the customer wishes to use a single port,
                                                         s/he must enable Port#0 (and not Port#1). */
#else
        uint64_t p0_ena                  : 1;
        uint64_t p1_ena                  : 1;
        uint64_t reserved2               : 1;
        uint64_t mtype                   : 1;
        uint64_t sil_lat                 : 2;
        uint64_t rw_dly                  : 4;
        uint64_t wr_dly                  : 4;
        uint64_t fprch                   : 2;
        uint64_t bprch                   : 2;
        uint64_t blen                    : 1;
        uint64_t pbunk                   : 3;
        uint64_t r2r_pbunk               : 1;
        uint64_t p0_init                 : 1;
        uint64_t p1_init                 : 1;
        uint64_t bunk_init               : 2;
        uint64_t reserved1               : 37;
#endif
    } s;
} cvmx_dfa_memcfg0_t;


/**
 * DFA_MEMCFG1 = RLDRAM Memory Timing Configuration
 * - Access using the CVMX_DFA_MEMCFG1 CSR.
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 39;      /**< Must be zero */
        uint64_t aref_ena                : 1;       /**< Auto Refresh Cycle Enable
                                                         INTERNAL USE ONLY: NOTE: This mode bit
                                                         is ONLY intended to be used by low-level
                                                         power-on initialization routines in the
                                                         event that the hardware initialization routine
                                                         does not work. It allows SW to create AREF
                                                         commands on the RLDRAM bus directly.
                                                         When this bit is set, ALL RLDRAM writes (issued by
                                                         a PP through the NCB or CP2) are converted to AREF
                                                         commands on the RLDRAM bus. The write-address is
                                                         presented on the A[20:0]/BA[2:0] pins (for which
                                                         the RLDRAM only interprets BA[2:0]).
                                                         When this bit is set, only writes are allowed
                                                         and MUST use grepl=0 (1x). */
        uint64_t mrs_ena                 : 1;       /**< Mode Register Set Cycle Enable
                                                         INTERNAL USE ONLY: NOTE: This mode bit
                                                         is ONLY intended to be used by low-level
                                                         power-on initialization routines in the
                                                         event that the hardware initialization routine
                                                         does not work. It allows SW to create MRS
                                                         commands on the RLDRAM bus directly.
                                                         When this bit is set, ALL RLDRAM writes (issued by
                                                         a PP through the NCB or CP2) are converted to MRS
                                                         commands on the RLDRAM bus. The write-address is
                                                         presented on the A[20:0]/BA[2:0] pins (for which
                                                         the RLDRAM only interprets A[17:0]).
                                                         When this bit is set, only writes are allowed
                                                         and MUST use grepl=0 (1x). */
        uint64_t tmrsc                   : 3;       /**< Mode Register Set Cycle Time (represented in #mclks)
                                                         - 000-001: RESERVED
                                                         - 010: tMRSC = 2 mclks
                                                         - 011: tMRSC = 3 mclks
                                                         -
                                                         - 111: tMRSC = 7 mclks */
        uint64_t trc                     : 4;       /**< Row Cycle Time (represented in #mclks)
                                                         see also: DFA_MEMRLD[RLCFG] field which
                                                         must correspond with tRL/tWL parameter(s).
                                                         - 0000-0010: RESERVED
                                                         - 0011: tRC = 3 mclks
                                                         - 0100: tRC = 4 mclks
                                                         - 0101: tRC = 5 mclks
                                                         - 0110: tRC = 6 mclks
                                                         - 0111: tRC = 7 mclks
                                                         - 1000: tRC = 8 mclks
                                                         - 1001: tRC = 9 mclks
                                                         - 1010-1111: RESERVED */
        uint64_t twl                     : 4;       /**< Write Latency (represented in #mclks)
                                                         see also: DFA_MEMRLD[RLCFG] field which
                                                         must correspond with tRL/tWL parameter(s).
                                                         - 0000-0001: RESERVED
                                                         - 0010: Write Latency (WL=2.0 mclk)
                                                         - 0011: Write Latency (WL=3.0 mclks)
                                                         - 0100: Write Latency (WL=4.0 mclks)
                                                         - 0101: Write Latency (WL=5.0 mclks)
                                                         - 0110: Write Latency (WL=6.0 mclks)
                                                         - 0111: Write Latency (WL=7.0 mclks)
                                                         - 1000: Write Latency (WL=8.0 mclks)
                                                         - 1001: Write Latency (WL=9.0 mclks)
                                                         - 1010: Write Latency (WL=10.0 mclks)
                                                         - 1011-1111: RESERVED */
        uint64_t trl                     : 4;       /**< Read Latency (represented in #mclks)
                                                         see also: DFA_MEMRLD[RLCFG] field which
                                                         must correspond with tRL/tWL parameter(s).
                                                         - 0000-0010: RESERVED
                                                         - 0011: Read Latency = 3 mclks
                                                         - 0100: Read Latency = 4 mclks
                                                         - 0101: Read Latency = 5 mclks
                                                         - 0110: Read Latency = 6 mclks
                                                         - 0111: Read Latency = 7 mclks
                                                         - 1000: Read Latency = 8 mclks
                                                         - 1001: Read Latency = 9 mclks
                                                         - 1010: Read Latency = 10 mclks
                                                         - 1011-1111: RESERVED */
        uint64_t spare                   : 2;       /**< Spare bits */
        uint64_t tskw                    : 2;       /**< Board Skew (represented in #dclks)
                                                         Represents additional board skew of DQ/DQS.
                                                         - 00: board-skew = 0 dclk
                                                         - 01: board-skew = 1 dclk
                                                         - 10: board-skew = 2 dclk
                                                         - 11: board-skew = 3 dclk */
        uint64_t ref_int                 : 4;       /**< Burst Refresh Interval (represented in
                                                         #of 512 dclk increments). All 8 banks are
                                                         explicitly refreshed at each burst
                                                         refresh interval.
                                                         - 0000: RESERVED
                                                         - 0001: 1 * 512  = 512 dclks
                                                         -
                                                         - 1111: 15 * 512 = 7680 dclks
                                                         Example: 64K AREF cycles required within
                                                         tREF=32ms trefint = tREF(ms)/(64K cycles/8banks)
                                                         = 32ms/8K = 3.9us For dclk(400MHz=2.5ns):
                                                         3.9us/2.5ns = 1560 dclks
                                                         REF_INT = ROUND_DOWN(1560/512) = 3 */
#else
        uint64_t ref_int                 : 4;
        uint64_t tskw                    : 2;
        uint64_t spare                   : 2;
        uint64_t trl                     : 4;
        uint64_t twl                     : 4;
        uint64_t trc                     : 4;
        uint64_t tmrsc                   : 3;
        uint64_t mrs_ena                 : 1;
        uint64_t aref_ena                : 1;
        uint64_t reserved                : 39;
#endif
    } s;
} cvmx_dfa_memcfg1_t;


/**
 * DFA_MEMFADR = RLDRAM Failing Address/Control Register
 *
 * DFA Memory Failing Address/Control Error Capture information
 * This register contains useful information to help in isolating an RLDRAM memory failure.
 * NOTE: The first detected SEC/DED/PERR failure is captured in DFA_MEMFADR, however, a DED or PERR (which is
 * more severe) will always overwrite a SEC error. The user can 'infer' the source of the interrupt
 * via the FSRC field.
 * - Access using the CVMX_DFA_MEMFADR CSR.
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 25;      /**< Must be zero */
        uint64_t fdst                    : 9;       /**< Fill-Destination
                                                          <pre>
                                                          FSRC[1:0]    | FDST[8:0]
                                                          -------------+-------------------------------------
                                                           0(NCB-DTE)  | [fillstart,2'b0,WIDX(1),DMODE(1),DTE(4)]
                                                           1(NCB-CSR)  | [ncbSRC[8:0]]
                                                           3(CP2-PP)   | [2'b0,SIZE(1),INDEX(1),PP(4),FID(1)]
                                                         where:
                                                             DTE: DFA Thread Engine ID#
                                                             PP: Packet Processor ID#
                                                             FID: Fill-ID# (unique per PP)
                                                             WIDX:  18b SIMPLE Mode (index)
                                                             DMODE: (0=18b SIMPLE/1=36b SIMPLE)
                                                             SIZE: (0=LW Mode access/1=QW Mode Access)
                                                             INDEX: (0=Low LW/1=High LW)
                                                          </pre> */
        uint64_t fsrc                    : 2;       /**< Fill-Source (0=NCB-DTE/1=NCB-CSR/2=RESERVED/3=PP-CP2) */
        uint64_t pnum                    : 1;       /**< Memory Port */
        uint64_t bnum                    : 3;       /**< Memory Bank */
        uint64_t maddr                   : 24;      /**< Memory Address */
#else
        uint64_t maddr                   : 24;
        uint64_t bnum                    : 3;
        uint64_t pnum                    : 1;
        uint64_t fsrc                    : 2;
        uint64_t fdst                    : 9;
        uint64_t reserved                : 25;
#endif
    } s;
} cvmx_dfa_memfadr_t;


/**
 * DFA_MEMRLD = DFA RLDRAM MRS Register Values
 *  Description:
 *
 * - Access using the CVMX_DFA_MEMRLD CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 41;      /**< RESERVED */
        uint64_t mrsdat                  : 23;      /**< This field represents the data driven onto the
                                                         A[22:0] address lines during MRS(Mode Register Set)
                                                         commands (during a HW init sequence). This field
                                                         corresponds with the Mode Register Bit Map from
                                                         your RLDRAM-II device specific data sheet.
                                                         A[17:10]: RESERVED
                                                         A[9]:     ODT (on die termination)
                                                         A[8]:     Impedance Matching
                                                         A[7]:     DLL Reset
                                                         A[6]:     UNUSED
                                                         A[5]:     Address Mux  (for N3K: MUST BE ZERO)
                                                         A[4:3]:   Burst Length (for N3K: MUST BE ZERO)
                                                         A[2:0]:   Configuration (see data sheet for
                                                         specific RLDRAM-II device).
                                                         000-001: CFG=1 [tRC=4/tRL=4/tWL=5]
                                                         010:     CFG=2 [tRC=6/tRL=6/tWL=7]
                                                         011:     CFG=3 [tRC=8/tRL=8/tWL=9]
                                                         100-111: RESERVED
                                                         NOTE: For additional density, the RLDRAM-II parts
                                                         can be 'clamshelled' (ie: two devices mounted on
                                                         different sides of the PCB board), since the BGA
                                                         pinout supports 'mirroring'.
                                                         To support a clamshell design, SW must preload
                                                         the MRSDAT[22:0] with the proper A[22:0] pin mapping
                                                         which is dependent on the 'selected' bunk/clam
                                                         (see also: DFA_MEMCFG0[BUNK_INIT] field). */
#else
        uint64_t mrsdat                  : 23;
        uint64_t reserved                : 41;
#endif
    } s;
} cvmx_dfa_memrld_t;


/**
 * DFA_NCBCTL = DFA NCB CTL Register
 *
 * - Access using the CVMX_DFA_NCBCTL CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 54;      /**< RESERVED */
        uint64_t sbdnum                  : 4;       /**< SBD Debug Entry#
                                                         For internal use only. (DFA Scoreboard debug)
                                                         Selects which one of 16 DFA Scoreboard entries is
                                                         latched into the DFA_SBD_DBG[0-3] registers. */
        uint64_t sbdlck                  : 1;       /**< DFA Scoreboard LOCK Strobe
                                                         For internal use only. (DFA Scoreboard debug)
                                                         When written with a '1', the DFA Scoreboard Debug
                                                         registers (DFA_SBD_DBG[0-3]) are all locked down.
                                                         This allows SW to lock down the contents of the entire
                                                         SBD for a single instant in time. All subsequent reads
                                                         of the DFA scoreboard registers will return the data
                                                         from that instant in time. */
        uint64_t dcmode                  : 1;       /**< DRF-CRQ/DTE Arbiter Mode
                                                         DTE-DRF Arbiter (0=FP [LP=CRQ/HP=DTE],1=RR) */
        uint64_t dtmode                  : 1;       /**< DRF-DTE Arbiter Mode
                                                         DTE-DRF Arbiter (0=FP [LP=DTE[15],...,HP=DTE[0]],1=RR) */
        uint64_t pmode                   : 1;       /**< NCB-NRP Arbiter Mode
                                                         (0=Fixed Priority [LP=WQF,DFF,HP=RGF]/1=RR */
        uint64_t qmode                   : 1;       /**< NCB-NRQ Arbiter Mode
                                                         (0=Fixed Priority [LP=IRF,RWF,PRF,HP=GRF]/1=RR */
        uint64_t imode                   : 1;       /**< NCB-Inbound Arbiter
                                                         (0=FP [LP=NRQ,HP=NRP], 1=RR) */
#else
        uint64_t imode                   : 1;
        uint64_t qmode                   : 1;
        uint64_t pmode                   : 1;
        uint64_t dtmode                  : 1;
        uint64_t dcmode                  : 1;
        uint64_t sbdlck                  : 1;
        uint64_t sbdnum                  : 4;
        uint64_t reserved                : 54;
#endif
    } s;
} cvmx_dfa_ncbctl_t;


/**
 * DFA_SBD_DBG0 = DFA Scoreboard Debug #0 Register
 *  Description: When the DFA_NCBCTL[SBDLCK] bit is written '1', the contents of this register are locked down.
 *  Otherwise, the contents of this register are the 'active' contents of the DFA Scoreboard at the time of the
 *  CSR read.
 *
 * - Access using the CVMX_DFA_SBD_DBG0 CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t sbd0                    : 64;      /**< DFA ScoreBoard #0 Data
                                                         For internal use only! (DFA Scoreboard Debug)
                                                         [63:40] rptr[26:3]: Result Base Pointer
                                                         [39:24] rwcnt[15:0] Cumulative Result Write Counter
                                                         [23]    lastgrdrsp: Last Gather-Rd Response
                                                         [22]    wtgrdrsp: Waiting Gather-Rd Response
                                                         [21]    wtgrdreq: Waiting for Gather-Rd Issue
                                                         [20]    glvld: GLPTR/GLCNT Valid
                                                         [19]    cmpmark: Completion Marked Node Detected
                                                         [18:17] cmpcode[1:0]: Completion Code
                                                         [0=PDGONE/1=PERR/2=RFULL/3=TERM]
                                                         [16]    cmpdet: Completion Detected
                                                         [15]    wthdrwrcmtrsp: Waiting for HDR RWrCmtRsp
                                                         [14]    wtlastwrcmtrsp: Waiting for LAST RESULT
                                                         RWrCmtRsp
                                                         [13]    hdrwrreq: Waiting for HDR RWrReq
                                                         [12]    wtrwrreq: Waiting for RWrReq
                                                         [11]    wtwqwrreq: Waiting for WQWrReq issue
                                                         [10]    lastprdrspeot: Last Packet-Rd Response
                                                         [9]     lastprdrsp: Last Packet-Rd Response
                                                         [8]     wtprdrsp:  Waiting for PRdRsp EOT
                                                         [7]     wtprdreq: Waiting for PRdReq Issue
                                                         [6]     lastpdvld: PDPTR/PDLEN Valid
                                                         [5]     pdvld: Packet Data Valid
                                                         [4]     wqvld: WQVLD
                                                         [3]     wqdone: WorkQueue Done condition
                                                         a) WQWrReq issued(for WQPTR<>0) OR
                                                         b) HDR RWrCmtRsp completed)
                                                         [2]     rwstf: Resultant write STF/P Mode
                                                         [1]     pdldt: Packet-Data LDT mode
                                                         [0]     gmode: Gather-Mode */
#else
        uint64_t sbd0                    : 64;
#endif
    } s;
} cvmx_dfa_sbd_dbg0_t;


/**
 * DFA_SBD_DBG1 = DFA Scoreboard Debug #1 Register
 *  Description: When the DFA_NCBCTL[SBDLCK] bit is written '1', the contents of this register are locked down.
 *  Otherwise, the contents of this register are the 'active' contents of the DFA Scoreboard at the time of the
 *  CSR read.
 *
 * - Access using the CVMX_DFA_SBD_DBG1 CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t sbd1                    : 64;      /**< DFA ScoreBoard #1 Data
                                                         For internal use only! (DFA Scoreboard Debug)
                                                         [63:61] wqptr[35:33]: Work Queue Pointer
                                                         [60:52] rptr[35:27]: Result Base Pointer
                                                         [51:16] pdptr[35:0]: Packet Data Pointer
                                                         [15:0]  pdcnt[15:0]: Packet Data Counter */
#else
        uint64_t sbd1                    : 64;
#endif
    } s;
} cvmx_dfa_sbd_dbg1_t;


/**
 * DFA_SBD_DBG2 = DFA Scoreboard Debug #2 Register
 *  Description: When the DFA_NCBCTL[SBDLCK] bit is written '1', the contents of this register are locked down.
 *  Otherwise, the contents of this register are the 'active' contents of the DFA Scoreboard at the time of the
 *  CSR read.
 *
 * - Access using the CVMX_DFA_SBD_DBG2 CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t sbd2                    : 64;      /**< DFA ScoreBoard #2 Data
                                                         [63:49] wqptr[17:3]: Work Queue Pointer
                                                         [48:16] rwptr[35:3]: Result Write Pointer
                                                         [15:0]  prwcnt[15:0]: Pending Result Write Counter */
#else
        uint64_t sbd2                    : 64;
#endif
    } s;
} cvmx_dfa_sbd_dbg2_t;


/**
 * DFA_SBD_DBG3 = DFA Scoreboard Debug #3 Register
 *  Description: When the DFA_NCBCTL[SBDLCK] bit is written '1', the contents of this register are locked down.
 *  Otherwise, the contents of this register are the 'active' contents of the DFA Scoreboard at the time of the
 *  CSR read.
 *
 * - Access using the CVMX_DFA_SBD_DBG3 CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t sbd3                    : 64;      /**< DFA ScoreBoard #3 Data
                                                         [63:49] wqptr[32:18]: Work Queue Pointer
                                                         [48:16] glptr[35:3]: Gather List Pointer
                                                         [15:0]  glcnt[15:0]: Gather List Counter */
#else
        uint64_t sbd3                    : 64;
#endif
    } s;
} cvmx_dfa_sbd_dbg3_t;


/**
 * FPA_BIST_STATUS = BIST Status of FPA Memories
 *  The result of the BIST run on the FPA memories.
 *
 * - Access using the CVMX_FPA_BIST_STATUS CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 59;      /**< Reserved */
        uint64_t frd                     : 1;       /**< fpa_frd memory bist status. */
        uint64_t fpf0                    : 1;       /**< fpa_fpf0 memory bist status. */
        uint64_t fpf1                    : 1;       /**< fpa_fpf1 memory bist status. */
        uint64_t ffr                     : 1;       /**< fpa_ffr memory bist status. */
        uint64_t fdr                     : 1;       /**< fpa_fdr memory bist status. */
#else
        uint64_t fdr                     : 1;
        uint64_t ffr                     : 1;
        uint64_t fpf1                    : 1;
        uint64_t fpf0                    : 1;
        uint64_t frd                     : 1;
        uint64_t reserved                : 59;
#endif
    } s;
} cvmx_fpa_bist_status_t;


/**
 * FPA_CTL_STATUS = FPA's Control/Status Register
 *
 * The FPA's interrupt enable register.
 * - Access using the CVMX_FPA_CTL_STATUS CSR.
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 49;      /**< Must be zero */
        uint64_t enb                     : 1;       /**< Must be set to 1 AFTER writing all config registers
                                                         and 10 cycles have past. If any of the config
                                                         register are written after writing this bit the
                                                         FPA may begin to operate incorrectly. */
        uint64_t mem1_err                : 7;       /**< Causes a flip of the ECC bit associated 38:32
                                                         respective to bit 6:0 of this field, for FPF
                                                         FIFO 1. */
        uint64_t mem0_err                : 7;       /**< Causes a flip of the ECC bit associated 38:32
                                                         respective to bit 6:0 of this field, for FPF
                                                         FIFO 0. */
#else
        uint64_t mem0_err                : 7;
        uint64_t mem1_err                : 7;
        uint64_t enb                     : 1;
        uint64_t reserved                : 49;
#endif
    } s;
} cvmx_fpa_ctl_status_t;


/**
 * FPA_FPF0_MARKS = FPA's Queue 0 Free Page FIFO Read Write Marks
 *
 * The high and low watermark register that determines when we write and
 * read free pages from L2C for Queue 0.
 * - Access using the CVMX_FPA_FPF0_MARKS CSR.
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 40;      /**< Must be zero */
        uint64_t fpf_wr                  : 12;      /**< When the number of free-page-pointers in a
                                                         queue exceeds this value the FPA will write
                                                         32-page-pointers of that queue to DRAM.
                                                         The MAX value for this field should be
                                                         FPA_FPF0_SIZE[FPF_SIZ]-2. */
        uint64_t fpf_rd                  : 12;      /**< When the number of free-page-pointers in a
                                                         queue drops below this value amd there are
                                                         free-page-pointers in DRAM, the FPA will
                                                         read one page (32 pointers) from DRAM.
                                                         This maximum value for this field should be
                                                         FPA_FPF0_SIZE[FPF_SIZ]-34. The min number
                                                         for this would be 16. */
#else
        uint64_t fpf_rd                  : 12;
        uint64_t fpf_wr                  : 12;
        uint64_t reserved                : 40;
#endif
    } s;
} cvmx_fpa_fpf0_marks_t;


/**
 * FPA_FPF0_SIZE = FPA's Queue 0 Free Page FIFO Size
 *
 * The number of page pointers that will be kept local to the FPA for this Queue. FPA Queues are
 * assigned in order from Queue 0 to Queue 7, though only Queue 0 through Queue x can be used.
 * The sum of the 8 (0-7) FPA_FPF#_SIZE registers must be limited to 2048.
 * - Access using the CVMX_FPA_FPF0_SIZE CSR.
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 52;      /**< Must be zero */
        uint64_t fpf_siz                 : 12;      /**< The number of entries assigned in the FPA FIFO
                                                         (used to hold page-pointers) for this Queue.
                                                         The value of this register must divisable by 2,
                                                         and the FPA will ignore bit [0] of this register.
                                                         The total of the FPF_SIZ field of the 8 (0-7)
                                                         FPA_FPF#_MARKS registers must not exceed 2048.
                                                         After writing this field the FPA will need 10
                                                         core clock cycles to be ready for operation. The
                                                         assignment of location in the FPA FIFO must
                                                         start with Queue 0, then 1, 2, etc.
                                                         The number of useable entries will be FPF_SIZ-2. */
#else
        uint64_t fpf_siz                 : 12;
        uint64_t reserved                : 52;
#endif
    } s;
} cvmx_fpa_fpf0_size_t;


/**
 * FPA_FPF1_MARKS = FPA's Queue 1 Free Page FIFO Read Write Marks
 *
 * The high and low watermark register that determines when we write and
 * read free pages from L2C for Queue 1.
 * - Access using the CVMX_FPA_FPF[1-7]_MARKS CSR.
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 42;      /**< Must be zero */
        uint64_t fpf_wr                  : 11;      /**< When the number of free-page-pointers in a
                                                         queue exceeds this value the FPA will write
                                                         32-page-pointers of that queue to DRAM.
                                                         The MAX value for this field should be
                                                         FPA_FPF0_SIZE[FPF_SIZ]-2. */
        uint64_t fpf_rd                  : 11;      /**< When the number of free-page-pointers in a
                                                         queue drops below this value amd there are
                                                         free-page-pointers in DRAM, the FPA will
                                                         read one page (32 pointers) from DRAM.
                                                         This maximum value for this field should be
                                                         FPA_FPF0_SIZE[FPF_SIZ]-34. The min number
                                                         for this would be 16. */
#else
        uint64_t fpf_rd                  : 11;
        uint64_t fpf_wr                  : 11;
        uint64_t reserved                : 42;
#endif
    } s;
} cvmx_fpa_fpf_marks_t;


/**
 * FPA_FPFx_SIZE = FPA's Queue 1-7 Free Page FIFO Size
 *
 * The number of page pointers that will be kept local to the FPA for this Queue. FPA Queues are
 * assigned in order from Queue 0 to Queue 7, though only Queue 0 through Queue x can be used.
 * The sum of the 8 (0-7) FPA_FPF#_SIZE registers must be limited to 2048.
 * - Access using the CVMX_FPA_FPFX_SIZE(1..7) CSR.
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 53;      /**< Must be zero */
        uint64_t fpf_siz                 : 11;      /**< The number of entries assigned in the FPA FIFO
                                                         (used to hold page-pointers) for this Queue.
                                                         The value of this register must divisable by 2,
                                                         and the FPA will ignore bit [0] of this register.
                                                         The total of the FPF_SIZ field of the 8 (0-7)
                                                         FPA_FPF#_MARKS registers must not exceed 2048.
                                                         After writing this field the FPA will need 10
                                                         core clock cycles to be ready for operation. The
                                                         assignment of location in the FPA FIFO must
                                                         start with Queue 0, then 1, 2, etc.
                                                         The number of useable entries will be FPF_SIZ-2. */
#else
        uint64_t fpf_siz                 : 11;
        uint64_t reserved                : 53;
#endif
    } s;
} cvmx_fpa_fpfx_size_t;


/**
 * FPA_INT_ENB = FPA's Interrupt Enable
 *
 * The FPA's interrupt enable register.
 * - Access using the CVMX_FPA_INT_ENB CSR.
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 60;      /**< Must be zero */
        uint64_t fed1_dbe                : 1;       /**< When set (1) and bit 3 of the FPA_INT_SUM
                                                         register is asserted the FPA will assert an
                                                         interrupt. */
        uint64_t fed1_sbe                : 1;       /**< When set (1) and bit 2 of the FPA_INT_SUM
                                                         register is asserted the FPA will assert an
                                                         interrupt. */
        uint64_t fed0_dbe                : 1;       /**< When set (1) and bit 1 of the FPA_INT_SUM
                                                         register is asserted the FPA will assert an
                                                         interrupt. */
        uint64_t fed0_sbe                : 1;       /**< When set (1) and bit 0 of the FPA_INT_SUM
                                                         register is asserted the FPA will assert an
                                                         interrupt. */
#else
        uint64_t fed0_sbe                : 1;
        uint64_t fed0_dbe                : 1;
        uint64_t fed1_sbe                : 1;
        uint64_t fed1_dbe                : 1;
        uint64_t reserved                : 60;
#endif
    } s;
} cvmx_fpa_int_enb_t;


/**
 * FPA_INT_SUM = FPA's Interrupt Summary Register
 *
 * Contains the diffrent interrupt summary bits of the FPA.
 * - Access using the CVMX_FPA_INT_SUM CSR.
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 60;      /**< Must be zero */
        uint64_t fed1_dbe                : 1;
        uint64_t fed1_sbe                : 1;
        uint64_t fed0_dbe                : 1;
        uint64_t fed0_sbe                : 1;
#else
        uint64_t fed0_sbe                : 1;
        uint64_t fed0_dbe                : 1;
        uint64_t fed1_sbe                : 1;
        uint64_t fed1_dbe                : 1;
        uint64_t reserved                : 60;
#endif
    } s;
} cvmx_fpa_int_sum_t;


/**
 * FPA_QUEx_PAGES_AVAILABLE = FPA's Queue 0-7 Free Page Available Register
 *
 * The number of page pointers that are available in the FPA and local DRAM.
 * - Access using the CVMX_FPA_QUEX_AVAILABLE(0..7) CSR.
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 38;      /**< Must be zero */
        uint64_t que_siz                 : 26;      /**< The number of free pages available in this Queue. */
#else
        uint64_t que_siz                 : 26;
        uint64_t reserved                : 38;
#endif
    } s;
} cvmx_fpa_quex_available_t;


/**
 * FPA_WART_CTL = FPA's WART Control
 *  Control and status for the WART block.
 *
 * - Access using the CVMX_FPA_WART_CTL CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 48;      /**< Reserved */
        uint64_t ctl                     : 16;      /**< Control information. */
#else
        uint64_t ctl                     : 16;
        uint64_t reserved                : 48;
#endif
    } s;
} cvmx_fpa_wart_ctl_t;


/**
 * FPA_WART_STATUS = FPA's WART Status
 *  Control and status for the WART block.
 *
 * - Access using the CVMX_FPA_WART_STATUS CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 32;      /**< Reserved */
        uint64_t status                  : 32;      /**< Status information. */
#else
        uint64_t status                  : 32;
        uint64_t reserved                : 32;
#endif
    } s;
} cvmx_fpa_wart_status_t;


/**
 * GMX_BAD_REG = A collection of things that have gone very, very wrong
 *
 * - Access using the CVMX_GMXX_BAD_REG(0..) CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 33;      /**< Reserved */
        uint64_t inb_nxa                 : 4;       /**< Inbound port > GMX_RX_PRTS */
        uint64_t statovr                 : 1;       /**< TX Statistics overflow */
        uint64_t loststat                : 4;       /**< TX Statistics data was over-written (per RGM port)
                                                         TX Stats are corrupted */
        uint64_t slot_err                : 4;       /**< Inbound port has violated slottime (per RGM port) */
        uint64_t out_ovr                 : 16;      /**< Outbound data FIFO overflow (per port) */
        uint64_t ncb_ovr                 : 1;       /**< Outbound NCB FIFO Overflow */
        uint64_t out_col                 : 1;       /**< Outbound collision occured between PKO and NCB */
#else
        uint64_t out_col                 : 1;
        uint64_t ncb_ovr                 : 1;
        uint64_t out_ovr                 : 16;
        uint64_t slot_err                : 4;
        uint64_t loststat                : 4;
        uint64_t statovr                 : 1;
        uint64_t inb_nxa                 : 4;
        uint64_t reserved                : 33;
#endif
    } s;
} cvmx_gmxx_bad_reg_t;


/**
 * GMX_BIST = GMX BIST Results
 *
 * - Access using the CVMX_GMXX_BIST(0..) CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 54;      /**< Reserved */
        uint64_t status                  : 10;      /**< BIST Results.
                                                         HW sets a bit in BIST for for memory that fails */
#else
        uint64_t status                  : 10;
        uint64_t reserved                : 54;
#endif
    } s;
} cvmx_gmxx_bist_t;


/**
 * GMX_INF_MODE = Interface Mode
 *
 * - Access using the CVMX_GMXX_INF_MODE(0..) CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 62;      /**< Reserved */
        uint64_t en                      : 1;       /**< Interface Enable */
        uint64_t type                    : 1;       /**< Interface Mode
                                                         - 0: RGMII Mode
                                                         - 1: Spi4 Mode */
#else
        uint64_t type                    : 1;
        uint64_t en                      : 1;
        uint64_t reserved                : 62;
#endif
    } s;
} cvmx_gmxx_inf_mode_t;


/**
 * GMX_NXA_ADR = NXA Port Address
 *
 * - Access using the CVMX_GMXX_NXA_ADR(0..) CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 58;      /**< Reserved */
        uint64_t prt                     : 6;       /**< Logged address for NXA exceptions
                                                         The logged address will be from the first
                                                         exception that caused the problem.  NCB has
                                                         higher priority than PKO and will win. */
#else
        uint64_t prt                     : 6;
        uint64_t reserved                : 58;
#endif
    } s;
} cvmx_gmxx_nxa_adr_t;


/**
 * GMX_PRT_CFG = Port description
 *
 * - Access using the CVMX_GMXX_PRTX_CFG(0..3, 0..1) CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 60;      /**< Reserved */
        uint64_t slottime                : 1;       /**< Slot Time for Half-Duplex operation
                                                         - 0 = 512 bitimes (10/100Mbs operation)
                                                         - 1 = 4096 bitimes (1000Mbs operation) */
        uint64_t duplex                  : 1;       /**< Duplex
                                                         - 0 = Half Duplex (collisions/extentions/bursts)
                                                         - 1 = Full Duplex */
        uint64_t speed                   : 1;       /**< Link Speed
                                                         - 0 = 10/100Mbs operation
                                                         - 1 = 1000Mbs operation */
        uint64_t en                      : 1;       /**< Link Enable */
#else
        uint64_t en                      : 1;
        uint64_t speed                   : 1;
        uint64_t duplex                  : 1;
        uint64_t slottime                : 1;
        uint64_t reserved                : 60;
#endif
    } s;
} cvmx_gmxx_prtx_cfg_t;


/**
 * GMX_RX_BP_DROP = FIFO mark for packet drop
 * Note: the actual watermark is dynamic with respect to the GMX_RX_PRTS
 * register (in RGMII mode).  The GMX_RX_PRTS controls the depth of the port's
 * FIFO so as ports are added or removed, the drop point may change.
 *
 * - Access using the CVMX_GMXX_RX_BP_DROPX(0..3, 0..1) CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 58;      /**< Reserved */
        uint64_t mark                    : 6;       /**< Number of 8B ticks to reserve in the RX FIFO.
                                                         When the FIFO exceeds this count, packets will
                                                         be dropped and not buffered.
                                                         MARK should typically be programmed to ports+1.
                                                         Failure to program correctly can lead to system
                                                         instability.
                                                         - Default RGMII = 2
                                                         - Default Spi4  = 17 */
#else
        uint64_t mark                    : 6;
        uint64_t reserved                : 58;
#endif
    } s;
} cvmx_gmxx_rx_bp_dropx_t;


/**
 * GMX_RX_BP_OFF = Lowater mark for packet drop
 *
 * - Access using the CVMX_GMXX_RX_BP_OFFX(0..3, 0..1) CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 58;      /**< Reserved */
        uint64_t mark                    : 6;       /**< Water mark (8B ticks) to deassert backpressure */
#else
        uint64_t mark                    : 6;
        uint64_t reserved                : 58;
#endif
    } s;
} cvmx_gmxx_rx_bp_offx_t;


/**
 * GMX_RX_BP_ON = Hiwater mark for port/interface backpressure
 *
 * - Access using the CVMX_GMXX_RX_BP_ONX(0..3, 0..1) CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 55;      /**< Reserved */
        uint64_t mark                    : 9;       /**< Hiwater mark (8B ticks) for backpressure.
                                                         In RGMII mode, the backpressure is given per
                                                         port.  In Spi4 mode, the backpressure is for the
                                                         entire interface.  GMX_RX_BP_ON must satisfy
                                                         BP_OFF <= BP_ON < BP_DROP
                                                         The default value is half the FIFO.
                                                         - Default RGMII = 0x40  (512bytes)
                                                         - Default Spi4  = 0x100 (2048bytes)
                                                         A value of zero will immediately assert back
                                                         pressure. */
#else
        uint64_t mark                    : 9;
        uint64_t reserved                : 55;
#endif
    } s;
} cvmx_gmxx_rx_bp_onx_t;


/**
 * GMX_RX_LOOP = Lineside Loopback Mode
 *
 * - Access using the CVMX_GMXX_RX_LOOP(0..) CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 60;      /**< Reserved */
        uint64_t loop                    : 4;       /**< Which ports redirect the RX FIFO into the TX FIFO */
#else
        uint64_t loop                    : 4;
        uint64_t reserved                : 60;
#endif
    } s;
} cvmx_gmxx_rx_loop_t;


/**
 * GMX_RX_PASS_EN = Packet pass through mode enable
 *  When both Octeon ports are running in Spi4 mode, packets can be directly
 *  passed from one SPX interface to the other without being processed by the
 *  core or PP's.  The register has one bit for each port to enable the pass
 *  through feature.
 * Notes:
 * (1) Can only be used in dual Spi4 configs
 * (2) The mapped pass through output port cannot be the destination port for
 *     any Octeon core traffic.
 *
 * - Access using the CVMX_GMXX_RX_PASS_EN(0..) CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 48;      /**< Reserved */
        uint64_t en                      : 16;      /**< Which ports to configure in pass through mode */
#else
        uint64_t en                      : 16;
        uint64_t reserved                : 48;
#endif
    } s;
} cvmx_gmxx_rx_pass_en_t;


/**
 * GMX_RX_PASS_MAP = Packet pass through port map
 *
 * - Access using the CVMX_GMXX_RX_PASS_MAPX(0..15, 0..1) CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 60;      /**< Reserved */
        uint64_t dprt                    : 4;       /**< Destination port to map Spi pass through traffic */
#else
        uint64_t dprt                    : 4;
        uint64_t reserved                : 60;
#endif
    } s;
} cvmx_gmxx_rx_pass_mapx_t;


/**
 * GMX_RX_PRTS = Number of FIFOs to carve the RX buffer into
 * Note: Unlike GMX_TX_PRTS, GMX_RX_PRTS will always power on to 4 ports.  It
 * is unused in Spi mode since the RX buffer is always unified.
 *
 * - Access using the CVMX_GMXX_RX_PRTS(0..) CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 61;      /**< Reserved */
        uint64_t prts                    : 3;       /**< In RGMII mode, the RX buffer can be carved into
                                                         several logical buffers depending on the number
                                                         or implemented ports.
                                                         - 0 or 1 port  = 512ticks / 4096bytes
                                                         - 2 ports      = 256ticks / 2048bytes
                                                         - 3 or 4 ports = 128ticks / 1024bytes */
#else
        uint64_t prts                    : 3;
        uint64_t reserved                : 61;
#endif
    } s;
} cvmx_gmxx_rx_prts_t;


/**
 * GMX_RX_ADR_CAM = Address Filtering Control
 *
 * - Access using the CVMX_GMXX_RXX_ADR_CAM0(0..3, 0..1) CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t adr                     : 64;      /**< The DMAC address to match on
                                                         Each entry contributes 8bits to one of 8 matchers
                                                         The GMX_RX_ADR_CAM cannot be accessed when
                                                         GMX_PRT_CFG[EN] is enabled.
                                                         The CAM matches against unicst or multicst DMAC
                                                         addresses. */
#else
        uint64_t adr                     : 64;
#endif
    } s;
} cvmx_gmxx_rxx_adr_cam0_t;


/**
 * GMX_RX_ADR_CAM = Address Filtering Control
 *
 * - Access using the CVMX_GMXX_RXX_ADR_CAM1(0..3, 0..1) CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t adr                     : 64;      /**< The DMAC address to match on
                                                         Each entry contributes 8bits to one of 8 matchers
                                                         The GMX_RX_ADR_CAM cannot be accessed when
                                                         GMX_PRT_CFG[EN] is enabled.
                                                         The CAM matches against unicst or multicst DMAC
                                                         addresses. */
#else
        uint64_t adr                     : 64;
#endif
    } s;
} cvmx_gmxx_rxx_adr_cam1_t;


/**
 * GMX_RX_ADR_CAM = Address Filtering Control
 *
 * - Access using the CVMX_GMXX_RXX_ADR_CAM2(0..3, 0..1) CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t adr                     : 64;      /**< The DMAC address to match on
                                                         Each entry contributes 8bits to one of 8 matchers
                                                         The GMX_RX_ADR_CAM cannot be accessed when
                                                         GMX_PRT_CFG[EN] is enabled.
                                                         The CAM matches against unicst or multicst DMAC
                                                         addresses. */
#else
        uint64_t adr                     : 64;
#endif
    } s;
} cvmx_gmxx_rxx_adr_cam2_t;


/**
 * GMX_RX_ADR_CAM = Address Filtering Control
 *
 * - Access using the CVMX_GMXX_RXX_ADR_CAM3(0..3, 0..1) CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t adr                     : 64;      /**< The DMAC address to match on
                                                         Each entry contributes 8bits to one of 8 matchers
                                                         The GMX_RX_ADR_CAM cannot be accessed when
                                                         GMX_PRT_CFG[EN] is enabled.
                                                         The CAM matches against unicst or multicst DMAC
                                                         addresses. */
#else
        uint64_t adr                     : 64;
#endif
    } s;
} cvmx_gmxx_rxx_adr_cam3_t;


/**
 * GMX_RX_ADR_CAM = Address Filtering Control
 *
 * - Access using the CVMX_GMXX_RXX_ADR_CAM4(0..3, 0..1) CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t adr                     : 64;      /**< The DMAC address to match on
                                                         Each entry contributes 8bits to one of 8 matchers
                                                         The GMX_RX_ADR_CAM cannot be accessed when
                                                         GMX_PRT_CFG[EN] is enabled.
                                                         The CAM matches against unicst or multicst DMAC
                                                         addresses. */
#else
        uint64_t adr                     : 64;
#endif
    } s;
} cvmx_gmxx_rxx_adr_cam4_t;


/**
 * GMX_RX_ADR_CAM = Address Filtering Control
 *
 * - Access using the CVMX_GMXX_RXX_ADR_CAM5(0..3, 0..1) CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t adr                     : 64;      /**< The DMAC address to match on
                                                         Each entry contributes 8bits to one of 8 matchers
                                                         The GMX_RX_ADR_CAM cannot be accessed when
                                                         GMX_PRT_CFG[EN] is enabled.
                                                         The CAM matches against unicst or multicst DMAC
                                                         addresses. */
#else
        uint64_t adr                     : 64;
#endif
    } s;
} cvmx_gmxx_rxx_adr_cam5_t;


/**
 * GMX_RX_ADR_CAM_EN = Address Filtering Control Enable
 *
 * - Access using the CVMX_GMXX_RXX_ADR_CAM_EN(0..3, 0..1) CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 56;      /**< Reserved */
        uint64_t en                      : 8;       /**< CAM Entry Enables */
#else
        uint64_t en                      : 8;
        uint64_t reserved                : 56;
#endif
    } s;
} cvmx_gmxx_rxx_adr_cam_en_t;


/**
 * GMX_RX_ADR_CTL = Address Filtering Control
 *
 * Here is some pseudo code that represents the address filter behavior.
 * @code
 *      bool dmac_addr_filter(uint48 dmac) [
 *        if (is_bcst(dmac))                               <- broadcast accept
 *          return (GMX_RX_ADR_CTL[BCST] ? ACCEPT : REJECT);
 *        if (is_mcst(dmac) & GMX_RX_ADR_CTL[MCST] == 1)   <- multicast reject
 *          return REJECT;
 *        if (is_mcst(dmac) & GMX_RX_ADR_CTL[MCST] == 2)   <- multicast accept
 *          return ACCEPT;
 *        cam_en  = 0;
 *        cam_hit = 0;
 *        for (i=0; i<8; i++) [
 *          if (GMX_RX_ADR_CAM[i][EN] == 0)
 *            continue;
 *          cam_en++;
 *          if (GMX_RX_ADR_CAM[i][ADR] == dmac) [
 *            cam_hit = 1;
 *            break;
 *          ]
 *        ]
 *        if (cam_en==0)
 *          return (ACCEPT);
 *        else if (cam_hit)
 *          return (GMX_RX_ADR_CTL[CAM_MODE] ? ACCEPT : REJECT);
 *        else
 *          return (GMX_RX_ADR_CTL[CAM_MODE] ? REJECT : ACCEPT);
 *      ]
 * @endcode
 *
 * - Access using the CVMX_GMXX_RXX_ADR_CTL(0..3, 0..1) CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 60;      /**< Reserved */
        uint64_t cam_mode                : 1;       /**< Allow or deny DMAC address filter
                                                         - 0 = reject the packet on DMAC address match
                                                         - 1 = accept the packet on DMAC address match */
        uint64_t mcst                    : 2;       /**< Multicast Mode
                                                         - 0 = Use the Address Filter CAM
                                                         - 1 = Force reject all multicast packets
                                                         - 2 = Force accept all multicast packets
                                                         - 3 = Reserved */
        uint64_t bcst                    : 1;       /**< Accept All Broadcast Packets */
#else
        uint64_t bcst                    : 1;
        uint64_t mcst                    : 2;
        uint64_t cam_mode                : 1;
        uint64_t reserved                : 60;
#endif
    } s;
} cvmx_gmxx_rxx_adr_ctl_t;


/**
 * GMX_RX_DECISION = The byte count to decide when to accept or filter a packet
 * As each byte in a packet is received by GMX, the L2 byte count is compared
 * against the GMX_RX_DECISION[CNT].  The L2 byte count is the number of bytes
 * from the beginning of the L2 header (DMAC).  In normal operation, the L2
 * header begins after the PREAMBLE+SFD (GMX_RX_FRM_CTL[PRE_CHK]=1) and any
 * optional UDD skip data (GMX_RX_UDD_SKP[LEN]).
 * When GMX_RX_FRM_CTL[PRE_CHK] is clear, PREAMBLE+SFD are prepended to the
 * packet and would require UDD skip length to account for them.
 * Packets are only filtered in RGMII mode.  The GMX_RX_DECISION is not used in
 * Spi4 mode.
 * @verbatim
 *                                                 L2 Size
 * Port Mode             <GMX_RX_DECISION bytes (default=24)       >=GMX_RX_DECISION bytes (default=24)
 * RGMII/Full Duplex     accept packet                             apply filters
 *                       no filtering is applied                   accept packet based on DMAC and PAUSE packet filters
 * RGMII/Half Duplex     drop packet                               apply filters
 *                       packet is unconditionally dropped         accept packet based on DMAC
 * Spi4                  no filtering                              no filtering
 *                       Spi4 packets are never filtered           Spi4 packets are never filtered
 * where l2_size = MAX(0, total_packet_size - GMX_RX_UDD_SKP[LEN] - ((GMX_RX_FRM_CTL[PRE_CHK]==1)*8)
 * @endverbatim
 * - Access using the CVMX_GMXX_RXX_DECISION(0..3, 0..1) CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 59;      /**< Reserved */
        uint64_t cnt                     : 5;       /**< The byte count to decide when to accept or filter
                                                         a packet. */
#else
        uint64_t cnt                     : 5;
        uint64_t reserved                : 59;
#endif
    } s;
} cvmx_gmxx_rxx_decision_t;


/**
 * GMX_RX_FRM_CHK = Which frame errors will set the ERR bit of the frame
 * If GMX_RX_UDD_SKP[LEN] != 0, then LENERR must be 0
 *
 * - Access using the CVMX_GMXX_RXX_FRM_CHK(0..3, 0..1) CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 54;      /**< Reserved */
        uint64_t niberr                  : 1;       /**< Nibble error (hi_nibble != lo_nibble) */
        uint64_t skperr                  : 1;       /**< Skipper error */
        uint64_t rcverr                  : 1;       /**< Frame was received with RMGII Data reception error */
        uint64_t lenerr                  : 1;       /**< Frame was received with length error */
        uint64_t alnerr                  : 1;       /**< Frame was received with an alignment error */
        uint64_t fcserr                  : 1;       /**< Frame was received with FCS/CRC error */
        uint64_t jabber                  : 1;       /**< Frame was received with length > sys_length */
        uint64_t maxerr                  : 1;       /**< Frame was received with length > max_length */
        uint64_t carext                  : 1;       /**< RGMII carrier extend error */
        uint64_t minerr                  : 1;       /**< Frame was received with length < min_length */
#else
        uint64_t minerr                  : 1;
        uint64_t carext                  : 1;
        uint64_t maxerr                  : 1;
        uint64_t jabber                  : 1;
        uint64_t fcserr                  : 1;
        uint64_t alnerr                  : 1;
        uint64_t lenerr                  : 1;
        uint64_t rcverr                  : 1;
        uint64_t skperr                  : 1;
        uint64_t niberr                  : 1;
        uint64_t reserved                : 54;
#endif
    } s;
} cvmx_gmxx_rxx_frm_chk_t;


/**
 * GMX_RX_FRM_CTL = Frame Control
 *
 *  PRE_CHK
 *
 *   When set, the RGMII state expects a typical frame consisting of
 *   INTER_FRAME=>PREAMBLE(x7)=>SFD(x1)=>DAT.  The state machine watches for
 *   this exact sequence in order to recognize a valid frame and push frame
 *   data into the Octeon.  There must be exactly 7 PREAMBLE cycles followed by
 *   the single SFD cycle for the frame to be accepted.
 *   When a problem does occur within the PREAMBLE seqeunce, the frame is
 *   marked as bad and not sent into the core.  The GMX_RX_INT_REG[PCTERR]
 *   interrupt is also raised.
 *
 *  PRE_STRP
 *
 *   When PRE_CFG is set (indicating that the PREAMBLE will be sent), PRE_STRP
 *   determines if the PREAMBLE+SFD bytes are thrown away or sent to the Octeon
 *   core as part of the packet.
 *   In either mode, the PREAMBLE+SFD bytes are not counted toward the packet
 *   size when checking against the MIN and MAX bounds.  Furthermore, the bytes
 *   are skipped when locating the start of the L2 header for DMAC and Control
 *   frame recognition.
 *
 * - Access using the CVMX_GMXX_RXX_FRM_CTL(0..3, 0..1) CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 58;      /**< Reserved */
        uint64_t ctl_smac                : 1;       /**< Control Pause Frames can match station SMAC */
        uint64_t ctl_mcst                : 1;       /**< Control Pause Frames can match globally assign
                                                         Multicast address */
        uint64_t ctl_bck                 : 1;       /**< Forward pause information to TX block */
        uint64_t ctl_drp                 : 1;       /**< Drop Control Pause Frames */
        uint64_t pre_strp                : 1;       /**< Strip off the preamble (when present)
                                                         - 0=PREAMBLE+SFD is sent to core as part of frame
                                                         - 1=PREAMBLE+SFD is dropped */
        uint64_t pre_chk                 : 1;       /**< This port is configured to send PREAMBLE+SFD
                                                         to begin every frame.  GMX checks that the
                                                         PREAMBLE is sent correctly */
#else
        uint64_t pre_chk                 : 1;
        uint64_t pre_strp                : 1;
        uint64_t ctl_drp                 : 1;
        uint64_t ctl_bck                 : 1;
        uint64_t ctl_mcst                : 1;
        uint64_t ctl_smac                : 1;
        uint64_t reserved                : 58;
#endif
    } s;
} cvmx_gmxx_rxx_frm_ctl_t;


/**
 * GMX_RX_FRM_MAX = Frame Max length
 *
 * - Access using the CVMX_GMXX_RXX_FRM_MAX(0..3, 0..1) CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 48;      /**< Reserved */
        uint64_t len                     : 16;      /**< Max-sized frame to forward (else marked with ERR) */
#else
        uint64_t len                     : 16;
        uint64_t reserved                : 48;
#endif
    } s;
} cvmx_gmxx_rxx_frm_max_t;


/**
 * GMX_RX_FRM_MIN = Frame Min length
 *
 * - Access using the CVMX_GMXX_RXX_FRM_MIN(0..3, 0..1) CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 48;      /**< Reserved */
        uint64_t len                     : 16;      /**< Min-sized frame to forward (else dropped as col) */
#else
        uint64_t len                     : 16;
        uint64_t reserved                : 48;
#endif
    } s;
} cvmx_gmxx_rxx_frm_min_t;


/**
 * GMX_RX_IFG = RX Min IFG Cycles
 *
 * - Access using the CVMX_GMXX_RXX_IFG(0..3, 0..1) CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 60;      /**< Reserved */
        uint64_t ifg                     : 4;       /**< Min IFG between packets
                                                         - 10/100Mbs: 24
                                                         - 1000bs: 12 */
#else
        uint64_t ifg                     : 4;
        uint64_t reserved                : 60;
#endif
    } s;
} cvmx_gmxx_rxx_ifg_t;


/**
 * GMX_RX_INT_EN = Interrupt Enable
 *
 * - Access using the CVMX_GMXX_RXX_INT_EN(0..3, 0..1) CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 45;      /**< Reserved */
        uint64_t phy_dupx                : 1;       /**< Change in the RMGII inbound LinkDuplex */
        uint64_t phy_spd                 : 1;       /**< Change in the RMGII inbound LinkSpeed */
        uint64_t phy_link                : 1;       /**< Change in the RMGII inbound LinkStatus */
        uint64_t ifgerr                  : 1;       /**< Interframe Gap Violation */
        uint64_t coldet                  : 1;       /**< Collision Detection */
        uint64_t falerr                  : 1;       /**< False carrier error */
        uint64_t rsverr                  : 1;       /**< RGMII reserved opcodes */
        uint64_t pcterr                  : 1;       /**< Bad Preamble / Protocol */
        uint64_t ovrerr                  : 1;       /**< RX FIFO Overflow */
        uint64_t niberr                  : 1;       /**< Nibble error (hi_nibble != lo_nibble) */
        uint64_t skperr                  : 1;       /**< Skipper error */
        uint64_t rcverr                  : 1;       /**< Frame was received with RMGII Data reception error */
        uint64_t lenerr                  : 1;       /**< Frame was received with length error */
        uint64_t alnerr                  : 1;       /**< Frame was received with an alignment error */
        uint64_t fcserr                  : 1;       /**< Frame was received with FCS/CRC error */
        uint64_t jabber                  : 1;       /**< Frame was received with length > sys_length */
        uint64_t maxerr                  : 1;       /**< Frame was received with length > max_length */
        uint64_t carext                  : 1;       /**< RGMII carrier extend error */
        uint64_t minerr                  : 1;       /**< Frame was received with length < min_length */
#else
        uint64_t minerr                  : 1;
        uint64_t carext                  : 1;
        uint64_t maxerr                  : 1;
        uint64_t jabber                  : 1;
        uint64_t fcserr                  : 1;
        uint64_t alnerr                  : 1;
        uint64_t lenerr                  : 1;
        uint64_t rcverr                  : 1;
        uint64_t skperr                  : 1;
        uint64_t niberr                  : 1;
        uint64_t ovrerr                  : 1;
        uint64_t pcterr                  : 1;
        uint64_t rsverr                  : 1;
        uint64_t falerr                  : 1;
        uint64_t coldet                  : 1;
        uint64_t ifgerr                  : 1;
        uint64_t phy_link                : 1;
        uint64_t phy_spd                 : 1;
        uint64_t phy_dupx                : 1;
        uint64_t reserved                : 45;
#endif
    } s;
} cvmx_gmxx_rxx_int_en_t;


/**
 * GMX_RX_INT_REG = Interrupt Register
 *
 * Notes:
 * -# exceptions will only be raised to the control processor if the
 *     cooresponding bit in the GMX_RX_INT_EN register is set.
 * -# exception conditions 10:0 can also set the rcv/opcode in the received
 *     packet's workQ entry.  The GMX_RX_FRM_CHK register provides a bit mask
 *     for configuring which conditions set the error.
 * -# in half duplex operation, the expectation is that collisions will appear
 *     as either MINERR o r CAREXT errors.
 * -# JABBER - An RX Jabber error indicates that a packet was received which
 *              is longer than the maximum allowed packet as defined by the
 *              system.  GMX will truncate the packet at the JABBER count.
 *              Failure to do so could lead to system instabilty.
 * -# NIBERR - This error is illegal at 1000Mbs speeds
 *              (GMX_RX_PRT_CFG[SPEED]==0) and will never assert.
 * -# MAXERR - for untagged frames, the total frame DA+SA+TL+DATA+PAD+FCS >
 *              GMX_RX_FRM_MAX.  For tagged frames, DA+SA+VLAN+TL+DATA+PAD+FCS
 *              > GMX_RX_FRM_MAX + 4.
 * -# MINERR - total frame DA+SA+TL+DATA+PAD+FCS < GMX_RX_FRM_MIN.
 * -# ALNERR - Indicates that the packet received was not an integer number of
 *              bytes.  If FCS checking is enabled, ALNERR will only assert if
 *              the FCS is bad.  If FCS checking is disabled, ALNERR will
 *              assert in all non-integer frame cases.
 * -# Collisions - Collisions can only occur in half-duplex mode.  A collision
 *                  is assumed by the receiver when one of the following
 *                  conditions occur...
 *                  . frame < GMX_RX_FRM_MIN - MINERR
 *                  . carrier extend error   - CAREXT
 *                  . transfer ended before slottime (only 1000Mbs - in cases where SLOTTIME > GMX_RX_FRM_MIN) - COLDET
 * -# LENERR - Length errors occur when the received packet does not match the
 *              length field.  LENERR is only checked for packets between 64
 *              and 1500 bytes.  For untagged frames, the length must exact
 *              match.  For tagged frames the length or length+4 must match.
 * -# PCTERR - checks that the frame transtions from PREAMBLE=>SFD=>DATA.
 *              Does not check the number of PREAMBLE cycles.
 *
 * - Access using the CVMX_GMXX_RXX_INT_REG(0..3, 0..1) CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 45;      /**< Reserved */
        uint64_t phy_dupx                : 1;       /**< Change in the RMGII inbound LinkDuplex */
        uint64_t phy_spd                 : 1;       /**< Change in the RMGII inbound LinkSpeed */
        uint64_t phy_link                : 1;       /**< Change in the RMGII inbound LinkStatus */
        uint64_t ifgerr                  : 1;       /**< Interframe Gap Violation */
        uint64_t coldet                  : 1;       /**< Collision Detection */
        uint64_t falerr                  : 1;       /**< False carrier error */
        uint64_t rsverr                  : 1;       /**< RGMII reserved opcodes */
        uint64_t pcterr                  : 1;       /**< Bad Preamble / Protocol */
        uint64_t ovrerr                  : 1;       /**< RX FIFO Overflow */
        uint64_t niberr                  : 1;       /**< Nibble error (hi_nibble != lo_nibble) */
        uint64_t skperr                  : 1;       /**< Skipper error */
        uint64_t rcverr                  : 1;       /**< Frame was received with RMGII Data reception error */
        uint64_t lenerr                  : 1;       /**< Frame was received with length error */
        uint64_t alnerr                  : 1;       /**< Frame was received with an alignment error */
        uint64_t fcserr                  : 1;       /**< Frame was received with FCS/CRC error */
        uint64_t jabber                  : 1;       /**< Frame was received with length > sys_length */
        uint64_t maxerr                  : 1;       /**< Frame was received with length > max_length */
        uint64_t carext                  : 1;       /**< RGMII carrier extend error */
        uint64_t minerr                  : 1;       /**< Frame was received with length < min_length */
#else
        uint64_t minerr                  : 1;
        uint64_t carext                  : 1;
        uint64_t maxerr                  : 1;
        uint64_t jabber                  : 1;
        uint64_t fcserr                  : 1;
        uint64_t alnerr                  : 1;
        uint64_t lenerr                  : 1;
        uint64_t rcverr                  : 1;
        uint64_t skperr                  : 1;
        uint64_t niberr                  : 1;
        uint64_t ovrerr                  : 1;
        uint64_t pcterr                  : 1;
        uint64_t rsverr                  : 1;
        uint64_t falerr                  : 1;
        uint64_t coldet                  : 1;
        uint64_t ifgerr                  : 1;
        uint64_t phy_link                : 1;
        uint64_t phy_spd                 : 1;
        uint64_t phy_dupx                : 1;
        uint64_t reserved                : 45;
#endif
    } s;
} cvmx_gmxx_rxx_int_reg_t;


/**
 * GMX_RX_JABBER = The max size packet after which GMX will truncate
 *
 * - Access using the CVMX_GMXX_RXX_JABBER(0..3, 0..1) CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 48;      /**< Reserved */
        uint64_t cnt                     : 16;      /**< Max sized packet */
#else
        uint64_t cnt                     : 16;
        uint64_t reserved                : 48;
#endif
    } s;
} cvmx_gmxx_rxx_jabber_t;


/**
 * GMX_RX_INBND = RGMII InBand Link Status
 *
 * - Access using the CVMX_GMXX_RXX_RX_INBND(0..3, 0..1) CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 60;      /**< Reserved */
        uint64_t duplex                  : 1;       /**< RGMII Inbound LinkDuplex
                                                         - 0=half-duplex
                                                         - 1=full-duplex */
        uint64_t speed                   : 2;       /**< RGMII Inbound LinkSpeed
                                                         - 00=2.5MHz
                                                         - 01=25MHz
                                                         - 10=125MHz
                                                         - 11=Reserved */
        uint64_t status                  : 1;       /**< RGMII Inbound LinkStatus
                                                         - 0=down
                                                         - 1=up */
#else
        uint64_t status                  : 1;
        uint64_t speed                   : 2;
        uint64_t duplex                  : 1;
        uint64_t reserved                : 60;
#endif
    } s;
} cvmx_gmxx_rxx_rx_inbnd_t;


/**
 * GMX_RX_STATS_CTL = RX Stats Control register
 *
 * - Access using the CVMX_GMXX_RXX_STATS_CTL(0..3, 0..1) CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 63;      /**< Reserved */
        uint64_t rd_clr                  : 1;       /**< Stats registers will clear on reads */
#else
        uint64_t rd_clr                  : 1;
        uint64_t reserved                : 63;
#endif
    } s;
} cvmx_gmxx_rxx_stats_ctl_t;


/**
 * - Access using the CVMX_GMXX_RXX_STATS_OCTS_CTL(0..3, 0..1) CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 16;      /**< Reserved */
        uint64_t cnt                     : 48;      /**< Octet count of received pause packets */
#else
        uint64_t cnt                     : 48;
        uint64_t reserved                : 16;
#endif
    } s;
} cvmx_gmxx_rxx_stats_octs_ctl_t;


/**
 * - Access using the CVMX_GMXX_RXX_STATS_OCTS_DMAC(0..3, 0..1) CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 16;      /**< Reserved */
        uint64_t cnt                     : 48;      /**< Octet count of filtered dmac packets */
#else
        uint64_t cnt                     : 48;
        uint64_t reserved                : 16;
#endif
    } s;
} cvmx_gmxx_rxx_stats_octs_dmac_t;


/**
 * - Access using the CVMX_GMXX_RXX_STATS_OCTS_DRP(0..3, 0..1) CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 16;      /**< Reserved */
        uint64_t cnt                     : 48;      /**< Octet count of dropped packets */
#else
        uint64_t cnt                     : 48;
        uint64_t reserved                : 16;
#endif
    } s;
} cvmx_gmxx_rxx_stats_octs_drp_t;


/**
 * - Access using the CVMX_GMXX_RXX_STATS_OCTS(0..3, 0..1) CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 16;      /**< Reserved */
        uint64_t cnt                     : 48;      /**< Octet count of received good packets */
#else
        uint64_t cnt                     : 48;
        uint64_t reserved                : 16;
#endif
    } s;
} cvmx_gmxx_rxx_stats_octs_t;


/**
 * GMX_RX_STATS_PKTS_BAD
 *  Count of all packets received with some error that were not dropped
 *  either due to the dmac filter or lack of room in the receive FIFO.
 *
 * - Access using the CVMX_GMXX_RXX_STATS_PKTS_BAD(0..3, 0..1) CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 32;      /**< Reserved */
        uint64_t cnt                     : 32;      /**< Count of bad packets */
#else
        uint64_t cnt                     : 32;
        uint64_t reserved                : 32;
#endif
    } s;
} cvmx_gmxx_rxx_stats_pkts_bad_t;


/**
 * GMX_RX_STATS_PKTS_CTL
 *  Count of all packets received that were recognized as Flow Control or
 *  PAUSE packets.  PAUSE packets with any kind of error are counted in
 *  GMX_RX_STATS_PKTS_BAD.  Pause packets can be optionally dropped or
 *  forwarded based on the GMX_RX_FRM_CTL[CTL_DRP] bit.  This count
 *  increments regardless of whether the packet is dropped.  Pause packets
 *  will never be counted in GMX_RX_STATS_PKTS.  Packets dropped due the dmac
 *  filter will be counted in GMX_RX_STATS_PKTS_DMAC and not here.
 *
 * - Access using the CVMX_GMXX_RXX_STATS_PKTS_CTL(0..3, 0..1) CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 32;      /**< Reserved */
        uint64_t cnt                     : 32;      /**< Count of received pause packets */
#else
        uint64_t cnt                     : 32;
        uint64_t reserved                : 32;
#endif
    } s;
} cvmx_gmxx_rxx_stats_pkts_ctl_t;


/**
 * GMX_RX_STATS_PKTS_DMAC
 *  Count of all packets received that were dropped by the dmac filter.
 *  Packets that match the DMAC will be dropped and counted here regardless
 *  of if they were bad packets.  These packets will never be counted in
 *  GMX_RX_STATS_PKTS.
 *
 * - Access using the CVMX_GMXX_RXX_STATS_PKTS_DMAC(0..3, 0..1) CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 32;      /**< Reserved */
        uint64_t cnt                     : 32;      /**< Count of filtered dmac packets */
#else
        uint64_t cnt                     : 32;
        uint64_t reserved                : 32;
#endif
    } s;
} cvmx_gmxx_rxx_stats_pkts_dmac_t;


/**
 * GMX_RX_STATS_PKTS_DRP
 *  Count of all packets received that were dropped due to a full receive
 *  FIFO.  This counts good and bad packets received - all packets dropped by
 *  the FIFO.  It does not count packets dropped by the dmac or pause packet
 *  filters.
 *
 * - Access using the CVMX_GMXX_RXX_STATS_PKTS_DRP(0..3, 0..1) CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 32;      /**< Reserved */
        uint64_t cnt                     : 32;      /**< Count of dropped packets */
#else
        uint64_t cnt                     : 32;
        uint64_t reserved                : 32;
#endif
    } s;
} cvmx_gmxx_rxx_stats_pkts_drp_t;


/**
 * GMX_RX_STATS_PKTS
 *  Count of good received packets - packets that are not recognized as PAUSE
 *  packets, dropped due the DMAC filter, dropped due FIFO full status, or
 *  have any other OPCODE (FCS, Length, etc).
 *
 * - Access using the CVMX_GMXX_RXX_STATS_PKTS(0..3, 0..1) CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 32;      /**< Reserved */
        uint64_t cnt                     : 32;      /**< Count of received good packets */
#else
        uint64_t cnt                     : 32;
        uint64_t reserved                : 32;
#endif
    } s;
} cvmx_gmxx_rxx_stats_pkts_t;


/**
 * GMX_RX_UDD_SKP = Amount of User-defined data before the start of the L2 data
 *
 * Notes:
 *
 * -# The skip bytes are part of the packet and will be sent down the NCB
 *     packet interface and will be handled by PKI.
 * -# The system can determine if the UDD bytes are included in the FCS check
 *     by using the FCSSEL field - if the FCS check is enabled.
 * -# Assume that the preamble/sfd is always at the start of the frame - even
 *     before UDD bytes.  In most cases, there will be no preamble in these
 *     cases since it will be RGMII to RGMII communication without a PHY
 *     involved.
 * -# We can still do address filtering and control packet filtering is the
 *     user desires.
 * -# UDD_SKP must be 0 in half-duplex operation unless
 *     GMX_RX_FRM_CTL[PRE_CHK] is clear.  If GMX_RX_FRM_CTL[PRE_CHK] is set,
 *     then UDD_SKP will normally be 8.
 * -# In all cases, the UDD bytes will be sent down the packet interface as
 *     part of the packet.  The UDD bytes are never stripped from the actual
 *     packet.
 * -# If LEN != 0, then GMX_RX_FRM_CHK[LENERR] must be 0
 *
 * - Access using the CVMX_GMXX_RXX_UDD_SKP(0..3, 0..1) CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved1               : 55;      /**< Reserved */
        uint64_t fcssel                  : 1;       /**< Include the skip bytes in the FCS calculation
                                                         - 0 = all skip bytes are included in FCS
                                                         - 1 = the skip bytes are not included in FCS */
        uint64_t reserved0               : 1;       /**< Reserved */
        uint64_t len                     : 7;       /**< Amount of User-defined data before the start of
                                                         the L2 data.  Zero means L2 comes first.
                                                         Max value is 64. */
#else
        uint64_t len                     : 7;
        uint64_t reserved0               : 1;
        uint64_t fcssel                  : 1;
        uint64_t reserved1               : 55;
#endif
    } s;
} cvmx_gmxx_rxx_udd_skp_t;


/**
 * GMX_SMAC = RGMII SMAC
 *
 * - Access using the CVMX_GMXX_SMACX(0..3, 0..1) CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 16;      /**< Reserved */
        uint64_t smac                    : 48;      /**< The SMAC field is used for generating and
                                                         accepting Control Pause packets */
#else
        uint64_t smac                    : 48;
        uint64_t reserved                : 16;
#endif
    } s;
} cvmx_gmxx_smacx_t;


/**
 * GMX_STAT_BP = Number of cycles that the TX/Stats block has help up operation
 *
 * - Access using the CVMX_GMXX_STAT_BP(0..) CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 47;      /**< Reserved */
        uint64_t bp                      : 1;       /**< Current BP state */
        uint64_t cnt                     : 16;      /**< Number of cycles that BP has been asserted
                                                         Saturating counter */
#else
        uint64_t cnt                     : 16;
        uint64_t bp                      : 1;
        uint64_t reserved                : 47;
#endif
    } s;
} cvmx_gmxx_stat_bp_t;


/**
 * GMX_TX_BP = RGMII TX BackPressure Register
 *
 * - Access using the CVMX_GMXX_TX_BP(0..) CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 60;      /**< Reserved */
        uint64_t bp                      : 4;       /**< Per port BackPressure status
                                                         0=Port is available
                                                         1=Port should be back pressured */
#else
        uint64_t bp                      : 4;
        uint64_t reserved                : 60;
#endif
    } s;
} cvmx_gmxx_tx_bp_t;


/**
 * GMX_TX_COL_ATTEMPT = RGMII TX collision attempts before dropping frame
 *
 * - Access using the CVMX_GMXX_TX_COL_ATTEMPT(0..) CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 59;      /**< Reserved */
        uint64_t limit                   : 5;       /**< Collision Attempts */
#else
        uint64_t limit                   : 5;
        uint64_t reserved                : 59;
#endif
    } s;
} cvmx_gmxx_tx_col_attempt_t;


/**
 * GMX_TX_CORRUPT = TX - Corrupt TX packets with the ERR bit set
 *
 * - Access using the CVMX_GMXX_TX_CORRUPT(0..) CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 60;      /**< Reserved */
        uint64_t corrupt                 : 4;       /**< Per port error propagation
                                                         - 0=Never corrupt packets
                                                         - 1=Corrupt packets with ERR */
#else
        uint64_t corrupt                 : 4;
        uint64_t reserved                : 60;
#endif
    } s;
} cvmx_gmxx_tx_corrupt_t;


/**
 * GMX_TX_IFG = RGMII TX Interframe Gap
 *
 * - Access using the CVMX_GMXX_TX_IFG(0..) CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 56;      /**< Reserved */
        uint64_t ifg2                    : 4;       /**< 1/3 of the interframe gap timing */
        uint64_t ifg1                    : 4;       /**< 2/3 of the interframe gap timing */
#else
        uint64_t ifg1                    : 4;
        uint64_t ifg2                    : 4;
        uint64_t reserved                : 56;
#endif
    } s;
} cvmx_gmxx_tx_ifg_t;


/**
 * GMX_TX_INT_EN = Interrupt Enable
 *
 * - Access using the CVMX_GMXX_TX_INT_EN(0..) CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 58;      /**< Reserved */
        uint64_t undflw                  : 4;       /**< TX Underflow (RGMII mode only) */
        uint64_t ncb_nxa                 : 1;       /**< Port address out-of-range from NCB Interface */
        uint64_t pko_nxa                 : 1;       /**< Port address out-of-range from PKO Interface */
#else
        uint64_t pko_nxa                 : 1;
        uint64_t ncb_nxa                 : 1;
        uint64_t undflw                  : 4;
        uint64_t reserved                : 58;
#endif
    } s;
} cvmx_gmxx_tx_int_en_t;


/**
 * GMX_TX_INT_REG = Interrupt Register
 *
 * - Access using the CVMX_GMXX_TX_INT_REG(0..) CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 58;      /**< Reserved */
        uint64_t undflw                  : 4;       /**< TX Underflow (RGMII mode only) */
        uint64_t ncb_nxa                 : 1;       /**< Port address out-of-range from NCB Interface */
        uint64_t pko_nxa                 : 1;       /**< Port address out-of-range from PKO Interface */
#else
        uint64_t pko_nxa                 : 1;
        uint64_t ncb_nxa                 : 1;
        uint64_t undflw                  : 4;
        uint64_t reserved                : 58;
#endif
    } s;
} cvmx_gmxx_tx_int_reg_t;


/**
 * GMX_TX_JAM = RGMII TX Jam Pattern
 *
 * - Access using the CVMX_GMXX_TX_JAM(0..) CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 56;      /**< Reserved */
        uint64_t jam                     : 8;       /**< Jam pattern */
#else
        uint64_t jam                     : 8;
        uint64_t reserved                : 56;
#endif
    } s;
} cvmx_gmxx_tx_jam_t;


/**
 * GMX_TX_LFSR = LFSR used to implement truncated binary exponential backoff
 *
 * - Access using the CVMX_GMXX_TX_LFSR(0..) CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 48;      /**< Reserved */
        uint64_t lfsr                    : 16;      /**< The current state of the LFSR used to feed random
                                                         numbers to compute truncated binary exponential
                                                         backoff. */
#else
        uint64_t lfsr                    : 16;
        uint64_t reserved                : 48;
#endif
    } s;
} cvmx_gmxx_tx_lfsr_t;


/**
 * GMX_TX_OVR_BP = RGMII TX Override BackPressure
 *
 * - Access using the CVMX_GMXX_TX_OVR_BP(0..) CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 52;      /**< Reserved */
        uint64_t en                      : 4;       /**< Per port Enable back pressure override */
        uint64_t bp                      : 4;       /**< Per port BackPressure status to use
                                                         0=Port is available
                                                         1=Port should be back pressured */
        uint64_t ign_full                : 4;       /**< Ignore the RX FIFO full when computing BP */
#else
        uint64_t ign_full                : 4;
        uint64_t bp                      : 4;
        uint64_t en                      : 4;
        uint64_t reserved                : 52;
#endif
    } s;
} cvmx_gmxx_tx_ovr_bp_t;


/**
 * GMX_TX_PAUSE_PKT_DMAC = RGMII TX Pause Packet DMAC field
 *
 * - Access using the CVMX_GMXX_TX_PAUSE_PKT_DMAC(0..) CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 16;      /**< Reserved */
        uint64_t dmac                    : 48;      /**< The DMAC field placed is outbnd pause pkts */
#else
        uint64_t dmac                    : 48;
        uint64_t reserved                : 16;
#endif
    } s;
} cvmx_gmxx_tx_pause_pkt_dmac_t;


/**
 * GMX_TX_PAUSE_PKT_TYPE = RGMII TX Pause Packet TYPE field
 *
 * - Access using the CVMX_GMXX_TX_PAUSE_PKT_TYPE(0..) CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 48;      /**< Reserved */
        uint64_t type                    : 16;      /**< The TYPE field placed is outbnd pause pkts */
#else
        uint64_t type                    : 16;
        uint64_t reserved                : 48;
#endif
    } s;
} cvmx_gmxx_tx_pause_pkt_type_t;


/**
 * Common
 *  GMX_TX_PRTS = TX Ports
 *
 *  The value programmed for PRTS is the number of the highest architected
 *   port number on the interface, plus 1.  For example, if port 2 is the
 *   highest architected port, then the programmed value should be 3 since
 *   there are 3 ports in the system - 0, 1, and 2.
 *
 * - Access using the CVMX_GMXX_TX_PRTS(0..) CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 59;      /**< Reserved */
        uint64_t prts                    : 5;       /**< Number of ports allowed on the interface */
#else
        uint64_t prts                    : 5;
        uint64_t reserved                : 59;
#endif
    } s;
} cvmx_gmxx_tx_prts_t;


/**
 * GMX_TX_SPI_CTL = Spi4 TX ModesSpi4
 *
 * - Access using the CVMX_GMXX_TX_SPI_CTL(0..) CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 61;      /**< Reserved */
        uint64_t enforce                 : 1;       /**< Enforce Max Burst
                                                         When set, bursts will never exceed MAX_BURST
                                                         Will be a performance hit */
        uint64_t tpa_clr                 : 1;       /**< TPA Clear Mode
                                                         Clear credit counter when satisifed status */
        uint64_t cont_pkt                : 1;       /**< Contiguous Packet Mode
                                                         Finish one packet before switching to another */
#else
        uint64_t cont_pkt                : 1;
        uint64_t tpa_clr                 : 1;
        uint64_t enforce                 : 1;
        uint64_t reserved                : 61;
#endif
    } s;
} cvmx_gmxx_tx_spi_ctl_t;


/**
 * GMX_TX_SPI_MAX = RGMII TX Spi4 MAX
 *
 * - Access using the CVMX_GMXX_TX_SPI_MAX(0..) CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 48;      /**< Reserved */
        uint64_t max2                    : 8;       /**< MAX2 (per Spi4.2 spec) */
        uint64_t max1                    : 8;       /**< MAX1 (per Spi4.2 spec) */
#else
        uint64_t max1                    : 8;
        uint64_t max2                    : 8;
        uint64_t reserved                : 48;
#endif
    } s;
} cvmx_gmxx_tx_spi_max_t;


/**
 * GMX_TX_SPI_THRESH = RGMII TX Spi4 Transmit Threshold
 * Note: zero will map to 0x20
 *
 * - Access using the CVMX_GMXX_TX_SPI_THRESH(0..) CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 58;      /**< Reserved */
        uint64_t thresh                  : 6;       /**< Transmit threshold in 16B blocks - cannot be zero */
#else
        uint64_t thresh                  : 6;
        uint64_t reserved                : 58;
#endif
    } s;
} cvmx_gmxx_tx_spi_thresh_t;


/**
 * GMX_TX_APPEND = RGMII TX Append Control
 *
 * - Access using the CVMX_GMXX_TXX_APPEND(0..3, 0..1) CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 61;      /**< Reserved */
        uint64_t fcs                     : 1;       /**< Append the Ethernet FCS on each packet */
        uint64_t pad                     : 1;       /**< Append PAD bytes such that min sized */
        uint64_t preamble                : 1;       /**< Prepend the Ethernet preamble on each transfer */
#else
        uint64_t preamble                : 1;
        uint64_t pad                     : 1;
        uint64_t fcs                     : 1;
        uint64_t reserved                : 61;
#endif
    } s;
} cvmx_gmxx_txx_append_t;


/**
 * GMX_TX_BURST = RGMII TX Burst Counter
 *
 * - Access using the CVMX_GMXX_TXX_BURST(0..3, 0..1) CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 48;      /**< Reserved */
        uint64_t burst                   : 16;      /**< Burst (refer to 802.3 to set correctly)
                                                         - 10/100Mbs: 0x0
                                                         - 1000Mbs:   0x2000 */
#else
        uint64_t burst                   : 16;
        uint64_t reserved                : 48;
#endif
    } s;
} cvmx_gmxx_txx_burst_t;


/**
 * Per Port
 *  GMX_TX_CLK = RGMII TX Clock Generation Register
 * Example: given a 250MHz reference clock...
 *  CLK_CNT ==  1 ==> 125.0MHz TXC clock (4ns* 1*2)
 *  CLK_CNT ==  5 ==>  25.0MHz TXC clock (4ns* 5*2)
 *  CLK_CNT == 50 ==>   2.5MHz TXC clock (4ns*50*2)
 *
 * - Access using the CVMX_GMXX_TXX_CLK(0..3, 0..1) CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 58;      /**< Reserved */
        uint64_t clk_cnt                 : 6;       /**< Controls the RGMII TXC frequency
                                                         TXC(phase) = spi4_tx_pll_ref_clk(period)*CLK_CNT
                                                         NOTE: CLK_CNT==0 will not generate any clock */
#else
        uint64_t clk_cnt                 : 6;
        uint64_t reserved                : 58;
#endif
    } s;
} cvmx_gmxx_txx_clk_t;


/**
 * GMX_TX_MIN_PKT = RGMII TX Min Size Packet (PAD upto min size)
 *
 * - Access using the CVMX_GMXX_TXX_MIN_PKT(0..3, 0..1) CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 56;      /**< Reserved */
        uint64_t min_size                : 8;       /**< Min frame in bytes before the FCS is applied
                                                         Padding is only appened when GMX_TX_APPEND[PAD]
                                                         for the coresponding RGMII port is set. */
#else
        uint64_t min_size                : 8;
        uint64_t reserved                : 56;
#endif
    } s;
} cvmx_gmxx_txx_min_pkt_t;


/**
 * GMX_TX_PAUSE_PKT_INTERVAL = RGMII TX Pause Packet transmission interval - how often PAUSE packets will be sent
 *
 * - Access using the CVMX_GMXX_TXX_PAUSE_PKT_INTERVAL(0..3, 0..1) CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 48;      /**< Reserved */
        uint64_t interval                : 16;      /**< Arbitrate for a pause packet every (INTERVAL*256)
                                                         bit-times. */
#else
        uint64_t interval                : 16;
        uint64_t reserved                : 48;
#endif
    } s;
} cvmx_gmxx_txx_pause_pkt_interval_t;


/**
 * GMX_TX_PAUSE_PKT_TIME = RGMII TX Pause Packet pause_time field
 *
 * - Access using the CVMX_GMXX_TXX_PAUSE_PKT_TIME(0..3, 0..1) CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 48;      /**< Reserved */
        uint64_t time                    : 16;      /**< The pause_time field placed is outbnd pause pkts */
#else
        uint64_t time                    : 16;
        uint64_t reserved                : 48;
#endif
    } s;
} cvmx_gmxx_txx_pause_pkt_time_t;


/**
 * GMX_TX_PAUSE_TOGO = RGMII TX Amount of time remaining to backpressure
 *
 * - Access using the CVMX_GMXX_TXX_PAUSE_TOGO(0..3, 0..1) CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 48;      /**< Reserved */
        uint64_t time                    : 16;      /**< Amount of time remaining to backpressure */
#else
        uint64_t time                    : 16;
        uint64_t reserved                : 48;
#endif
    } s;
} cvmx_gmxx_txx_pause_togo_t;


/**
 * GMX_TX_PAUSE_ZERO = RGMII TX Amount of time remaining to backpressure
 *
 * - Access using the CVMX_GMXX_TXX_PAUSE_ZERO(0..3, 0..1) CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 63;      /**< Reserved */
        uint64_t send                    : 1;       /**< When backpressure condition clear, send PAUSE
                                                         packet with pause_time of zero to enable the
                                                         channel */
#else
        uint64_t send                    : 1;
        uint64_t reserved                : 63;
#endif
    } s;
} cvmx_gmxx_txx_pause_zero_t;


/**
 * GMX_TX_SLOT = RGMII TX Slottime Counter
 *
 * - Access using the CVMX_GMXX_TXX_SLOT(0..3, 0..1) CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 54;      /**< Reserved */
        uint64_t slot                    : 10;      /**< Slottime (refer to 802.3 to set correctly)
                                                         - 10/100Mbs: 0x40
                                                         - 1000Mbs:   0x200 */
#else
        uint64_t slot                    : 10;
        uint64_t reserved                : 54;
#endif
    } s;
} cvmx_gmxx_txx_slot_t;


/**
 * GMX_TX_SOFT_PAUSE = RGMII TX Software Pause
 *
 * - Access using the CVMX_GMXX_TXX_SOFT_PAUSE(0..3, 0..1) CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 48;      /**< Reserved */
        uint64_t time                    : 16;      /**< Back off the TX bus for (TIME*256) bit-times */
#else
        uint64_t time                    : 16;
        uint64_t reserved                : 48;
#endif
    } s;
} cvmx_gmxx_txx_soft_pause_t;


/**
 * Notes on stats
 *  -# Read and write operations must arbitrate for the resources
 *  -# cleared either by a write (any value) or a read when GMX_TX_STATS_CTL[RD_CLR] is set
 *  -# all counters are saturating
 *  GMX_TX_STAT0 = GMX_TX_STATS_XSDEF / GMX_TX_STATS_XSCOL
 *
 * - Access using the CVMX_GMXX_TXX_STAT0(0..3, 0..1) CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t xsdef                   : 32;      /**< Number of packets dropped (never successfully
                                                         sent) due to excessive deferal */
        uint64_t xscol                   : 32;      /**< Number of packets dropped (never successfully
                                                         sent) due to excessive collision.  Defined by
                                                         GMX_TX_COL_ATTEMPT[LIMIT]. */
#else
        uint64_t xscol                   : 32;
        uint64_t xsdef                   : 32;
#endif
    } s;
} cvmx_gmxx_txx_stat0_t;


/**
 * GMX_TX_STAT1 = GMX_TX_STATS_SCOL  / GMX_TX_STATS_MCOL
 *
 * - Access using the CVMX_GMXX_TXX_STAT1(0..3, 0..1) CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t scol                    : 32;      /**< Number of packets sent with a single collision */
        uint64_t mcol                    : 32;      /**< Number of packets sent with multiple collisions
                                                         but < GMX_TX_COL_ATTEMPT[LIMIT]. */
#else
        uint64_t mcol                    : 32;
        uint64_t scol                    : 32;
#endif
    } s;
} cvmx_gmxx_txx_stat1_t;


/**
 * GMX_TX_STAT2 = GMX_TX_STATS_OCTS
 *
 * - Access using the CVMX_GMXX_TXX_STAT2(0..3, 0..1) CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 16;      /**< Reserved */
        uint64_t octs                    : 48;      /**< Number of total octets sent on the interface
                                                         including all octets resulting from collision
                                                         retries. */
#else
        uint64_t octs                    : 48;
        uint64_t reserved                : 16;
#endif
    } s;
} cvmx_gmxx_txx_stat2_t;


/**
 * GMX_TX_STAT3 = GMX_TX_STATS_PKTS
 *
 * - Access using the CVMX_GMXX_TXX_STAT3(0..3, 0..1) CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 32;      /**< Reserved */
        uint64_t pkts                    : 32;      /**< Number of total frames sent on the interface
                                                         including all retries resulting from collision. */
#else
        uint64_t pkts                    : 32;
        uint64_t reserved                : 32;
#endif
    } s;
} cvmx_gmxx_txx_stat3_t;


/**
 * GMX_TX_STAT4 = GMX_TX_STATS_HIST1 (  65- 127) / GMX_TX_STATS_HIST0 (      64)
 *
 * - Access using the CVMX_GMXX_TXX_STAT4(0..3, 0..1) CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t hist1                   : 32;      /**< Number of packets sent with an octet count of
                                                         65 - 127. */
        uint64_t hist0                   : 32;      /**< Number of packets sent with an octet count of 64. */
#else
        uint64_t hist0                   : 32;
        uint64_t hist1                   : 32;
#endif
    } s;
} cvmx_gmxx_txx_stat4_t;


/**
 * GMX_TX_STAT5 = GMX_TX_STATS_HIST3 ( 256- 511) / GMX_TX_STATS_HIST2 (128- 255)
 *
 * - Access using the CVMX_GMXX_TXX_STAT5(0..3, 0..1) CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t hist3                   : 32;      /**< Number of packets sent with an octet count of
                                                         256 - 511. */
        uint64_t hist2                   : 32;      /**< Number of packets sent with an octet count of
                                                         128 - 255. */
#else
        uint64_t hist2                   : 32;
        uint64_t hist3                   : 32;
#endif
    } s;
} cvmx_gmxx_txx_stat5_t;


/**
 * GMX_TX_STAT6 = GMX_TX_STATS_HIST5 (1024-1518) / GMX_TX_STATS_HIST4 (512-1023)
 *
 * - Access using the CVMX_GMXX_TXX_STAT6(0..3, 0..1) CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t hist5                   : 32;      /**< Number of packets sent with an octet count of
                                                         1024 - 1518. */
        uint64_t hist4                   : 32;      /**< Number of packets sent with an octet count of
                                                         512 - 1023. */
#else
        uint64_t hist4                   : 32;
        uint64_t hist5                   : 32;
#endif
    } s;
} cvmx_gmxx_txx_stat6_t;


/**
 * GMX_TX_STAT7 = GMX_TX_STATS_HIST7 (>1518)     / GMX_TX_STATS_HIST6 (<64)
 *
 * - Access using the CVMX_GMXX_TXX_STAT7(0..3, 0..1) CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t hist7                   : 32;      /**< Number of packets sent with an octet count
                                                         of > 1518. */
        uint64_t hist6                   : 32;      /**< Number of packets sent with an octet count
                                                         of < 64. */
#else
        uint64_t hist6                   : 32;
        uint64_t hist7                   : 32;
#endif
    } s;
} cvmx_gmxx_txx_stat7_t;


/**
 * GMX_TX_STAT8 = GMX_TX_STATS_MCST  / GMX_TX_STATS_BCST
 *
 * - Access using the CVMX_GMXX_TXX_STAT8(0..3, 0..1) CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t mcst                    : 32;      /**< Number of packets sent to multicast DMAC.
                                                         Does not include BCST packets. */
        uint64_t bcst                    : 32;      /**< Number of packets sent to broadcast DMAC.
                                                         Does not include MCST packets. */
#else
        uint64_t bcst                    : 32;
        uint64_t mcst                    : 32;
#endif
    } s;
} cvmx_gmxx_txx_stat8_t;


/**
 * GMX_TX_STAT9 = GMX_TX_STATS_UNDFLW / GMX_TX_STATS_CTL
 *
 * - Access using the CVMX_GMXX_TXX_STAT9(0..3, 0..1) CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t undflw                  : 32;      /**< Number of underflow packets */
        uint64_t ctl                     : 32;      /**< Number of Control packets (PAUSE flow control)
                                                         generated by GMX.  It does not include control
                                                         packets forwarded or generated by the PP's. */
#else
        uint64_t ctl                     : 32;
        uint64_t undflw                  : 32;
#endif
    } s;
} cvmx_gmxx_txx_stat9_t;


/**
 * GMX_TX_STATS_CTL = TX Stats Control register
 *
 * - Access using the CVMX_GMXX_TXX_STATS_CTL(0..3, 0..1) CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 63;      /**< Reserved */
        uint64_t rd_clr                  : 1;       /**< Stats registers will clear on reads */
#else
        uint64_t rd_clr                  : 1;
        uint64_t reserved                : 63;
#endif
    } s;
} cvmx_gmxx_txx_stats_ctl_t;


/**
 * GMX_TX_THRESH = RGMII TX Threshold
 *
 * - Access using the CVMX_GMXX_TXX_THRESH(0..3, 0..1) CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 58;      /**< Reserved */
        uint64_t cnt                     : 6;       /**< Number of 16B ticks to accumulate in the TX FIFO
                                                         before sending on the RGMII interface */
#else
        uint64_t cnt                     : 6;
        uint64_t reserved                : 58;
#endif
    } s;
} cvmx_gmxx_txx_thresh_t;


/**
 * Configure GPIO interface pins using this structure. Write the configuration
 * using cvmx_write_csr(CVMX_GPIO_BIT_CFGX(pin_number), cfg.u64).
 *
 * - Access using the CVMX_GPIO_BIT_CFGX(0..15) CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 52;      /**< Reserved */
        uint64_t fil_sel                 : 4;       /**< Global counter bit-select (controls sample rate) */
        uint64_t fil_cnt                 : 4;       /**< Number of consecutive samples to change state */
        uint64_t int_type                : 1;       /**< Type of interrupt
                                                         0 = level (default)
                                                         1 = rising edge */
        uint64_t int_en                  : 1;       /**< Bit mask to indicate which bits to raise interrupt */
        uint64_t rx_xor                  : 1;       /**< Invert the GPIO pin */
        uint64_t tx_oe                   : 1;       /**< Drive the GPIO pin as an output pin */
#else
        uint64_t tx_oe                   : 1;
        uint64_t rx_xor                  : 1;
        uint64_t int_en                  : 1;
        uint64_t int_type                : 1;
        uint64_t fil_cnt                 : 4;
        uint64_t fil_sel                 : 4;
        uint64_t reserved                : 52;
#endif
    } s;
} cvmx_gpio_bit_cfgx_t;


/**
 * IOB_BIST_STATUS = BIST Status of IOB Memories
 *  The result of the BIST run on the IOB memories.
 *
 * - Access using the CVMX_IOB_BIST_STATUS CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 46;      /**< Reserved */
        uint64_t icnrcb                  : 1;       /**< icnr_cb_reg_fifo_bist_status */
        uint64_t icr0                    : 1;       /**< icr_bist_req_fifo0_status */
        uint64_t icr1                    : 1;       /**< icr_bist_req_fifo1_status */
        uint64_t icnr1                   : 1;       /**< icnr_reg_mem1_bist_status */
        uint64_t icnr0                   : 1;       /**< icnr_reg_mem0_bist_status */
        uint64_t ibdr0                   : 1;       /**< ibdr_bist_req_fifo0_status */
        uint64_t ibdr1                   : 1;       /**< ibdr_bist_req_fifo1_status */
        uint64_t ibr0                    : 1;       /**< ibr_bist_rsp_fifo0_status */
        uint64_t ibr1                    : 1;       /**< ibr_bist_rsp_fifo1_status */
        uint64_t icnrt                   : 1;       /**< icnr_tag_cb_reg_fifo_bist_status */
        uint64_t ibrq0                   : 1;       /**< ibrq_bist_req_fifo0_status */
        uint64_t ibrq1                   : 1;       /**< ibrq_bist_req_fifo1_status */
        uint64_t icrn0                   : 1;       /**< icr_ncb_bist_mem0_status */
        uint64_t icrn1                   : 1;       /**< icr_ncb_bist_mem1_status */
        uint64_t icrp0                   : 1;       /**< icr_pko_bist_mem0_status */
        uint64_t icrp1                   : 1;       /**< icr_pko_bist_mem1_status */
        uint64_t ibd                     : 1;       /**< ibd_bist_mem0_status */
        uint64_t icd                     : 1;       /**< icd_ncb_fifo_bist_status */
#else
        uint64_t icd                     : 1;
        uint64_t ibd                     : 1;
        uint64_t icrp1                   : 1;
        uint64_t icrp0                   : 1;
        uint64_t icrn1                   : 1;
        uint64_t icrn0                   : 1;
        uint64_t ibrq1                   : 1;
        uint64_t ibrq0                   : 1;
        uint64_t icnrt                   : 1;
        uint64_t ibr1                    : 1;
        uint64_t ibr0                    : 1;
        uint64_t ibdr1                   : 1;
        uint64_t ibdr0                   : 1;
        uint64_t icnr0                   : 1;
        uint64_t icnr1                   : 1;
        uint64_t icr1                    : 1;
        uint64_t icr0                    : 1;
        uint64_t icnrcb                  : 1;
        uint64_t reserved                : 46;
#endif
    } s;
} cvmx_iob_bist_status_t;


/**
 * IOB Control Status = IOB Control and Status Register
 *  Provides control for IOB functions.
 *
 * - Access using the CVMX_IOB_CTL_STATUS CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 61;      /**< Reserved */
        uint64_t pko_enb                 : 1;       /**< Toggles the endian style of the FAU for the PKO.
                                                         '0' is for big-endian and '1' is for little-endian. */
        uint64_t dwb_enb                 : 1;       /**< Enables the DWB function of the IOB. */
        uint64_t fau_end                 : 1;       /**< Toggles the endian style of the FAU. '0' is for
                                                         big-endian and '1' is for little-endian. */
#else
        uint64_t fau_end                 : 1;
        uint64_t dwb_enb                 : 1;
        uint64_t pko_enb                 : 1;
        uint64_t reserved                : 61;
#endif
    } s;
} cvmx_iob_ctl_status_t;


/**
 * DWB To CB Priority Counter = Don't Write Back to CB
 * Priority Counter Enable and Timer Value
 *
 * Enables and supplies the timeout count for raising the
 * priority of Don't Write Back request to the L2C.
 * - Access using the CVMX_IOB_DWB_PRI_CNT CSR.
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 48;      /**< Must be zero */
        uint64_t cnt_enb                 : 1;       /**< Enables the raising of CB access priority
                                                         when CNT_VAL is reached. */
        uint64_t cnt_val                 : 15;      /**< Number of core clocks to wait before
                                                         raising the priority for access to CB. */
#else
        uint64_t cnt_val                 : 15;
        uint64_t cnt_enb                 : 1;
        uint64_t reserved                : 48;
#endif
    } s;
} cvmx_iob_dwb_pri_cnt_t;


/**
 * FAU Timeout = Fetch and Add Unit Tag-Switch Timeout
 *
 * How many clock ticks the FAU unit will wait for a
 * tag-switch before timing out.
 * - Access using the CVMX_IOB_FAU_TIMEOUT CSR.
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 51;      /**< Must be zero */
        uint64_t tout_enb                : 1;       /**< The enable for the FAU timeout feature.
                                                         - '1' will enable the timeout
                                                         - '0' will disable. */
        uint64_t tout_val                : 12;      /**< When a tag request arrives from the PP a
                                                         timer is started associate with that PP.
                                                         The timer which increments every 256 eclks
                                                         is compared to TOUT_VAL. When the two are
                                                         equal the IOB will flag the tag request to
                                                         complete as a time-out tag operation. The
                                                         256 count timer used to increment the PP
                                                         associated timer is always running so the
                                                         first increment of the PP associated timer
                                                         may occur any where within the first 256
                                                         eclks. */
#else
        uint64_t tout_val                : 12;
        uint64_t tout_enb                : 1;
        uint64_t reserved                : 51;
#endif
    } s;
} cvmx_iob_fau_timeout_t;


/**
 * IPD To CB Store Priority Counter = IPD to CB Store Priority
 * Counter Enable and Timer Value
 *
 * Enables and supplies the timeout count for raising the
 * priority of IPD Store access to the CB.
 * - Access using the CVMX_IOB_I2C_PRI_CNT CSR.
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 48;      /**< Must be zero */
        uint64_t cnt_enb                 : 1;       /**< Enables the raising of CB access priority
                                                         when CNT_VAL is reached. */
        uint64_t cnt_val                 : 15;      /**< Number of core clocks to wait before
                                                         raising the priority for access to CB. */
#else
        uint64_t cnt_val                 : 15;
        uint64_t cnt_enb                 : 1;
        uint64_t reserved                : 48;
#endif
    } s;
} cvmx_iob_i2c_pri_cnt_t;


/**
 * NCB To CB L2C Priority Counter = NCB to CB L2C Priority
 * Counter Enable and Timer Value
 *
 * Enables and supplies the timeout count for raising the
 * priority of NCB Store/Load access to the CB.
 * - Access using the CVMX_IOB_N2C_L2C_PRI_CNT CSR.
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 48;      /**< Must be zero */
        uint64_t cnt_enb                 : 1;       /**< Enables the raising of CB access priority
                                                         when CNT_VAL is reached. */
        uint64_t cnt_val                 : 15;      /**< Number of core clocks to wait before
                                                         raising the priority for access to CB. */
#else
        uint64_t cnt_val                 : 15;
        uint64_t cnt_enb                 : 1;
        uint64_t reserved                : 48;
#endif
    } s;
} cvmx_iob_n2c_l2c_pri_cnt_t;


/**
 * NCB To CB Response Priority Counter = NCB to CB Response
 * Priority Counter Enable and Timer Value
 *
 * Enables and supplies the timeout count for raising the
 * priority of NCB Responses access to the CB.
 * - Access using the CVMX_IOB_N2C_RSP_PRI_CNT CSR.
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 48;      /**< Must be zero */
        uint64_t cnt_enb                 : 1;       /**< Enables the raising of CB access priority
                                                         when CNT_VAL is reached. */
        uint64_t cnt_val                 : 15;      /**< Number of core clocks to wait before
                                                         raising the priority for access to CB. */
#else
        uint64_t cnt_val                 : 15;
        uint64_t cnt_enb                 : 1;
        uint64_t reserved                : 48;
#endif
    } s;
} cvmx_iob_n2c_rsp_pri_cnt_t;


/**
 * Commit To NCB Priority Counter = Commit to NCB Priority
 * Counter Enable and Timer Value
 *
 * Enables and supplies the timeout count for raising the
 * priority of Commit request to the Outbound NCB.
 * - Access using the CVMX_IOB_OUTB_COM_PRI_CNT CSR.
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 48;      /**< Must be zero */
        uint64_t cnt_enb                 : 1;       /**< Enables the raising of CB access priority
                                                         when CNT_VAL is reached. */
        uint64_t cnt_val                 : 15;      /**< Number of core clocks to wait before
                                                         raising the priority for access to CB. */
#else
        uint64_t cnt_val                 : 15;
        uint64_t cnt_enb                 : 1;
        uint64_t reserved                : 48;
#endif
    } s;
} cvmx_iob_outb_com_pri_cnt_t;


/**
 * FPA To NCB Priority Counter = FPA Returns to NCB Priority
 * Counter Enable and Timer Value
 *
 * Enables and supplies the timeout count for raising the
 * priority of FPA Rreturn Page request to the Outbound NCB.
 * - Access using the CVMX_IOB_OUTB_FPA_PRI_CNT CSR.
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 48;      /**< Must be zero */
        uint64_t cnt_enb                 : 1;       /**< Enables the raising of CB access priority
                                                         when CNT_VAL is reached. */
        uint64_t cnt_val                 : 15;      /**< Number of core clocks to wait before
                                                         raising the priority for access to CB. */
#else
        uint64_t cnt_val                 : 15;
        uint64_t cnt_enb                 : 1;
        uint64_t reserved                : 48;
#endif
    } s;
} cvmx_iob_outb_fpa_pri_cnt_t;


/**
 * Request To NCB Priority Counter = Request to NCB Priority
 * Counter Enable and Timer Value
 *
 * Enables and supplies the timeout count for raising the
 * priority of Request transfers to the Outbound NCB.
 * - Access using the CVMX_IOB_OUTB_REQ_PRI_CNT CSR.
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 48;      /**< Must be zero */
        uint64_t cnt_enb                 : 1;       /**< Enables the raising of CB access priority
                                                         when CNT_VAL is reached. */
        uint64_t cnt_val                 : 15;      /**< Number of core clocks to wait before
                                                         raising the priority for access to CB. */
#else
        uint64_t cnt_val                 : 15;
        uint64_t cnt_enb                 : 1;
        uint64_t reserved                : 48;
#endif
    } s;
} cvmx_iob_outb_req_pri_cnt_t;


/**
 * PKO To CB Response Priority Counter = PKO to CB Response
 * Priority Counter Enable and Timer Value
 *
 * Enables and supplies the timeout count for raising the
 * priority of PKO Load access to the CB.
 * - Access using the CVMX_IOB_P2C_REQ_PRI_CNT CSR.
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 48;      /**< Must be zero */
        uint64_t cnt_enb                 : 1;       /**< Enables the raising of CB access priority
                                                         when CNT_VAL is reached. */
        uint64_t cnt_val                 : 15;      /**< Number of core clocks to wait before
                                                         raising the priority for access to CB. */
#else
        uint64_t cnt_val                 : 15;
        uint64_t cnt_enb                 : 1;
        uint64_t reserved                : 48;
#endif
    } s;
} cvmx_iob_p2c_req_pri_cnt_t;


/**
 * IPD_BIST_STATUS = IPD BIST STATUS
 *  BIST Status for IPD's Memories.
 *
 * - Access using the CVMX_IPD_BIST_STATUS CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 48;      /**< Reserved */
        uint64_t pwq_wqed                : 1;       /**< PWQ PIP WQE DONE Memory Bist Status. */
        uint64_t pwq_wp1                 : 1;       /**< PWQ WQE PAGE1 PTR Memory Bist Status. */
        uint64_t pwq_pow                 : 1;       /**< PWQ POW MEM Memory Bist Status. */
        uint64_t ipq_pbe1                : 1;       /**< IPQ PBE1 Memory Bist Status. */
        uint64_t ipq_pbe0                : 1;       /**< IPQ PBE0 Memory Bist Status. */
        uint64_t pbm3                    : 1;       /**< PBM3 Memory Bist Status. */
        uint64_t pbm2                    : 1;       /**< PBM2 Memory Bist Status. */
        uint64_t pbm1                    : 1;       /**< PBM1 Memory Bist Status. */
        uint64_t pbm0                    : 1;       /**< PBM0 Memory Bist Status. */
        uint64_t pbm_word                : 1;       /**< PBM_WORD Memory Bist Status. */
        uint64_t pwq1                    : 1;       /**< PWQ1 Memory Bist Status. */
        uint64_t pwq0                    : 1;       /**< PWQ0 Memory Bist Status. */
        uint64_t prc_off                 : 1;       /**< PRC_OFF Memory Bist Status. */
        uint64_t ipd_old                 : 1;       /**< IPD_OLD Memory Bist Status. */
        uint64_t ipd_new                 : 1;       /**< IPD_NEW Memory Bist Status. */
        uint64_t pwp                     : 1;       /**< PWP Memory Bist Status. */
#else
        uint64_t pwp                     : 1;
        uint64_t ipd_new                 : 1;
        uint64_t ipd_old                 : 1;
        uint64_t prc_off                 : 1;
        uint64_t pwq0                    : 1;
        uint64_t pwq1                    : 1;
        uint64_t pbm_word                : 1;
        uint64_t pbm0                    : 1;
        uint64_t pbm1                    : 1;
        uint64_t pbm2                    : 1;
        uint64_t pbm3                    : 1;
        uint64_t ipq_pbe0                : 1;
        uint64_t ipq_pbe1                : 1;
        uint64_t pwq_pow                 : 1;
        uint64_t pwq_wp1                 : 1;
        uint64_t pwq_wqed                : 1;
        uint64_t reserved                : 48;
#endif
    } s;
} cvmx_ipd_bist_status_t;


/**
 * IPD_BP_PRT_RED_END = IPD Backpressure Port RED Enable
 *  When IPD applies backpressure to a PORT and the cooresponding bit in this register is set,
 *  the RED Unit will drop packets for that port.
 *
 * - Access using the CVMX_IPD_BP_PRT_RED_END CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 28;      /**< Reserved */
        uint64_t prt_enb                 : 36;      /**< The port cooresponding to the bit position in this
                                                         field, will allow RED to drop back when port level
                                                         backpressure is applied to the port. The applying
                                                         of port-level backpressure for this RED dropping
                                                         does not take into consideration the value of
                                                         IPD_PORTX_BP_PAGE_CNT[BP_ENB]. */
#else
        uint64_t prt_enb                 : 36;
        uint64_t reserved                : 28;
#endif
    } s;
} cvmx_ipd_bp_prt_red_end_t;


/**
 * IPD_CTL_STATUS = IPS'd Control Status Register
 *  The number of words in a MBUFF used for packet data store.
 *
 * - Access using the CVMX_IPD_CTL_STATUS CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 58;      /**< Reserved */
        uint64_t pkt_lend                : 1;       /**< Changes PKT to little endian writes to L2C */
        uint64_t wqe_lend                : 1;       /**< Changes WQE to little endian writes to L2C */
        uint64_t pbp_en                  : 1;       /**< Port back pressure enable. When set '1' enables
                                                         the sending of port level backpressure to the
                                                         Octeon input-ports. Once enabled the sending of
                                                         port-level-backpressure can not be disabled by
                                                         changing the value of this bit. */
        cvmx_ipd_mode_t opc_mode         : 2;       /**< 0 ==> All packet data (and next buffer pointers)
                                                         is written through to memory.
                                                         1 ==> All packet data (and next buffer pointers) is
                                                         written into the cache.
                                                         2 ==> The first aligned cache block holding the
                                                         packet data (and initial next buffer pointer) is
                                                         written to the L2 cache, all remaining cache blocks
                                                         are not written to the L2 cache.
                                                         3 ==> The first two aligned cache blocks holding
                                                         the packet data (and initial next buffer pointer)
                                                         are written to the L2 cache, all remaining cache
                                                         blocks are not written to the L2 cache. */
        uint64_t ipd_en                  : 1;       /**< When set '1' enable the operation of the IPD. */
#else
        uint64_t ipd_en                  : 1;
        cvmx_ipd_mode_t opc_mode         : 2;
        uint64_t pbp_en                  : 1;
        uint64_t wqe_lend                : 1;
        uint64_t pkt_lend                : 1;
        uint64_t reserved                : 58;
#endif
    } s;
} cvmx_ipd_ctl_status_t;


/**
 * IPD_1st_NEXT_PTR_BACK = IPD First Next Pointer Back Values
 *
 * Contains the Back Field for use in creating the Next Pointer Header for the First MBUF
 * - Access using the CVMX_IPD_FIRST_NEXT_PTR_BACK CSR.
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 60;      /**< Must be zero */
        uint64_t back                    : 4;       /**< Used to find head of buffer from the nxt-hdr-ptr. */
#else
        uint64_t back                    : 4;
        uint64_t reserved                : 60;
#endif
    } s;
} cvmx_ipd_first_next_ptr_back_t;


/**
 * IPD_INTERRUPT_ENB = IPD Interrupt Enable Register
 *
 * Used to enable the various interrupting conditions of IPD
 * - Access using the CVMX_IPD_INT_ENB CSR.
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 59;      /**< Must be zero */
        uint64_t bp_sub                  : 1;       /**< Enables interrupts when a backpressure subtract has an illegal value. */
        uint64_t prc_par3                : 1;       /**< Enable parity error interrupts for bits [127:96] of the PBM memory. */
        uint64_t prc_par2                : 1;       /**< Enable parity error interrupts for bits [95:64] of the PBM memory. */
        uint64_t prc_par1                : 1;       /**< Enable parity error interrupts for bits [63:32] of the PBM memory. */
        uint64_t prc_par0                : 1;       /**< Enable parity error interrupts for bits [31:0] of the PBM memory. */
#else
        uint64_t prc_par0                : 1;
        uint64_t prc_par1                : 1;
        uint64_t prc_par2                : 1;
        uint64_t prc_par3                : 1;
        uint64_t bp_sub                  : 1;
        uint64_t reserved                : 59;
#endif
    } s;
} cvmx_ipd_int_enb_t;


/**
 * IPD_INTERRUPT_SUM = IPD Interrupt Summary Register
 *
 * Set when an interrupt condition occurs, write '1' to clear.
 * - Access using the CVMX_IPD_INT_SUM CSR.
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 59;      /**< Must be zero */
        uint64_t bp_sub                  : 1;       /**< Set when a backpressure subtract is done with a supplied illegal value. */
        uint64_t prc_par3                : 1;       /**< Set when parity error for bits [127:96] of the PBM memory. */
        uint64_t prc_par2                : 1;       /**< Set when parity error for bits [95:64] of the PBM memory. */
        uint64_t prc_par1                : 1;       /**< Set when parity error for bits [63:32] of the PBM memory. */
        uint64_t prc_par0                : 1;       /**< Set when parity error for bits [31:0] of the PBM memory. */
#else
        uint64_t prc_par0                : 1;
        uint64_t prc_par1                : 1;
        uint64_t prc_par2                : 1;
        uint64_t prc_par3                : 1;
        uint64_t bp_sub                  : 1;
        uint64_t reserved                : 59;
#endif
    } s;
} cvmx_ipd_int_sum_t;


/**
 * IPD_1ST_MBUFF_SKIP = IPD First MBUFF Word Skip Size
 *
 * The number of words that the IPD will skip when writing the first MBUFF.
 * - Access using the CVMX_IPD_MBUFF_FIRST_SKIP CSR.
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 58;      /**< Must be zero */
        uint64_t skip_sz                 : 6;       /**< The number of 8-byte words from the top of the
                                                         1st MBUFF that the IPD will store the next-pointer.
                                                         Legal values for this field are 0 to 32, but the
                                                         SKIP_SZ+16 <= IPD_PACKET_MBUFF_SIZE[MB_SIZE]. */
#else
        uint64_t skip_sz                 : 6;
        uint64_t reserved                : 58;
#endif
    } s;
} cvmx_ipd_mbuff_first_skip_t;


/**
 * IPD_PACKET_MBUFF_SIZE = IPD's PACKET MUBUF Size In Words
 *
 * The number of words in a MBUFF used for packet data store.
 * - Access using the CVMX_IPD_MBUFF_SIZE CSR.
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 52;      /**< Must be zero */
        uint64_t mb_size                 : 12;      /**< The number of 8-byte words in a MBUF. This
                                                         must be a number in the range of 32 to 2048.
                                                         This is also the size of the FPA's Queue-0 Free-Page. */
#else
        uint64_t mb_size                 : 12;
        uint64_t reserved                : 52;
#endif
    } s;
} cvmx_ipd_mbuff_size_t;


/**
 * IPD_PORT_BP_COUNTERS_PAIRx = MBUF Counters port Ports used to generate Back Pressure Per Port.
 * - Access using the CVMX_IPD_PORT_BP_COUNTERS_PAIRX(0..35) CSR.
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 39;      /**< Must be zero */
        uint64_t cnt_val                 : 25;      /**< Number of MBUFs being used by data on this port. */
#else
        uint64_t cnt_val                 : 25;
        uint64_t reserved                : 39;
#endif
    } s;
} cvmx_ipd_port_bp_counters_pairx_t;


/**
 * IPD_PORTx_BP_PAGE_CNT = IPD Port Backpressure Page Count
 *
 * The number of pages in use by the port that when exceeded, backpressure will be applied to the port.
 * - Access using the CVMX_IPD_PORTX_BP_PAGE_CNT(0..35) CSR.
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 46;      /**< Must be zero */
        uint64_t bp_enb                  : 1;       /**< When set '1' BP will be applied, if '0'
                                                         BP will not be applied to port. */
        uint64_t page_cnt                : 17;      /**< The number of page pointers assigned to
                                                         the port, that when exceeded will cause
                                                         back-pressure to be applied to the port.
                                                         This value is in 256 page-pointer increments,
                                                         (i.e. 0 = 0-page-ptrs, 1 = 256-page-ptrs,..) */
#else
        uint64_t page_cnt                : 17;
        uint64_t bp_enb                  : 1;
        uint64_t reserved                : 46;
#endif
    } s;
} cvmx_ipd_portx_bp_page_cnt_t;


/**
 * IPD_PTR_COUNT = IPD Page Pointer Count
 *  Shows the number of WQE and Packet Page Pointers stored in the IPD.
 *
 * - Access using the CVMX_IPD_PTR_COUNT CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 47;      /**< Reserved */
        uint64_t pfif_cnt                : 3;       /**< This value plus PKT_PCNT in this register are
                                                         equal to the number of packet page pointers in IPD. */
        uint64_t pkt_pcnt                : 7;       /**< This value plus PFIF_CNT in this register are
                                                         equal to the number of packet page pointers in IPD. */
        uint64_t wqe_pcnt                : 7;       /**< Number of page pointers for WQE storage that are
                                                         buffered in the IPD. */
#else
        uint64_t wqe_pcnt                : 7;
        uint64_t pkt_pcnt                : 7;
        uint64_t pfif_cnt                : 3;
        uint64_t reserved                : 47;
#endif
    } s;
} cvmx_ipd_ptr_count_t;


/**
 * IPD_QOSx_RED_MARKS = IPD QOS x Marks Red High Low
 *
 * Set the pass-drop marks for qos level.
 * - Access using the CVMX_IPD_QOS_RED_MARKS CSR.
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t drop                    : 32;      /**< Packet will be dropped if the Average Que size is equal to or less than this value. */
        uint64_t pass                    : 32;      /**< Packet will be passed if the Average Que size is larger than this value. */
#else
        uint64_t pass                    : 32;
        uint64_t drop                    : 32;
#endif
    } s;
} cvmx_ipd_qos_red_marks_t;


/**
 * IPD_QUE0_FREE_PAGE_CNT = IPD Queue0 Free Page Count
 *  Number of Free-Page Pointer that are available for use in the FPA for Queue-0.
 *
 * - Access using the CVMX_IPD_QUE0_FREE_PAGE_CNT CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 32;      /**< Reserved */
        uint64_t q0_pcnt                 : 32;      /**< Number of Queue-0 Page Pointers Available. */
#else
        uint64_t q0_pcnt                 : 32;
        uint64_t reserved                : 32;
#endif
    } s;
} cvmx_ipd_que0_free_page_cnt_t;


/**
 * IPD_RED_PORT_ENABLE = IPD RED Port Enable
 *
 * Set the pass-drop marks for qos level.
 * - Access using the CVMX_IPD_RED_PORT_ENABLE CSR.
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t prb_dly                 : 14;      /**< The bit position will enable the cooresponding
                                                         Ports ability to have packets dropped by RED
                                                         probability. */
        uint64_t avg_dly                 : 14;      /**< The number of core clocks periods to wait before
                                                         caluclating the average queue size. */
        uint64_t prt_enb                 : 36;      /**< The bit position will enable the cooresponding
                                                         Ports ability to have packets dropped by RED
                                                         probability. */
#else
        uint64_t prt_enb                 : 36;
        uint64_t avg_dly                 : 14;
        uint64_t prb_dly                 : 14;
#endif
    } s;
} cvmx_ipd_red_port_enable_t;


/**
 * IPD_RED_QUEX_PARAM = IPD RED Queue Parameters
 *
 * Value control the Passing and Dropping of packets by the red engine for QOS Level-X.
 * - Access using the CVMX_IPD_RED_QUE[0-7]_PARAM CSR.
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 15;      /**< Reserved */
        uint64_t use_pcnt                : 1;       /**< When set '1' red will use the actual Packet-Page
                                                         Count in place of the Average for RED calculations. */
        uint64_t new_con                 : 8;       /**< This value is used control how much of the present
                                                         Actual Queue Size is used to calculate the new
                                                         Average Queue Size. The value is a number from 0
                                                         256, which represents NEW_CON/256 of the Actual
                                                         Queue Size that will be used in the calculation.
                                                         The number in this field plus the value of
                                                         AVG_CON must be equal to 256. */
        uint64_t avg_con                 : 8;       /**< This value is used control how much of the present
                                                         Average Queue Size is used to calculate the new
                                                         Average Queue Size. The value is a number from 0
                                                         256, which represents AVG_CON/256 of the Average
                                                         Queue Size that will be used in the calculation.
                                                         The number in this field plus the value of
                                                         NEW_CON must be equal to 256. */
        uint64_t prb_con                 : 32;      /**< Used in computing the probability of a packet being
                                                         passed or drop by the WRED engine. The field is
                                                         calculated to be (255 * 2^24)/(PASS-DROP). Where
                                                         PASS and DROP are the field from the
                                                         IPD_QOS0_RED_MARKS CSR. */
#else
        uint64_t prb_con                 : 32;
        uint64_t avg_con                 : 8;
        uint64_t new_con                 : 8;
        uint64_t use_pcnt                : 1;
        uint64_t reserved                : 15;
#endif
    } s;
} cvmx_ipd_red_quex_param_t;


/**
 * IPD_SUB_PORT_BP_PAGE_CNT = IPD Subtract Port Backpressure Page Count
 *
 * Will add the value to the indicated port count register, the number of pages supplied. The value added should
 * be the 2's complement of the vallue that needs to be subtracted. Users would add 2's compliment values to the
 * port-mbuf-count register to return (lower the count) mbufs to the counter in order to avoid port-level
 * backpressure being applied to the port. Backpressure is applied when the MBUF used count of a port exceeds the
 * value in the IPD_PORTx_BP_PAGE_CNT.
 * - Access using the CVMX_IPD_SUB_PORT_BP_PAGE_CNT CSR.
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 33;      /**< Must be zero */
        uint64_t port                    : 6;       /**< The port to add the PAGE_CNT field to. */
        uint64_t page_cnt                : 25;      /**< The number of page pointers to add to the
                                                         port counter pointed to by the PORT Field. */
#else
        uint64_t page_cnt                : 25;
        uint64_t port                    : 6;
        uint64_t reserved                : 33;
#endif
    } s;
} cvmx_ipd_sub_port_bp_page_cnt_t;


/**
 * IPD_SUB_PORT_FCS = IPD Subtract Ports FCS Register
 *
 * When set '1' the port cooresponding to the but set will subtract 4 bytes from the end of
 * the packet.
 * - Access using the CVMX_IPD_SUB_PORT_FCS CSR.
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 32;      /**< Must be zero */
        uint64_t port_bit                : 32;      /**< When set '1', the port cooresponding to the bit
                                                         position set, will subtract the FCS for packets
                                                         on that port. */
#else
        uint64_t port_bit                : 32;
        uint64_t reserved                : 32;
#endif
    } s;
} cvmx_ipd_sub_port_fcs_t;


/**
 * IPD_WQE_FPA_QUEUE = IPD Work-Queue-Entry FPA Page Size
 *
 * Which FPA Queue (0-7) to fetch page-pointers from for WQE's
 * - Access using the CVMX_IPD_WQE_FPA_POOL CSR.
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 61;      /**< Must be zero */
        uint64_t wqe_pool                : 3;       /**< Which FPA Queue to fetch page-pointers from for WQE's. */
#else
        uint64_t wqe_pool                : 3;
        uint64_t reserved                : 61;
#endif
    } s;
} cvmx_ipd_wqe_fpa_pool_t;


/**
 * KEY_BIST_REG = KEY's BIST Status Register
 *  The KEY's BIST status for memories.
 *
 * - Access using the CVMX_KEY_BIST_REG CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 61;      /**< Reserved */
        uint64_t rrc                     : 1;       /**< RRC bist status. */
        uint64_t mem1                    : 1;       /**< MEM - 1 bist status. */
        uint64_t mem0                    : 1;       /**< MEM - 0 bist status. */
#else
        uint64_t mem0                    : 1;
        uint64_t mem1                    : 1;
        uint64_t rrc                     : 1;
        uint64_t reserved                : 61;
#endif
    } s;
} cvmx_key_bist_reg_t;


/**
 * KEY_CTL_STATUS = KEY's Control/Status Register
 *  The KEY's interrupt enable register.
 *
 * - Access using the CVMX_KEY_CTL_STATUS CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 50;      /**< Reserved */
        uint64_t mem1_err                : 7;       /**< Causes a flip of the ECC bit associated 38:32
                                                         respective to bit 13:7 of this field, for FPF
                                                         FIFO 1. */
        uint64_t mem0_err                : 7;       /**< Causes a flip of the ECC bit associated 38:32
                                                         respective to bit 6:0 of this field, for FPF
                                                         FIFO 0. */
#else
        uint64_t mem0_err                : 7;
        uint64_t mem1_err                : 7;
        uint64_t reserved                : 50;
#endif
    } s;
} cvmx_key_ctl_status_t;


/**
 * KEY_INT_ENB = KEY's Interrupt Enable
 *  The KEY's interrupt enable register.
 *
 * - Access using the CVMX_KEY_INT_ENB CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 60;      /**< Reserved */
        uint64_t ked1_dbe                : 1;       /**< When set (1) and bit 3 of the KEY_INT_SUM
                                                         register is asserted the KEY will assert an
                                                         interrupt. */
        uint64_t ked1_sbe                : 1;       /**< When set (1) and bit 2 of the KEY_INT_SUM
                                                         register is asserted the KEY will assert an
                                                         interrupt. */
        uint64_t ked0_dbe                : 1;       /**< When set (1) and bit 1 of the KEY_INT_SUM
                                                         register is asserted the KEY will assert an
                                                         interrupt. */
        uint64_t ked0_sbe                : 1;       /**< When set (1) and bit 0 of the KEY_INT_SUM
                                                         register is asserted the KEY will assert an
                                                         interrupt. */
#else
        uint64_t ked0_sbe                : 1;
        uint64_t ked0_dbe                : 1;
        uint64_t ked1_sbe                : 1;
        uint64_t ked1_dbe                : 1;
        uint64_t reserved                : 60;
#endif
    } s;
} cvmx_key_int_enb_t;


/**
 * KEY_INT_SUM = KEY's Interrupt Summary Register
 *  Contains the diffrent interrupt summary bits of the KEY.
 *
 * - Access using the CVMX_KEY_INT_SUM CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 60;      /**< Reserved */
        uint64_t ked1_dbe                : 1;
        uint64_t ked1_sbe                : 1;
        uint64_t ked0_dbe                : 1;
        uint64_t ked0_sbe                : 1;
#else
        uint64_t ked0_sbe                : 1;
        uint64_t ked0_dbe                : 1;
        uint64_t ked1_sbe                : 1;
        uint64_t ked1_dbe                : 1;
        uint64_t reserved                : 60;
#endif
    } s;
} cvmx_key_int_sum_t;


/**
 * L2C_BST0 = L2C BIST 0 CTL/STAT
 *
 * - Access using the CVMX_L2C_BST0 CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 45;      /**< RESERVED */
        uint64_t dtcnt                   : 13;      /**< DuTag BiST Counter (used to help isolate the failure)
                                                         [12]:    i (0=FORWARD/1=REVERSE pass)
                                                         [11:10]: j (Pattern# 1 of 4)
                                                         [9:4]:   k (DT Index 1 of 64)
                                                         [3:0]:   l (DT# 1 of 16 DTs) */
        uint64_t dt                      : 1;       /**< Bist Results for DuTAG RAM(s)
                                                         0: GOOD (or bist in progress/never run)
                                                         1: BAD */
        uint64_t stin_msk                : 1;       /**< Bist Results for STIN-MSK RAM
                                                         0: GOOD (or bist in progress/never run)
                                                         1: BAD */
        uint64_t wlb_dat                 : 4;       /**< Bist Results for WLB-DAT RAM [DP0-3]
                                                         0: GOOD (or bist in progress/never run)
                                                         1: BAD */
#else
        uint64_t wlb_dat                 : 4;
        uint64_t stin_msk                : 1;
        uint64_t dt                      : 1;
        uint64_t dtcnt                   : 13;
        uint64_t reserved                : 45;
#endif
    } s;
} cvmx_l2c_bst0_t;


/**
 * L2C_BST1 = L2C BIST 1 CTL/STAT
 *
 * - Access using the CVMX_L2C_BST1 CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 48;      /**< RESERVED */
        uint64_t vwdf                    : 4;       /**< Bist Results for VWDF RAMs
                                                         0: GOOD (or bist in progress/never run)
                                                         1: BAD */
        uint64_t lrf                     : 2;       /**< Bist Results for LRF RAMs (PLC+ILC)
                                                         0: GOOD (or bist in progress/never run)
                                                         1: BAD */
        uint64_t vab_vwcf                : 1;       /**< Bist Results for VAB VWCF_MEM
                                                         0: GOOD (or bist in progress/never run)
                                                         1: BAD */
        uint64_t l2t                     : 9;       /**< Bist Results for L2T (USE+8SET RAMs)
                                                         0: GOOD (or bist in progress/never run)
                                                         1: BAD */
#else
        uint64_t l2t                     : 9;
        uint64_t vab_vwcf                : 1;
        uint64_t lrf                     : 2;
        uint64_t vwdf                    : 4;
        uint64_t reserved                : 48;
#endif
    } s;
} cvmx_l2c_bst1_t;


/**
 * L2C_BST2 = L2C BIST 2 CTL/STAT
 *
 * - Access using the CVMX_L2C_BST2 CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 48;      /**< RESERVED */
        uint64_t mrb                     : 4;       /**< Bist Results for MRB RAMs
                                                         0: GOOD (or bist in progress/never run)
                                                         1: BAD */
        uint64_t rmdf                    : 4;       /**< Bist Results for RMDF RAMs
                                                         0: GOOD (or bist in progress/never run)
                                                         1: BAD */
        uint64_t rhdf                    : 4;       /**< Bist Results for RHDF RAMs
                                                         0: GOOD (or bist in progress/never run)
                                                         1: BAD */
        uint64_t ipcbst                  : 1;       /**< Bist Results for RFB IPC RAM
                                                         1: BAD */
        uint64_t picbst                  : 1;       /**< Bist Results for RFB PIC RAM
                                                         1: BAD */
        uint64_t xrdmsk                  : 1;       /**< Bist Results for RFB XRD-MSK RAM
                                                         0: GOOD (or bist in progress/never run)
                                                         1: BAD */
        uint64_t xrddat                  : 1;       /**< Bist Results for RFB XRD-DAT RAM
                                                         0: GOOD (or bist in progress/never run)
                                                         1: BAD */
#else
        uint64_t xrddat                  : 1;
        uint64_t xrdmsk                  : 1;
        uint64_t picbst                  : 1;
        uint64_t ipcbst                  : 1;
        uint64_t rhdf                    : 4;
        uint64_t rmdf                    : 4;
        uint64_t mrb                     : 4;
        uint64_t reserved                : 48;
#endif
    } s;
} cvmx_l2c_bst2_t;


/**
 * Specify the RSL base addresses for the block
 *                   L2C_CFG = L2C Configuration
 *  Description:
 *
 * - Access using the CVMX_L2C_CFG CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 50;      /**< RESERVED */
        uint64_t fpexp                   : 4;       /**< [CYA] Forward Progress Counter Exponent
                                                         NOTE: Should NOT be exposed to customer! [FOR DEBUG ONLY]
                                                         When FPEN is enabled and the LFB is empty, the
                                                         forward progress counter (FPCNT) is initialized to:
                                                         FPCNT[24:0] = 2^(9+FPEXP)
                                                         When the LFB is non-empty the FPCNT is decremented
                                                         (every eclk interval). If the FPCNT reaches zero,
                                                         the LFB no longer accepts new requests until either
                                                         a) all of the current LFB entries have completed
                                                         (to ensure forward progress).
                                                         b) FPEMPTY=0 and another forward progress count
                                                         interval timeout expires.
                                                         EXAMPLE USE: If FPEXP=2, the FPCNT = 2048 eclks.
                                                         (For eclk=500MHz(2ns), this would be ~4us). */
        uint64_t fpempty                 : 1;       /**< [CYA] Forward Progress Counter Empty
                                                         NOTE: Should NOT be exposed to customer! [FOR DEBUG ONLY]
                                                         When set, if the forward progress counter expires,
                                                         all new LFB-NQs are stopped UNTIL all current LFB
                                                         entries have completed.
                                                         When clear, if the forward progress counter expires,
                                                         all new LFB-NQs are stopped UNTIL either
                                                         a) all current LFB entries have completed.
                                                         b) another forward progress interval expires
                                                         NOTE: We may want to FREEZE/HANG the system when
                                                         we encounter an LFB entry cannot complete, and there
                                                         may be times when we want to allow further LFB-NQs
                                                         to be permitted to help in further analyzing the
                                                         source */
        uint64_t fpen                    : 1;       /**< [CYA] Forward Progress Counter Enable
                                                         NOTE: Should NOT be exposed to customer! [FOR DEBUG ONLY]
                                                         When set, enables the Forward Progress Counter to
                                                         prevent new LFB entries from enqueueing until ALL
                                                         current LFB entries have completed. */
        uint64_t idxalias                : 1;       /**< L2C Index Alias Enable
                                                         When set, the L2 Tag/Data Store will alias the 10-bit
                                                         index with the low order 10-bits of the tag.
                                                         index[16:7] =  (tag[26:17] ^ index[16:7])
                                                         NOTE: This bit must only be modified at boot time,
                                                         when it can be guaranteed that no blocks have been
                                                         loaded into the L2 Cache.
                                                         The index aliasing is a performance enhancement feature
                                                         which reduces the L2 cache thrashing experienced for
                                                         regular stride references.
                                                         NOTE: The index alias is stored in the LFB and VAB, and
                                                         its effects are reversed for memory references (Victims,
                                                         STT-Misses and Read-Misses) */
        uint64_t mwf_crd                 : 4;       /**< MWF Credit Threshold: When the remaining MWF credits
                                                         become less than or equal to the MWF_CRD, the L2C will
                                                         assert l2c__lmi_mwd_hiwater_a to signal the LMC to give
                                                         writes (victims) higher priority. */
        uint64_t rsp_arb_mode            : 1;       /**< RSP Arbitration Mode:
                                                         0: Fixed Priority [HP=RFB, RMCF, RHCF, STRSP, LP=STRSC]
                                                         1: Round Robin: [RFB(reflected I/O), RMCF(RdMiss),
                                                         RHCF(RdHit), STRSP(ST RSP w/ invalidate),
                                                         STRSC(ST RSP no invalidate)] */
        uint64_t rfb_arb_mode            : 1;       /**< RFB Arbitration Mode:
                                                         0: Fixed Priority -
                                                         IOB->PP requests are higher priority than
                                                         PP->IOB requests
                                                         1: Round Robin -
                                                         I/O requests from PP and IOB are serviced in
                                                         round robin */
        uint64_t lrf_arb_mode            : 1;       /**< RF Arbitration Mode:
                                                         0: Fixed Priority -
                                                         IOB memory requests are higher priority than PP
                                                         memory requests.
                                                         1: Round Robin -
                                                         Memory requests from PP and IOB are serviced in
                                                         round robin. */
#else
        uint64_t lrf_arb_mode            : 1;
        uint64_t rfb_arb_mode            : 1;
        uint64_t rsp_arb_mode            : 1;
        uint64_t mwf_crd                 : 4;
        uint64_t idxalias                : 1;
        uint64_t fpen                    : 1;
        uint64_t fpempty                 : 1;
        uint64_t fpexp                   : 4;
        uint64_t reserved                : 50;
#endif
    } s;
} cvmx_l2c_cfg_t;


/**
 * L2C_DBG = L2C DEBUG Register
 *  Description: L2C Tag/Data Store Debug Register
 * NOTES:
 *     (1) When using the L2T, L2D or FINV Debug probe feature, the LDD instruction WILL NOT update the DuTags.
 *     (2) L2T, L2D, FINV MUST BE mutually exclusive (only one set)
 *     (3) Force Invalidate is intended as a means for SW to invalidate the L2 Cache while also writing back
 *         dirty data to memory to maintain coherency.
 *     (4) L2 Cache Lock Down feature MUST BE disabled (L2C_LCKBASE[LCK_ENA]=0) if ANY of the L2C debug
 *         features (L2T, L2D, FINV) are enabled.
 *
 * - Access using the CVMX_L2C_DBG CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 49;      /**< RESERVED */
        uint64_t lfb_enum                : 4;       /**< Specifies the LFB Entry# which is to be captured. */
        uint64_t lfb_dmp                 : 1;       /**< LFB Dump Enable: When written(=1), the contents of
                                                         the LFB specified by LFB_ENUM[3:0] are captured
                                                         into the L2C_LFB(0/1/2) registers. */
        uint64_t ppnum                   : 4;       /**< When L2C_DBG[L2T] or L2C_DBG[L2D] or L2C_DBG[FINV]
                                                         is enabled, this field determines which one-of-16
                                                         PPs is selected as the diagnostic PP. */
        uint64_t set                     : 3;       /**< When L2C_DBG[L2T] or L2C_DBG[L2D] or L2C_DBG[FINV]
                                                         is enabled, this field determines 1-of-8 targeted
                                                         sets to act upon. */
        uint64_t finv                    : 1;       /**< Flush-Invalidate.
                                                         When flush-invalidate is enable (FINV=1), all STF
                                                         write commands generated from the diagnostic PP
                                                         (L2C_DBG[PPNUM]) will invalidate the specified set
                                                         (L2C_DBG[SET]) at the index specified in the STF
                                                         address[16:7]. If a dirty block is detected (D=1), it is
                                                         written back to memory. The contents of the invalid
                                                         L2 Cache line is also 'scrubbed' with the STF write data.
                                                         NOTE: An STF command with write data=ZEROES can be
                                                         generated by SW using the Prefetch instruction with
                                                         Hint=30d "prepare for Store", followed by a SYNCW.
                                                         What is seen at the L2C as an STF w/wrdcnt=0 with all
                                                         of its mask bits clear (indicates zero-fill data).
                                                         A flush-invalidate will 'force-hit' the L2 cache at
                                                         [index,set] and invalidate the entry (V=0/D=0/U=0).
                                                         If the cache block is dirty, it is also written back
                                                         to memory. The DuTag state is probed/updated as normal
                                                         for an STF request.
                                                         TYPICAL APPLICATIONS:
                                                         1) L2 Tag/Data ECC SW Recovery
                                                         2) Cache Unlocking
                                                         NOTE: A Flush-invalidate to a LOCKED cache line will
                                                         always write the LOCKED line back to memory (since
                                                         LOCKED tag state is encoded as V=0/D=1). */
        uint64_t l2d                     : 1;       /**< When enabled (and L2C_DBG[L2T]=0), fill data is
                                                         returned directly from the L2 Data Store
                                                         (regardless of hit/miss) when an LDD instruction is
                                                         issued from a PP determined by the L2C_DBG[PPNUM]
                                                         field. The selected set# is determined by the
                                                         L2C_DBG[SET] field, and the index is determined
                                                         from the address[16:7] associated with the LDD
                                                         instruction.
                                                         This 'force-hit' will NOT alter the current L2 Tag
                                                         state OR the DuTag state. */
        uint64_t l2t                     : 1;       /**< When enabled, L2 Tag information [V,D,L,U,TAG]
                                                         is returned on the low order bits of the data bus
                                                         when an LDD instruction is issued from a PP determined
                                                         by the L2C_DBG[PPNUM] field. The selected
                                                         set# is determined by the L2C_DBG[SET] field, and
                                                         the index is determined from the address[16:7]
                                                         associated with the LDD instruction.
                                                         This 'force-hit' will NOT alter the current L2 Tag
                                                         state OR the DuTag state. */
#else
        uint64_t l2t                     : 1;
        uint64_t l2d                     : 1;
        uint64_t finv                    : 1;
        uint64_t set                     : 3;
        uint64_t ppnum                   : 4;
        uint64_t lfb_dmp                 : 1;
        uint64_t lfb_enum                : 4;
        uint64_t reserved                : 49;
#endif
    } s;
} cvmx_l2c_dbg_t;


/**
 * L2C_DUT = L2C DUTAG Register
 *  Description: L2C Duplicate Tag State Register
 * NOTES:
 *     (1) When using the L2T, L2D or FINV Debug probe feature, an LDD instruction issued by the diagnostic PP
 *         WILL NOT update the DuTags.
 *     (2) L2T, L2D, FINV MUST BE mutually exclusive (only one enabled at a time).
 *     (3) Force Invalidate is intended as a means for SW to invalidate the L2 Cache while also writing back
 *         dirty data to memory to maintain coherency. (A side effect of FINV is that an LDD miss fill is
 *         launched which fills data into the L2 DS).
 *
 * - Access using the CVMX_L2C_DUT CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved1               : 32;      /**< RESERVED */
        uint64_t dtena                   : 1;       /**< DuTag Diagnostic read enable.
                                                         When L2C_DBG[DTENA]=1, all LDD (D-stream load)
                                                         commands issued from the diagnostic PP
                                                         (L2C_ DBG[PPNUM]) will capture that PP's DuTag state
                                                         (V|L1TAG) into the L2C_DUT CSR register. The DuTag
                                                         Set# to capture is extracted from the LDD
                                                         address[5:0]. The diagnostic PP would issue the
                                                         LDD then read the L2C_DUT register (one at a time).
                                                         This LDD 'force-hit' will NOT alter the current L2
                                                         Tag State OR the DuTag state.
                                                         The fill data is returned directly from the L2 Data
                                                         Store (regardless of hit/miss) when an LDD instruction
                                                         is issued from a PP determined by the L2C_DBG[PPNUM]
                                                         field. The selected set# is determined by the
                                                         L2C_DBG[SET] field, and the index is determined
                                                         from the address[16:7] associated with the LDD
                                                         instruction.
                                                         This 'force-hit' will NOT alter the current L2 Tag
                                                         state OR the DuTag state. */
        uint64_t reserved2               : 1;       /**< RESERVED */
        uint64_t dt_vld                  : 1;       /**< Duplicate L1 Tag Valid bit latched in for previous
                                                         LDD instruction sourced by diagnostic PP. */
        uint64_t dt_tag                  : 29;      /**< Duplicate L1 Tag[35:7] latched in for previous LDD
                                                         instruction sourced by diagnostic PP. */
#else
        uint64_t dt_tag                  : 29;
        uint64_t dt_vld                  : 1;
        uint64_t reserved2               : 1;
        uint64_t dtena                   : 1;
        uint64_t reserved1               : 32;
#endif
    } s;
} cvmx_l2c_dut_t;


/**
 * L2C_LCKBASE = L2C LockDown Base Register
 *  Description: L2C LockDown Base Register
 * NOTES:
 *     (1) SW RESTRICTION #1: SW must manage the L2 Data Store lockdown space such that at least 1
 *         set per cache line remains in the 'unlocked' (normal) state to allow general caching operations.
 *         If SW violates this restriction, a status bit is set (LCK_ERR) and an interrupt is posted.
 *         [this limits the total lockdown space to 7/8ths of the total L2 data store = 896KB]
 *     (2) IOB initiated LDI commands are ignored (only PP initiated LDI/LDD commands are considered
 *         for lockdown).
 *     (3) To 'unlock' a locked cache line, SW can use the FLUSH-INVAL CSR mechanism (see L2C_DBG[FINV]).
 *     (4) LCK_ENA MUST only be activated when debug modes are disabled (L2C_DBG[L2T], L2C_DBG[L2D], L2C_DBG[FINV]).
 *
 * - Access using the CVMX_L2C_LCKBASE CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved1               : 33;      /**< RESERVED */
        uint64_t lck_base                : 27;      /**< Base Memory block address[33:7]. Specifies the
                                                         starting address of the lockdown region. */
        uint64_t reserved2               : 3;       /**< RESERVED */
        uint64_t lck_ena                 : 1;       /**< L2 Cache Lock Enable
                                                         When the LCK_ENA=1, all LDI(I-stream Load) or
                                                         LDD(D-Stream load) commands issued from the
                                                         diagnostic PP (specified by the L2C_DBG[PPNUM]),
                                                         which fall within a predefined lockdown address
                                                         range (specified by: [lck_base:lck_base+lck_offset])
                                                         are LOCKED in the L2 cache. The LOCKED state is
                                                         encoded in the L2 Tag as (V=0/D=1/U=1).
                                                         If the LOCK request L2-Hits, then data is returned
                                                         from the L2 and the hit set is updated to the
                                                         LOCKED state.
                                                         If the LOCK request L2-Misses, a replacment set is chosen.
                                                         If the replacement set contains a dirty-victim it is
                                                         written back to memory. Memory read data is then written
                                                         into the replacement set, and the replacment SET is
                                                         updated to the LOCKED state.
                                                         NOTE: SETs that contain LOCKED addresses are
                                                         excluded from the replacement set selection algorithm.
                                                         NOTE: The LDD will allocate the DuTag as normal. */
#else
        uint64_t lck_ena                 : 1;
        uint64_t reserved2               : 3;
        uint64_t lck_base                : 27;
        uint64_t reserved1               : 33;
#endif
    } s;
} cvmx_l2c_lckbase_t;


/**
 * L2C_LCKOFF = L2C LockDown OFFSET Register
 *  Description: L2C LockDown OFFSET Register
 * NOTES:
 *     (1) The generation of the end lockdown block address will 'wrap'.
 *     (2) The minimum granularity for lockdown is 1 cache line (= 128B block)
 *
 * - Access using the CVMX_L2C_LCKOFF CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 54;      /**< RESERVED */
        uint64_t lck_offset              : 10;      /**< LockDown block Offset. Used in determining
                                                         the ending block address of the lockdown
                                                         region:
                                                         End Lockdown block Address[33:7] =
                                                         LCK_BASE[33:7]+LCK_OFFSET[9:0] */
#else
        uint64_t lck_offset              : 10;
        uint64_t reserved                : 54;
#endif
    } s;
} cvmx_l2c_lckoff_t;


/**
 * L2C_LFB0 = L2C LFB DEBUG 0 Register
 *  Description: L2C LFB Contents (Status Bits)
 *
 * - Access using the CVMX_L2C_LFB0 CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 32;      /**< RESERVED */
        uint64_t stcpnd                  : 1;       /**< LFB STC Pending Status */
        uint64_t stpnd                   : 1;       /**< LFB ST* Pending Status */
        uint64_t stinv                   : 1;       /**< LFB ST* Invalidate Status */
        uint64_t stcfl                   : 1;       /**< LFB STC=FAIL Status */
        uint64_t vam                     : 1;       /**< Valid Full Address Match Status */
        uint64_t inxt                    : 4;       /**< Next LFB Pointer */
        uint64_t itl                     : 1;       /**< LFB Tail of List Indicator */
        uint64_t ihd                     : 1;       /**< LFB Head of List Indicator */
        uint64_t set                     : 3;       /**< SET# used for DS-OP (hit=hset/miss=rset) */
        uint64_t vabnum                  : 4;       /**< VAB# used for LMC Miss Launch */
        uint64_t sid                     : 9;       /**< LFB Source ID */
        uint64_t cmd                     : 4;       /**< LFB Command */
        uint64_t vld                     : 1;       /**< LFB Valid */
#else
        uint64_t vld                     : 1;
        uint64_t cmd                     : 4;
        uint64_t sid                     : 9;
        uint64_t vabnum                  : 4;
        uint64_t set                     : 3;
        uint64_t ihd                     : 1;
        uint64_t itl                     : 1;
        uint64_t inxt                    : 4;
        uint64_t vam                     : 1;
        uint64_t stcfl                   : 1;
        uint64_t stinv                   : 1;
        uint64_t stpnd                   : 1;
        uint64_t stcpnd                  : 1;
        uint64_t reserved                : 32;
#endif
    } s;
} cvmx_l2c_lfb0_t;


/**
 * L2C_LFB1 = L2C LFB DEBUG 1 Register
 *  Description: L2C LFB Contents (Wait Bits)
 *
 * - Access using the CVMX_L2C_LFB1 CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 45;      /**< RESERVED */
        uint64_t dsgoing                 : 1;       /**< LFB DS Going (in flight) */
        uint64_t bid                     : 2;       /**< LFB DS Bid# */
        uint64_t wtrsp                   : 1;       /**< LFB Waiting for RSC Response [FILL,STRSP] completion */
        uint64_t wtdw                    : 1;       /**< LFB Waiting for DS-WR completion */
        uint64_t wtdq                    : 1;       /**< LFB Waiting for LFB-DQ */
        uint64_t wtwhp                   : 1;       /**< LFB Waiting for Write-Hit Partial L2 DS-WR completion */
        uint64_t wtwhf                   : 1;       /**< LFB Waiting for Write-Hit Full L2 DS-WR completion */
        uint64_t wtwrm                   : 1;       /**< LFB Waiting for Write-Miss L2 DS-WR completion */
        uint64_t wtstm                   : 1;       /**< LFB Waiting for Write-Miss L2 DS-WR completion */
        uint64_t wtrda                   : 1;       /**< LFB Waiting for Read-Miss L2 DS-WR completion */
        uint64_t wtstdt                  : 1;       /**< LFB Waiting for all ST write Data to arrive on XMD bus */
        uint64_t wtstrsp                 : 1;       /**< LFB Waiting for ST RSC/RSD to be issued on RSP
                                                         (with invalidates) */
        uint64_t wtstrsc                 : 1;       /**< LFB Waiting for ST RSC-Only to be issued on RSP
                                                         (no-invalidates) */
        uint64_t wtvtm                   : 1;       /**< LFB Waiting for Victim Read L2 DS-RD completion */
        uint64_t wtmfl                   : 1;       /**< LFB Waiting for Memory Fill completion to MRB */
        uint64_t prbrty                  : 1;       /**< Probe-Retry Detected - waiting for probe completion */
        uint64_t wtprb                   : 1;       /**< LFB Waiting for Probe */
        uint64_t vld                     : 1;       /**< LFB Valid */
#else
        uint64_t vld                     : 1;
        uint64_t wtprb                   : 1;
        uint64_t prbrty                  : 1;
        uint64_t wtmfl                   : 1;
        uint64_t wtvtm                   : 1;
        uint64_t wtstrsc                 : 1;
        uint64_t wtstrsp                 : 1;
        uint64_t wtstdt                  : 1;
        uint64_t wtrda                   : 1;
        uint64_t wtstm                   : 1;
        uint64_t wtwrm                   : 1;
        uint64_t wtwhf                   : 1;
        uint64_t wtwhp                   : 1;
        uint64_t wtdq                    : 1;
        uint64_t wtdw                    : 1;
        uint64_t wtrsp                   : 1;
        uint64_t bid                     : 2;
        uint64_t dsgoing                 : 1;
        uint64_t reserved                : 45;
#endif
    } s;
} cvmx_l2c_lfb1_t;


/**
 * L2C_LFB2 = L2C LFB DEBUG 2 Register
 *  Description: L2C LFB Contents Tag/Index
 *
 * - Access using the CVMX_L2C_LFB2 CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 36;      /**< RESERVED */
        uint64_t lfb_tag                 : 18;      /**< LFB TAG[33:17] */
        uint64_t lfb_idx                 : 10;      /**< LFB IDX[16:7] */
#else
        uint64_t lfb_idx                 : 10;
        uint64_t lfb_tag                 : 18;
        uint64_t reserved                : 36;
#endif
    } s;
} cvmx_l2c_lfb2_t;


/**
 * L2C_PFC0 = L2 Performance Counter #0
 *  Description:
 *
 * - Access using the CVMX_L2C_PFC0 CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 28;      /**< RESERVED */
        uint64_t pfcnt0                  : 36;      /**< Performance Counter #0 */
#else
        uint64_t pfcnt0                  : 36;
        uint64_t reserved                : 28;
#endif
    } s;
} cvmx_l2c_pfc0_t;


/**
 * L2C_PFC1 = L2 Performance Counter #1
 *  Description:
 *
 * - Access using the CVMX_L2C_PFC1 CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 28;      /**< RESERVED */
        uint64_t pfcnt1                  : 36;      /**< Performance Counter #1 */
#else
        uint64_t pfcnt1                  : 36;
        uint64_t reserved                : 28;
#endif
    } s;
} cvmx_l2c_pfc1_t;


/**
 * L2C_PFC2 = L2 Performance Counter #2
 *  Description:
 *
 * - Access using the CVMX_L2C_PFC2 CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 28;      /**< RESERVED */
        uint64_t pfcnt2                  : 36;      /**< Performance Counter #2 */
#else
        uint64_t pfcnt2                  : 36;
        uint64_t reserved                : 28;
#endif
    } s;
} cvmx_l2c_pfc2_t;


/**
 * L2C_PFC3 = L2 Performance Counter #3
 *  Description:
 *
 * - Access using the CVMX_L2C_PFC3 CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 28;      /**< RESERVED */
        uint64_t pfcnt3                  : 36;      /**< Performance Counter #3 */
#else
        uint64_t pfcnt3                  : 36;
        uint64_t reserved                : 28;
#endif
    } s;
} cvmx_l2c_pfc3_t;


/**
 * L2C_PFCTL = L2 Performance Counter Control Register
 *  Description: Controls the actions of the 4 Performance Counters
 * NOTES:
 *    - There are four 36b performance counter registers which can simultaneously count events.
 *      Each Counter's event is programmably selected via the corresponding CNTxSEL field:
 *            CNTxSEL[5:0]    Event
 *         -----------------+-----------------------
 *                  0       | Cycles
 *                  1       | L2 Instruction Miss
 *                  2       | L2 Instruction Hit
 *                  3       | L2 Data Miss
 *                  4       | L2 Data Hit
 *                  5       | L2 Miss (I/D)
 *                  6       | L2 Hit (I/D)
 *                  7       | L2 Victim Buffer Hit (Retry Probe)
 *                  8       | LFB-NQ Index Conflict
 *                  9       | L2 Tag Probe (issued - could be VB-Retried)
 *                 10       | L2 Tag Update (completed - note: some CMD types do not update)
 *                 11       | L2 Tag Probe Completed (beyond VB-RTY window)
 *                 12       | L2 Tag Dirty Victim
 *                 13       | L2 Data Store NOP
 *                 14       | L2 Data Store READ
 *                 15       | L2 Data Store WRITE
 *                 16       | Memory Fill Data valid
 *                 17       | Memory Write Request
 *                 18       | Memory Read Request
 *                 19       | Memory Write Data valid
 *                 20       | XMC NOP
 *                 21       | XMC LDT
 *                 22       | XMC LDI
 *                 23       | XMC LDD
 *                 24       | XMC STF
 *                 25       | XMC STT
 *                 26       | XMC STP
 *                 27       | XMC STC
 *                 28       | XMC DWB
 *                 29       | XMC PL2
 *                 30       | XMC PSL1
 *                 31       | XMC IOBLD
 *                 32       | XMC IOBST
 *                 33       | XMC IOBDMA
 *                 34       | XMC IOBRSP
 *                 35       | XMD Bus valid (all)
 *                 36       | XMD Bus valid (DST=L2C) Memory Data
 *                 37       | XMD Bus valid (DST=IOB) REFL Data
 *                 38       | XMD Bus valid (DST=PP) IOBRSP Data
 *                 39       | RSC NOP
 *                 40       | RSC STDN
 *                 41       | RSC FILL
 *                 42       | RSC REFL
 *                 43       | RSC STIN
 *                 44       | RSC SCIN
 *                 45       | RSC SCFL
 *                 46       | RSC SCDN
 *                 47       | RSD Data Valid
 *                 48       | RSD Data Valid (FILL)
 *                 49       | RSD Data Valid (STRSP)
 *                 50       | RSD Data Valid (REFL)
 *                 51       | LRF-REQ (LFB-NQ)
 *                 52       | DT RD-ALLOC
 *                 53       | DT WR-INVAL
 *
 * - Access using the CVMX_L2C_PFCTL CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 32;      /**< RESERVED */
        uint64_t cnt3ena                 : 1;       /**< Performance Counter 3 Enable
                                                         When the CSR write occur, if this bit is set,
                                                         the performance counter is cleared. */
        uint64_t cnt3clr                 : 1;       /**< Performance Counter 3 Clear
                                                         When the CSR write occurs, if this bit is set,
                                                         the performance counter is cleared. Otherwise,
                                                         it will resume counting from its current value. */
        uint64_t cnt3sel                 : 6;       /**< Performance Counter 3 Event Selector
                                                         (see list of selectable events to count in NOTES) */
        uint64_t cnt2ena                 : 1;       /**< Performance Counter 2 Enable
                                                         When the CSR write occur, if this bit is set,
                                                         the performance counter is cleared. */
        uint64_t cnt2clr                 : 1;       /**< Performance Counter 2 Clear
                                                         When the CSR write occurs, if this bit is set,
                                                         the performance counter is cleared. Otherwise,
                                                         it will resume counting from its current value. */
        uint64_t cnt2sel                 : 6;       /**< Performance Counter 2 Event Selector
                                                         (see list of selectable events to count in NOTES) */
        uint64_t cnt1ena                 : 1;       /**< Performance Counter 1 Enable
                                                         When the CSR write occur, if this bit is set,
                                                         the performance counter is cleared. */
        uint64_t cnt1clr                 : 1;       /**< Performance Counter 1 Clear
                                                         When the CSR write occurs, if this bit is set,
                                                         the performance counter is cleared. Otherwise,
                                                         it will resume counting from its current value. */
        uint64_t cnt1sel                 : 6;       /**< Performance Counter 1 Event Selector
                                                         (see list of selectable events to count in NOTES) */
        uint64_t cnt0ena                 : 1;       /**< Performance Counter 0 Enable
                                                         When the CSR write occur, if this bit is set,
                                                         the performance counter is cleared. */
        uint64_t cnt0clr                 : 1;       /**< Performance Counter 0 Clear
                                                         When the CSR write occurs, if this bit is set,
                                                         the performance counter is cleared. Otherwise,
                                                         it will resume counting from its current value. */
        uint64_t cnt0sel                 : 6;       /**< Performance Counter 0 Event Selector
                                                         (see list of selectable events to count in NOTES) */
#else
        uint64_t cnt0sel                 : 6;
        uint64_t cnt0clr                 : 1;
        uint64_t cnt0ena                 : 1;
        uint64_t cnt1sel                 : 6;
        uint64_t cnt1clr                 : 1;
        uint64_t cnt1ena                 : 1;
        uint64_t cnt2sel                 : 6;
        uint64_t cnt2clr                 : 1;
        uint64_t cnt2ena                 : 1;
        uint64_t cnt3sel                 : 6;
        uint64_t cnt3clr                 : 1;
        uint64_t cnt3ena                 : 1;
        uint64_t reserved                : 32;
#endif
    } s;
} cvmx_l2c_pfctl_t;


/**
 * L2C_SPAR0 = L2 Set Partitioning Register (PP0-3)
 *  Description: L2 Set Partitioning Register
 *  NOTES:
 *     - When a bit is set in the UMSK'x' register, a memory command issued from PP='x' will NOT select that
 *       set for replacement.
 *     - There should ALWAYS BE at least 1 bit clear in each UMSK'x' register for proper L2 cache operation
 *
 * - Access using the CVMX_L2C_SPAR0 CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 32;      /**< RESERVED */
        uint64_t umsk3                   : 8;       /**< PP[3] L2 'DO NOT USE' set partition mask */
        uint64_t umsk2                   : 8;       /**< PP[2] L2 'DO NOT USE' set partition mask */
        uint64_t umsk1                   : 8;       /**< PP[1] L2 'DO NOT USE' set partition mask */
        uint64_t umsk0                   : 8;       /**< PP[0] L2 'DO NOT USE' set partition mask */
#else
        uint64_t umsk0                   : 8;
        uint64_t umsk1                   : 8;
        uint64_t umsk2                   : 8;
        uint64_t umsk3                   : 8;
        uint64_t reserved                : 32;
#endif
    } s;
} cvmx_l2c_spar0_t;


/**
 * L2C_SPAR1 = L2 Set Partitioning Register (PP4-7)
 *  Description: L2 Set Partitioning Register
 *  NOTES:
 *     - When a bit is set in the UMSK'x' register, a memory command issued from PP='x' will NOT select that
 *       set for replacement.
 *     - There should ALWAYS BE at least 1 bit clear in each UMSK'x' register for proper L2 cache operation
 *
 * - Access using the CVMX_L2C_SPAR1 CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 32;      /**< RESERVED */
        uint64_t umsk7                   : 8;       /**< PP[7] L2 'DO NOT USE' set partition mask */
        uint64_t umsk6                   : 8;       /**< PP[6] L2 'DO NOT USE' set partition mask */
        uint64_t umsk5                   : 8;       /**< PP[5] L2 'DO NOT USE' set partition mask */
        uint64_t umsk4                   : 8;       /**< PP[4] L2 'DO NOT USE' set partition mask */
#else
        uint64_t umsk4                   : 8;
        uint64_t umsk5                   : 8;
        uint64_t umsk6                   : 8;
        uint64_t umsk7                   : 8;
        uint64_t reserved                : 32;
#endif
    } s;
} cvmx_l2c_spar1_t;


/**
 * L2C_SPAR2 = L2 Set Partitioning Register (PP8-11)
 *  Description: L2 Set Partitioning Register
 * NOTES:
 *     - When a bit is set in the UMSK'x' register, a memory command issued from PP='x' will NOT select that
 *       set for replacement.
 *     - There should ALWAYS BE at least 1 bit clear in each UMSK'x' register for proper L2 cache operation
 *
 * - Access using the CVMX_L2C_SPAR2 CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 32;      /**< RESERVED */
        uint64_t umsk11                  : 8;       /**< PP[11] L2 'DO NOT USE' set partition mask */
        uint64_t umsk0                   : 8;       /**< PP[10] L2 'DO NOT USE' set partition mask */
        uint64_t umsk9                   : 8;       /**< PP[9] L2 'DO NOT USE' set partition mask */
        uint64_t umsk8                   : 8;       /**< PP[8] L2 'DO NOT USE' set partition mask */
#else
        uint64_t umsk8                   : 8;
        uint64_t umsk9                   : 8;
        uint64_t umsk0                   : 8;
        uint64_t umsk11                  : 8;
        uint64_t reserved                : 32;
#endif
    } s;
} cvmx_l2c_spar2_t;


/**
 * L2C_SPAR3 = L2 Set Partitioning Register (PP12-15)
 *  Description: L2 Set Partitioning Register
 * NOTES:
 *     - When a bit is set in the UMSK'x' register, a memory command issued from PP='x' will NOT select that
 *       set for replacement.
 *     - There should ALWAYS BE at least 1 bit clear in each UMSK'x' register for proper L2 cache operation
 *
 * - Access using the CVMX_L2C_SPAR3 CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 32;      /**< RESERVED */
        uint64_t umsk15                  : 8;       /**< PP[15] L2 'DO NOT USE' set partition mask */
        uint64_t umsk14                  : 8;       /**< PP[14] L2 'DO NOT USE' set partition mask */
        uint64_t umsk13                  : 8;       /**< PP[13] L2 'DO NOT USE' set partition mask */
        uint64_t umsk12                  : 8;       /**< PP[12] L2 'DO NOT USE' set partition mask */
#else
        uint64_t umsk12                  : 8;
        uint64_t umsk13                  : 8;
        uint64_t umsk14                  : 8;
        uint64_t umsk15                  : 8;
        uint64_t reserved                : 32;
#endif
    } s;
} cvmx_l2c_spar3_t;


/**
 * L2C_SPAR4 = L2 Set Partitioning Register (IOB)
 *  Description: L2 Set Partitioning Register
 * NOTES:
 *     - When a bit is set in the UMSK'x' register, a memory command issued from PP='x' will NOT select that
 *       set for replacement.
 *     - There should ALWAYS BE at least 1 bit clear in each UMSK'x' register for proper L2 cache operation
 *
 * - Access using the CVMX_L2C_SPAR4 CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 56;      /**< RESERVED */
        uint64_t umskiob                 : 8;       /**< IOB L2 'DO NOT USE' set partition mask */
#else
        uint64_t umskiob                 : 8;
        uint64_t reserved                : 56;
#endif
    } s;
} cvmx_l2c_spar4_t;


/**
 * L2D_BST0 = L2C Data Store QUAD0 BIST Status Register
 *
 * - Access using the CVMX_L2D_BST0 CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 29;      /**< RESERVED */
        uint64_t ftl                     : 1;       /**< L2C Data Store Fatal Defect(across all QUADs)
                                                         2 or more columns were detected bad across all
                                                         QUADs[0-3]. Please refer to individual quad failures
                                                         for bad column = 0x7e to determine which QUAD was in
                                                         error. */
        uint64_t q0stat                  : 34;      /**< Bist Results for QUAD0
                                                         Failure #1 Status
                                                         [16:14] bad bank
                                                         [13:7] bad high column
                                                         [6:0] bad low column
                                                         Failure #2 Status
                                                         [33:31] bad bank
                                                         [30:24] bad high column
                                                         [23:17] bad low column
                                                         NOTES: For bad high/low column reporting:
                                                         0x7f:   No failure
                                                         0x7e:   Fatal Defect: 2 or more bad columns
                                                         0-0x45: Bad column
                                                         NOTE: If there are less than 2 failures then the
                                                         bad bank will be 0x7. */
#else
        uint64_t q0stat                  : 34;
        uint64_t ftl                     : 1;
        uint64_t reserved                : 29;
#endif
    } s;
} cvmx_l2d_bst0_t;


/**
 * L2D_BST1 = L2C Data Store QUAD1 BIST Status Register
 *
 * - Access using the CVMX_L2D_BST1 CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 30;      /**< RESERVED */
        uint64_t q1stat                  : 34;      /**< Bist Results for QUAD1
                                                         Failure #1 Status
                                                         [16:14] bad bank
                                                         [13:7] bad high column
                                                         [6:0] bad low column
                                                         Failure #2 Status
                                                         [33:31] bad bank
                                                         [30:24] bad high column
                                                         [23:17] bad low column
                                                         NOTES: For bad high/low column reporting:
                                                         0x7f:   No failure
                                                         0x7e:   Fatal Defect: 2 or more bad columns
                                                         0-0x45: Bad column
                                                         NOTE: If there are less than 2 failures then the
                                                         bad bank will be 0x7. */
#else
        uint64_t q1stat                  : 34;
        uint64_t reserved                : 30;
#endif
    } s;
} cvmx_l2d_bst1_t;


/**
 * L2D_BST2 = L2C Data Store QUAD2 BIST Status Register
 *
 * - Access using the CVMX_L2D_BST2 CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 30;      /**< RESERVED */
        uint64_t q2stat                  : 34;      /**< Bist Results for QUAD2
                                                         Failure #1 Status
                                                         [16:14] bad bank
                                                         [13:7] bad high column
                                                         [6:0] bad low column
                                                         Failure #2 Status
                                                         [33:31] bad bank
                                                         [30:24] bad high column
                                                         [23:17] bad low column
                                                         NOTES: For bad high/low column reporting:
                                                         0x7f:   No failure
                                                         0x7e:   Fatal Defect: 2 or more bad columns
                                                         0-0x45: Bad column
                                                         NOTE: If there are less than 2 failures then the
                                                         bad bank will be 0x7. */
#else
        uint64_t q2stat                  : 34;
        uint64_t reserved                : 30;
#endif
    } s;
} cvmx_l2d_bst2_t;


/**
 * L2D_BST3 = L2C Data Store QUAD3 BIST Status Register
 *
 * - Access using the CVMX_L2D_BST3 CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 30;      /**< RESERVED */
        uint64_t q2stat                  : 34;      /**< Bist Results for QUAD3
                                                         Failure #1 Status
                                                         [16:14] bad bank
                                                         [13:7] bad high column
                                                         [6:0] bad low column
                                                         Failure #2 Status
                                                         [33:31] bad bank
                                                         [30:24] bad high column
                                                         [23:17] bad low column
                                                         NOTES: For bad high/low column reporting:
                                                         0x7f:   No failure
                                                         0x7e:   Fatal Defect: 2 or more bad columns
                                                         0-0x45: Bad column
                                                         NOTE: If there are less than 2 failures then the
                                                         bad bank will be 0x7. */
#else
        uint64_t q2stat                  : 34;
        uint64_t reserved                : 30;
#endif
    } s;
} cvmx_l2d_bst3_t;


/**
 * L2D_ERR = L2 Data Errors
 *  Description: L2 Data ECC SEC/DED Errors and Interrupt Enable
 *
 * - Access using the CVMX_L2D_ERR CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 59;      /**< RESERVED */
        uint64_t ded_err                 : 1;       /**< L2D Double Error detected (DED) */
        uint64_t sec_err                 : 1;       /**< L2D Single Error corrected (SEC) */
        uint64_t ded_intena              : 1;       /**< L2 Data ECC Double Error Detect(DED) Interrupt Enable bit
                                                         When set, allows interrupts to be reported on double bit
                                                         (uncorrectable) errors from the L2 Data Arrays. */
        uint64_t sec_intena              : 1;       /**< L2 Data ECC Single Error Correct(SEC) Interrupt Enable bit
                                                         When set, allows interrupts to be reported on single bit
                                                         (correctable) errors from the L2 Data Arrays. */
        uint64_t ecc_ena                 : 1;       /**< L2 Data ECC Enable
                                                         When set, enables 10-bit SEC/DED codeword for 128bit L2
                                                         Data Arrays. */
#else
        uint64_t ecc_ena                 : 1;
        uint64_t sec_intena              : 1;
        uint64_t ded_intena              : 1;
        uint64_t sec_err                 : 1;
        uint64_t ded_err                 : 1;
        uint64_t reserved                : 59;
#endif
    } s;
} cvmx_l2d_err_t;


/**
 * L2D_FADR = L2 Failing Address
 *  Description: L2 Data ECC SEC/DED Failing Address
 * NOTES: When L2D_SEC_ERR or L2D_DED_ERR are set, this field contains the failing L2 Data store index.
 *        (A DED Error will always overwrite a SEC Error SYNDROME and FADR).
 *
 * - Access using the CVMX_L2D_FADR CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 46;      /**< RESERVED */
        uint64_t fowmsk                  : 4;       /**< Failing OW Mask (which one of 4 OWs contained SEC/DED
                                                         error) */
        uint64_t fset                    : 3;       /**< Failing SET# */
        uint64_t fadr                    : 11;      /**< Failing L2 Data Store Index (1of2K = 1/2 CL address) */
#else
        uint64_t fadr                    : 11;
        uint64_t fset                    : 3;
        uint64_t fowmsk                  : 4;
        uint64_t reserved                : 46;
#endif
    } s;
} cvmx_l2d_fadr_t;


/**
 * L2D_FSYN0 = L2 Failing Syndrome [OW0,OW1]
 *  Description: L2 Data ECC SEC/DED Failing Syndrome for lower cache line
 *  NOTES: When L2D_SEC_ERR or L2D_DED_ERR are set, this field contains the failing L2 Data ECC 10b syndrome.
 *        (A DED Error will always overwrite a SEC Error SYNDROME and FADR).
 *
 * - Access using the CVMX_L2D_FSYN0 CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 44;      /**< RESERVED */
        uint64_t fsyn_ow1                : 10;      /**< Failing L2 Data Store SYNDROME OW[1] */
        uint64_t fsyn_ow0                : 10;      /**< Failing L2 Data Store SYNDROME OW[0] */
#else
        uint64_t fsyn_ow0                : 10;
        uint64_t fsyn_ow1                : 10;
        uint64_t reserved                : 44;
#endif
    } s;
} cvmx_l2d_fsyn0_t;


/**
 * L2D_FSYN1 = L2 Failing Syndrome [OW2,OW3]
 *  Description: L2 Data ECC SEC/DED Failing Syndrome for upper cache line
 * NOTES: When L2D_SEC_ERR or L2D_DED_ERR are set, this field contains the failing L2 Data ECC 10b syndrome.
 *        (A DED Error will always overwrite a SEC Error SYNDROME and FADR).
 *
 * - Access using the CVMX_L2D_FSYN1 CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 44;      /**< RESERVED */
        uint64_t fsyn_ow3                : 10;      /**< Failing L2 Data Store SYNDROME OW[3] */
        uint64_t fsyn_ow2                : 10;      /**< Failing L2 Data Store SYNDROME OW[2] */
#else
        uint64_t fsyn_ow2                : 10;
        uint64_t fsyn_ow3                : 10;
        uint64_t reserved                : 44;
#endif
    } s;
} cvmx_l2d_fsyn1_t;


/**
 * L2D_FUS0 = L2C Data Store QUAD0 Fuse Register
 *
 * - Access using the CVMX_L2D_FUS0 CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 30;      /**< RESERVED */
        uint64_t q0fus                   : 34;      /**< Fuse Register for QUAD0
                                                         This is purely for debug and not needed in the general
                                                         manufacturing flow.
                                                         Note that the fuse are complementary (Assigning a
                                                         fuse to 1 will read as a zero). This means the case
                                                         where no fuses are blown result in these csr's showing
                                                         all ones.
                                                         Failure #1 Fuse Mapping
                                                         [16:14] bad bank
                                                         [13:7] bad high column
                                                         [6:0] bad low column
                                                         Failure #2 Fuse Mapping
                                                         [33:31] bad bank
                                                         [30:24] bad high column
                                                         [23:17] bad low column */
#else
        uint64_t q0fus                   : 34;
        uint64_t reserved                : 30;
#endif
    } s;
} cvmx_l2d_fus0_t;


/**
 * L2D_FUS1 = L2C Data Store QUAD1 Fuse Register
 *
 * - Access using the CVMX_L2D_FUS1 CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 30;      /**< RESERVED */
        uint64_t q1fus                   : 34;      /**< Fuse Register for QUAD1
                                                         This is purely for debug and not needed in the general
                                                         manufacturing flow.
                                                         Note that the fuse are complementary (Assigning a
                                                         fuse to 1 will read as a zero). This means the case
                                                         where no fuses are blown result in these csr's showing
                                                         all ones.
                                                         Failure #1 Fuse Mapping
                                                         [16:14] bad bank
                                                         [13:7] bad high column
                                                         [6:0] bad low column
                                                         Failure #2 Fuse Mapping
                                                         [33:31] bad bank
                                                         [30:24] bad high column
                                                         [23:17] bad low column */
#else
        uint64_t q1fus                   : 34;
        uint64_t reserved                : 30;
#endif
    } s;
} cvmx_l2d_fus1_t;


/**
 * L2D_FUS2 = L2C Data Store QUAD2 Fuse Register
 *
 * - Access using the CVMX_L2D_FUS2 CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 30;      /**< RESERVED */
        uint64_t q2fus                   : 34;      /**< Fuse Register for QUAD2
                                                         This is purely for debug and not needed in the general
                                                         manufacturing flow.
                                                         Note that the fuse are complementary (Assigning a
                                                         fuse to 1 will read as a zero). This means the case
                                                         where no fuses are blown result in these csr's showing
                                                         all ones.
                                                         Failure #1 Fuse Mapping
                                                         [16:14] bad bank
                                                         [13:7] bad high column
                                                         [6:0] bad low column
                                                         Failure #2 Fuse Mapping
                                                         [33:31] bad bank
                                                         [30:24] bad high column
                                                         [23:17] bad low column */
#else
        uint64_t q2fus                   : 34;
        uint64_t reserved                : 30;
#endif
    } s;
} cvmx_l2d_fus2_t;


/**
 * L2D_FUS3 = L2C Data Store QUAD3 Fuse Register
 *
 * - Access using the CVMX_L2D_FUS3 CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 30;      /**< RESERVED */
        uint64_t q3fus                   : 34;      /**< Fuse Register for QUAD3
                                                         This is purely for debug and not needed in the general
                                                         manufacturing flow.
                                                         Note that the fuse are complementary (Assigning a
                                                         fuse to 1 will read as a zero). This means the case
                                                         where no fuses are blown result in these csr's showing
                                                         all ones.
                                                         Failure #1 Fuse Mapping
                                                         [16:14] bad bank
                                                         [13:7] bad high column
                                                         [6:0] bad low column
                                                         Failure #2 Fuse Mapping
                                                         [33:31] bad bank
                                                         [30:24] bad high column
                                                         [23:17] bad low column */
#else
        uint64_t q3fus                   : 34;
        uint64_t reserved                : 30;
#endif
    } s;
} cvmx_l2d_fus3_t;


/**
 * L2T_ERR = L2 Tag Errors
 *  Description: L2 Tag ECC SEC/DED Errors and Interrupt Enable
 *
 * - Access using the CVMX_L2T_ERR CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 38;      /**< RESERVED */
        uint64_t lck_intena              : 1;       /**< L2 Tag Lock Error Interrupt Enable bit */
        uint64_t lckerr                  : 1;       /**< SW attempted to LOCK DOWN the last set of the INDEX
                                                         (whichis ignored by HW - but reported to SW). */
        uint64_t fset                    : 3;       /**< Failing L2 Tag Set# (1-of-8) */
        uint64_t fadr                    : 10;      /**< Failing L2 Tag Address (10-bit Index) */
        uint64_t fsyn                    : 6;       /**< When L2T_SEC_ERR or L2T_DED_ERR are set, this field
                                                         contains the failing L2 Tag ECC 6bit syndrome.
                                                         (A DED Error will always overwrite a SEC Error SYNDROME and FADR). */
        uint64_t ded_err                 : 1;       /**< L2T Double Error detected (DED) */
        uint64_t sec_err                 : 1;       /**< L2T Single Error corrected (SEC) */
        uint64_t ded_intena              : 1;       /**< L2 Tag ECC Double Error Detect(DED) Interrupt
                                                         Enable bit. When set, allows interrupts to be
                                                         reported on double bit (uncorrectable) errors from
                                                         the L2 Tag Arrays. */
        uint64_t sec_intena              : 1;       /**< L2 Tag ECC Single Error Correct(SEC) Interrupt
                                                         Enable bit. When set, allows interrupts to be
                                                         reported on single bit (correctable) errors from
                                                         the L2 Tag Arrays. */
        uint64_t ecc_ena                 : 1;       /**< L2 Tag ECC Enable
                                                         When set, enables 5-bit SEC/DED codeword for 20-bit
                                                         L2 Tag Arrays [V,D,L,TAG[33:17]] */
#else
        uint64_t ecc_ena                 : 1;
        uint64_t sec_intena              : 1;
        uint64_t ded_intena              : 1;
        uint64_t sec_err                 : 1;
        uint64_t ded_err                 : 1;
        uint64_t fsyn                    : 6;
        uint64_t fadr                    : 10;
        uint64_t fset                    : 3;
        uint64_t lckerr                  : 1;
        uint64_t lck_intena              : 1;
        uint64_t reserved                : 38;
#endif
    } s;
} cvmx_l2t_err_t;


/**
 * LED_BLINK = LED Blink Rate (in led_clks)
 *
 * - Access using the CVMX_LED_BLINK CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 56;      /**< Reserved */
        uint64_t rate                    : 8;       /**< LED Blink rate in led_latch clks */
#else
        uint64_t rate                    : 8;
        uint64_t reserved                : 56;
#endif
    } s;
} cvmx_led_blink_t;


/**
 * LED_CLK_PHASE = LED Clock Phase (in 64 eclks)
 * Example:
 *         Given a 2ns eclk, an LED_CLK_PHASE[PHASE] = 1, indicates that each
 *         led_clk phase is 64 eclks, or 128ns.  The led_clk period is 2*phase,
 *         or 256ns which is 3.9MHz.  The default value of 4, yields an led_clk
 *         period of 64*4*2ns*2 = 1024ns or ~1MHz (977KHz).
 *
 * - Access using the CVMX_LED_CLK_PHASE CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 57;      /**< Reserved */
        uint64_t phase                   : 7;       /**< Number of 64 eclks in order to create the led_clk */
#else
        uint64_t phase                   : 7;
        uint64_t reserved                : 57;
#endif
    } s;
} cvmx_led_clk_phase_t;


/**
 * LED_CYLON = LED CYLON Effect (should remain undocumented)
 *
 * - Access using the CVMX_LED_CYLON CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 48;      /**< Reserved */
        uint64_t rate                    : 16;      /**< LED Cylon Effect when RATE!=0
                                                         Changes at RATE*LATCH period */
#else
        uint64_t rate                    : 16;
        uint64_t reserved                : 48;
#endif
    } s;
} cvmx_led_cylon_t;


/**
 * LED_DBG = LED Debug Port information
 *
 * - Access using the CVMX_LED_DBG CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 63;      /**< Reserved */
        uint64_t dbg_en                  : 1;       /**< Add Debug Port Data to the LED shift chain
                                                         Debug Data is shifted out LSB to MSB */
#else
        uint64_t dbg_en                  : 1;
        uint64_t reserved                : 63;
#endif
    } s;
} cvmx_led_dbg_t;


/**
 * LED_EN = LED Interface Enable
 * The LED interface is comprised of a shift chain with a parallel latch.  LED
 * data is shifted out on each rising edge of led_clk and then captured by
 * led_lat.
 * The LED shift chain is comprised of the following...
 *      32  - UDD header
 *      6x8 - per port status
 *      17  - debug port
 *      32  - UDD trailer
 * for a total of 129 bits.
 * UDD header is programmable from 0-32 bits (LED_UDD_CNT0) and will shift out
 * LSB to MSB (LED_UDD_DAT0[0], LED_UDD_DAT0[1],
 * ... LED_UDD_DAT0[LED_UDD_CNT0].
 * The per port status is also variable.  Systems can control which ports send
 * data (LED_PRT) as well as the status content (LED_PRT_FMT and
 * LED_PRT_STATUS*).  When multiple ports are enabled, they come out in lowest
 * port to highest port (prt0, prt1, ...).
 * The debug port data can also be added to the LED chain (LED_DBG).  When
 * enabled, the debug data shifts out LSB to MSB.
 * The UDD trailer data is identical to the header data, but uses LED_UDD_CNT1
 * and LED_UDD_DAT1.
 *
 * - Access using the CVMX_LED_EN CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 63;      /**< Reserved */
        uint64_t en                      : 1;       /**< Enable the LED interface shift-chain */
#else
        uint64_t en                      : 1;
        uint64_t reserved                : 63;
#endif
    } s;
} cvmx_led_en_t;


/**
 * LED_POLARITY = LED Polarity
 *
 * - Access using the CVMX_LED_POLARITY CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 63;      /**< Reserved */
        uint64_t rate                    : 1;       /**< LED active polarity
                                                         0 = active HIGH LED
                                                         1 = active LOW LED (invert led_dat) */
#else
        uint64_t rate                    : 1;
        uint64_t reserved                : 63;
#endif
    } s;
} cvmx_led_polarity_t;


/**
 * LED_PRT_FMT = LED Port Status Infomation Format
 *
 * - Access using the CVMX_LED_PRT_FMT CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 60;      /**< Reserved */
        uint64_t format                  : 4;       /**< Port Status Information for each enabled port in
                                                         LED_PRT.  The formats are below
                                                         0/0: [ LED_PRT_STATUS[0]            ]
                                                         1/0: [ (RX|TX), LED_PRT_STATUS[0]   ]
                                                         2/0: [ Tx, Rx, LED_PRT_STATUS[0]    ]
                                                         3/0: [ Tx, Rx, LED_PRT_STATUS[0]    ]
                                                         0/1: [ LED_PRT_STATUS[1:0]          ]
                                                         1/1: [ (RX|TX), LED_PRT_STATUS[1:0] ]
                                                         2/1: [ Tx, Rx, LED_PRT_STATUS[1:0]  ]
                                                         3/1: [ Tx, Rx, LED_PRT_STATUS[1:0]  ]
                                                         0/2: [ LED_PRT_STATUS[3:0]          ]
                                                         1/2: [ (RX|TX), LED_PRT_STATUS[3:0] ]
                                                         2/2: [ Tx, Rx, LED_PRT_STATUS[3:0]  ]
                                                         3/2: [ Tx, Rx, LED_PRT_STATUS[3:0]  ]
                                                         x/3: [ LED_PRT_STATUS[5:0]          ] */
#else
        uint64_t format                  : 4;
        uint64_t reserved                : 60;
#endif
    } s;
} cvmx_led_prt_fmt_t;


/**
 * LED_PRT_STATUS = LED Port Status information
 *
 * - Access using the CVMX_LED_PRT_STATUSX(0..7) CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 58;      /**< Reserved */
        uint64_t status                  : 6;       /**< Bits that software can set to be added to the
                                                         LED shift chain - depending on LED_PRT_FMT */
#else
        uint64_t status                  : 6;
        uint64_t reserved                : 58;
#endif
    } s;
} cvmx_led_prt_statusx_t;


/**
 * LED_PRT = LED Port status information
 * Note:
 *         the PRT vector enables information of the 8 RGMII ports connected to
 *         Octane.  It does not reflect the actual programmed PHY addresses.
 *
 * - Access using the CVMX_LED_PRT CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 56;      /**< Reserved */
        uint64_t prt_en                  : 8;       /**< Which ports are enabled to display status
                                                         The status format is defined by LED_PRT_FMT */
#else
        uint64_t prt_en                  : 8;
        uint64_t reserved                : 56;
#endif
    } s;
} cvmx_led_prt_t;


/**
 * LED_UDD_CNT = LED UDD Counts
 *
 * - Access using the CVMX_LED_UDD_CNTX(0..1) CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 58;      /**< Reserved */
        uint64_t cnt                     : 6;       /**< Number of bits of user-defined data to include in
                                                         the LED shift chain.  Legal values: 0-32. */
#else
        uint64_t cnt                     : 6;
        uint64_t reserved                : 58;
#endif
    } s;
} cvmx_led_udd_cntx_t;


/**
 * LED_UDD_DAT = User defined data (header or trailer)
 * then the bits comes out LED_UDD_DAT[0], LED_UDD_DAT[1], LED_UDD_DAT[2],
 * LED_UDD_DAT[3].
 *
 * - Access using the CVMX_LED_UDD_DATX(0..1) CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 32;      /**< Reserved */
        uint64_t dat                     : 32;      /**< Header or trailer UDD data to be displayed on
                                                         the LED shift chain.  Number of bits to include
                                                         is controled by LED_UDD_CNT */
#else
        uint64_t dat                     : 32;
        uint64_t reserved                : 32;
#endif
    } s;
} cvmx_led_udd_datx_t;


/**
 * LMC_COMP_CTL = LMC Compensation control
 *
 * - Access using the CVMX_LMC_COMP_CTL CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t unused                  : 32;      /**< Unused */
        uint64_t nctl_csr                : 4;       /**< Compensation control bits */
        uint64_t nctl_clk                : 4;       /**< Compensation control bits */
        uint64_t nctl_cmd                : 4;       /**< Compensation control bits */
        uint64_t nctl_dat                : 4;       /**< Compensation control bits */
        uint64_t pctl_csr                : 4;       /**< Compensation control bits */
        uint64_t pctl_clk                : 4;       /**< Compensation control bits */
        uint64_t pctl_cmd                : 4;       /**< Compensation control bits */
        uint64_t pctl_dat                : 4;       /**< Compensation control bits */
#else
        uint64_t pctl_dat                : 4;
        uint64_t pctl_cmd                : 4;
        uint64_t pctl_clk                : 4;
        uint64_t pctl_csr                : 4;
        uint64_t nctl_dat                : 4;
        uint64_t nctl_cmd                : 4;
        uint64_t nctl_clk                : 4;
        uint64_t nctl_csr                : 4;
        uint64_t unused                  : 32;
#endif
    } s;
} cvmx_lmc_comp_ctl_t;


/**
 * LMC_CTL = LMC Control
 *
 * - Access using the CVMX_LMC_CTL CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 32;      /**< RESERVED */
        uint64_t ddr__nctl               : 4;       /**< DDR nctl from compensation circuit
                                                         The encoded value on this will adjust the drive strength
                                                         of the DDR DQ pulldns. */
        uint64_t ddr__pctl               : 4;       /**< DDR pctl from compensation circuit
                                                         The encoded value on this will adjust the drive strength
                                                         of the DDR DQ pullup. */
        uint64_t spare1                  : 1;       /**< Unused */
        uint64_t xor_bank                : 1;       /**< If (XOR_BANK == 1), then
                                                         bank[n:0]=address[n+7:7] ^ address[n+7+5:7+5]
                                                         else
                                                         bank[n:0]=address[n+7:7]
                                                         where n=1 for a 4 bank part and n=2 for an 8 bank part */
        uint64_t max_write_batch         : 4;       /**< Maximum number of consecutive writes to service before
                                                         allowing reads to interrupt. */
        uint64_t nwk_fcram               : 1;       /**< Network FCRAM Enable - When enabled, the DDR_DQS[8:0]
                                                         pins are input only (bidirectionality disabled).
                                                         N3K supports TWO types of FCRAM DRAMs, namely
                                                         1) FCRAM-II which supports a bidirectional DQS (much
                                                         the same as DDR-I), and
                                                         2) Network FCRAM(or FCRAM-III) which uses pt-pt
                                                         unidirectional data strobes (DS/QS).
                                                         For Network FCRAMs, N2K's DDR_DQS[8:0] pins are
                                                         connected to the QS[8:0] dram pins and the DDR_DM[8:0]
                                                         pins are connected to the DS[8:0] pins.
                                                         Restrictions: If this bit is enabled, FCRAM_ENA must
                                                         also be set.
                                                         Restrictions: Since the Network FCRAMs use a pt-pt
                                                         unidirectional data strobe only a single non-banked
                                                         DIMM configuration is supported(ie: this should be
                                                         reflected in the address mapping). */
        uint64_t fcram_ena               : 1;       /**< FCRAM Enable - When enabled, the external memory pins
                                                         are remapped for FCRAM.
                                                         Pin Mapping
                                                         DDR-I        FCRAM
                                                         -----------------------
                                                         WE_N         A[14]
                                                         RAS_N        FN
                                                         CKE          PD_N
                                                         DM[8:0]      DS[8:0] - For Network FCRAM support
                                                         Restrictions: This bit MUST be set if NWK_FCRAM is set. */
        uint64_t rdimm_ena               : 1;       /**< Registered DIMM Enable - When set allows the use
                                                         of JEDEC Registered DIMMs which require Write
                                                         data to be registered in the controller. */
        uint64_t r2r_slot                : 1;       /**< R2R Slot Enable: When set, all read-to-read transactions
                                                         will slot an additional 1 cycle data bus bubble to
                                                         avoid DQ/DQS bus contention. This is only a CYA bit,
                                                         in case the "built-in" DIMM and RANK crossing logic
                                                         which should auto-detect and perfectly slot read-to-reads
                                                         to the same DIMM/RANK. */
        uint64_t inorder_mwf             : 1;       /**< When set, forces LMC_MWF (writes) into strict, in-order
                                                         mode.  When clear, writes may be serviced out of order
                                                         (optimized to keep multiple banks active).
                                                         This bit is ONLY to be set at power-on and
                                                         should not be set for normal use. */
        uint64_t inorder_mrf             : 1;       /**< When set, forces LMC_MRF (reads) into strict, in-order
                                                         mode.  When clear, reads may be serviced out of order
                                                         (optimized to keep multiple banks active).
                                                         This bit is ONLY to be set at power-on and
                                                         should not be set for normal use. */
        uint64_t set_zero                : 1;       /**< Reserved. Always Set this Bit to Zero */
        uint64_t mode128b                : 1;       /**< 128b data Path Mode
                                                         Set to 1 if we use all 128 DQ pins
                                                         0 for 64b DQ mode. */
        uint64_t fprch2                  : 1;       /**< Double Front Porch Enable: When set, the turn-off
                                                         time for the DDR_DQ/DQS drivers is 2 dclks prior to
                                                         the [tCL+tSKW] */
        uint64_t bprch                   : 1;       /**< Back Porch Enable: When set, the turn-on time for
                                                         the DDR_DQ/DQS drivers is delayed an additional DCLK
                                                         cycle. */
        uint64_t sil_lat                 : 2;       /**< SILO Latency: On reads, determines how many additional
                                                         dclks to wait (on top of TCL+1+TSKW) before pulling
                                                         data out of the pad silos.
                                                         00: 0 dclks
                                                         01: 1 dclks
                                                         10: 2 dclks
                                                         11: 3 dclks */
        uint64_t tskw                    : 2;       /**< Encoding used to determine the board skew (in dclks)
                                                         used to determine how much delay to expect on DQ/DQS
                                                         during reads (DRAM driving to memory controller).
                                                         This component is also used to determine the R->W
                                                         spacing to avoid DQS/DQ bus conflicts.
                                                         00: 0 dclk
                                                         01: 1 dclks
                                                         10: 2 dclks
                                                         11: 3 dclks */
        uint64_t qs_dic                  : 2;       /**< QS Drive Strength Control:
                                                         & DDR2 Termination Resistor Setting
                                                         Note: When FCRAM-III mode, (FCRAM_ENA=1/NWK_FCRAM=1),
                                                         the QS_DIC[1:0] is loaded into the Extended Mode
                                                         Register (EMRS) [A4:A3] bits during initialization.
                                                         (see FCRAM data sheet EMRS description)
                                                         00 = Standard
                                                         01 = Strong
                                                         10 = Weaker
                                                         11 = Weakest
                                                         When in DDR2, these two bits are loaded into the RTT
                                                         portion of the EMRS register bits A6 & A2. If DDR2's
                                                         termination (for the memory's DQ/DQS/DM pads) is not
                                                         desired, set it to 00. If it is, chose between
                                                         01 for 75 ohm and 10 for 150 ohm termination.
                                                         00 = ODT Disabled
                                                         01 = 75 ohm Termination
                                                         10 = 150 ohm Termination
                                                         11 = RESERVED */
        uint64_t dic                     : 2;       /**< Drive Strength Control:
                                                         For DDR-I/II Mode (ie: FCRAM_ENA=0), DIC[0] is
                                                         loaded into the Extended Mode Register (EMRS) A1 bit
                                                         during initialization. (see DDR-I data sheet EMRS
                                                         description)
                                                         0 = Normal
                                                         1 = Reduced
                                                         For DDR-II Mode, DIC[1] is used to load into EMRS
                                                         bit 10 - DQSN Enable/Disable field. By default, we
                                                         program the DDR's to drive the DQSN also. Set it to
                                                         1 if DQSN should be Hi-Z.
                                                         0 - DQSN Enable
                                                         1 - DQSN Disable
                                                         Note: When FCRAM-II mode, (FCRAM_ENA=1/NWK_FCRAM=0),
                                                         the DIC[1:0] is loaded into the Extended Mode Register
                                                         (EMRS)[A6,A1] bits during initialization. (see FCRAM
                                                         data sheet EMRS description)
                                                         00 = Standard
                                                         01 = Strong
                                                         10 = Weaker
                                                         11 = Weakest
                                                         Note: When FCRAM-III mode, (FCRAM_ENA=1/NWK_FCRAM=1),
                                                         the DIC[1:0] is loaded into the Extended Mode Register
                                                         (EMRS)[A2:A1] bits during initialization. (see
                                                         FCRAM data sheet EMRS description)
                                                         00 = Standard
                                                         01 = Strong
                                                         10 = Weaker
                                                         11 = Weakest */
#else
        uint64_t dic                     : 2;
        uint64_t qs_dic                  : 2;
        uint64_t tskw                    : 2;
        uint64_t sil_lat                 : 2;
        uint64_t bprch                   : 1;
        uint64_t fprch2                  : 1;
        uint64_t mode128b                : 1;
        uint64_t set_zero                : 1;
        uint64_t inorder_mrf             : 1;
        uint64_t inorder_mwf             : 1;
        uint64_t r2r_slot                : 1;
        uint64_t rdimm_ena               : 1;
        uint64_t fcram_ena               : 1;
        uint64_t nwk_fcram               : 1;
        uint64_t max_write_batch         : 4;
        uint64_t xor_bank                : 1;
        uint64_t spare1                  : 1;
        uint64_t ddr__pctl               : 4;
        uint64_t ddr__nctl               : 4;
        uint64_t reserved                : 32;
#endif
    } s;
} cvmx_lmc_ctl_t;


/**
 * LMC_DDR2_CTL = LMC DDR2 & DLL Control Register
 *
 * - Access using the CVMX_LMC_DDR2_CTL CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t unused                  : 32;      /**< Unused */
        uint64_t bank8                   : 1;       /**< DDR2 part has 8 banks
                                                         1 - DDR2 parts have 8 internal banks (BA is 3 bits
                                                         wide).
                                                         0 - DDR2 parts have 4 internal banks (BA is 2 bits
                                                         wide). */
        uint64_t burst8                  : 1;       /**< 8-burst mode.
                                                         1 - DDR data transfer happens in burst of 8
                                                         0 - DDR data transfer happens in burst of 4
                                                         Burst of 8 is useful in 2-T cmd mode for ddr2 */
        uint64_t addlat                  : 3;       /**< Additional Latency to cover tRCD
                                                         When Posted CAS is on, set this to tRCD - 1,
                                                         where tRCD is in # cycles */
        uint64_t pocas                   : 1;       /**< Enable the Posted CAS feature of DDR2 */
        uint64_t bwcnt                   : 1;       /**< Bus utilization counter Clear.
                                                         There are two counters. One that looks at command/state
                                                         activity (clk_cnt_ifb) and another one that looks at
                                                         the Data bus activity (clk_cnt_ops). The ratio of
                                                         clk_cnt_ops/clk_cnt_ifb gives an idea of the bus
                                                         utilization. This Bit goes out and clears out the
                                                         counter so that wecould get a clean start from the point
                                                         of interest. */
        uint64_t twr                     : 3;       /**< DDR Write Recovery time (tWR). Last Wr Brst to Pre delay.
                                                         This is not a direct encoding of the value. Its programmed
                                                         as below per DDR2 spec. The decimal number on the right is
                                                         RNDUP(tWR(ns) / clkFreq)
                                                         TYP=15ns
                                                         000: RESERVED
                                                         001: 2
                                                         010: 3
                                                         011: 4
                                                         100: 5
                                                         101: 6
                                                         110-111: RESERVED */
        uint64_t silo_hc                 : 1;       /**< Adds a Half Cycle granularity to generate the byte based
                                                         dqs pulse generation for silo. */
        uint64_t ddr_eof                 : 4;       /**< Early Fill Counter Init.
                                                         L2 needs to know a few cycle before a fill completes so
                                                         it can get its Control pipe started (for better overall
                                                         performance). This counter contains  an init value which
                                                         is a function of Eclk/Dclk ratio. This init value will
                                                         determine when to safely let the L2 know that a fill
                                                         termination is coming up.
                                                         DDR_EOF = RNDUP (DCLK period/Eclk Period). If the ratio
                                                         is above 3, set the ratio at 3. */
        uint64_t spare3                  : 5;       /**< Unused */
        uint64_t crip_mode               : 1;       /**< Cripple Mode - When set, the LMC allows only
                                                         1 inflight transaction (.vs. 8 in normal mode).
                                                         This bit is ONLY to be set at power-on and
                                                         should not be set for normal use. */
        uint64_t spare2                  : 2;       /**< Unused */
        uint64_t qdll_ena                : 1;       /**< DDR Quad DLL Enable: A 0->1 transition on this bit after
                                                         erst deassertion will reset the DDR 90 DLL. Should
                                                         happen at startup before any activity in DDR. */
        uint64_t dll90_vlu               : 5;       /**< Contains the open loop setting value for the DDR90 delay
                                                         line. */
        uint64_t dll90_byp               : 1;       /**< DDR DLL90 Bypass: When set, the DDR90 DLL is to be
                                                         bypassed and the setting is defined by
                                                         lmc__ddr_manual_setting[4:0] */
        uint64_t rdqs                    : 1;       /**< DDR2 RDQS mode. When set, configures memory subsystem to
                                                         use unidirectional DQS pins. RDQS - Rcv & DQS - Xmit */
        uint64_t ddr2                    : 1;       /**< DDR2 Enable: When set, configures memory subsystem for
                                                         DDR-II SDRAMs. */
#else
        uint64_t ddr2                    : 1;
        uint64_t rdqs                    : 1;
        uint64_t dll90_byp               : 1;
        uint64_t dll90_vlu               : 5;
        uint64_t qdll_ena                : 1;
        uint64_t spare2                  : 2;
        uint64_t crip_mode               : 1;
        uint64_t spare3                  : 5;
        uint64_t ddr_eof                 : 4;
        uint64_t silo_hc                 : 1;
        uint64_t twr                     : 3;
        uint64_t bwcnt                   : 1;
        uint64_t pocas                   : 1;
        uint64_t addlat                  : 3;
        uint64_t burst8                  : 1;
        uint64_t bank8                   : 1;
        uint64_t unused                  : 32;
#endif
    } s;
} cvmx_lmc_ddr2_ctl_t;


/**
 * When a given RANK in position N is selected, the WODT _HI and _LO masks for that position are used.
 * Mask[3:0] is used for WODT control of the RANKs in positions 3, 2, 1, and 0, respectively.
 * In  64b mode, DIMMs are assumed to be ordered in the following order:
 *  position 3: [unused        , DIMM1_RANK1_LO]
 *  position 2: [unused        , DIMM1_RANK0_LO]
 *  position 1: [unused        , DIMM0_RANK1_LO]
 *  position 0: [unused        , DIMM0_RANK0_LO]
 * In 128b mode, DIMMs are assumed to be ordered in the following order:
 *  position 3: [DIMM3_RANK1_HI, DIMM1_RANK1_LO]
 *  position 2: [DIMM3_RANK0_HI, DIMM1_RANK0_LO]
 *  position 1: [DIMM2_RANK1_HI, DIMM0_RANK1_LO]
 *  position 0: [DIMM2_RANK0_HI, DIMM0_RANK0_LO]
 *                     LMC_ECC_SYND = MRD ECC Syndromes
 *
 * - Access using the CVMX_LMC_ECC_SYND CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 32;      /**< RESERVED */
        uint64_t mrdsyn3                 : 8;       /**< MRD ECC Syndrome Quad3
                                                         128b mode -  corresponds to DQ[127:64], Phase1
                                                         64b mode  -  corresponds to DQ[127:64], Phase1, cycle1 */
        uint64_t mrdsyn2                 : 8;       /**< MRD ECC Syndrome Quad2
                                                         128b mode -  corresponds to DQ[63:0], Phase1
                                                         64b mode  -  corresponds to DQ[63:0], Phase1, cycle0 */
        uint64_t mrdsyn1                 : 8;       /**< MRD ECC Syndrome Quad1
                                                         128b mode -  corresponds to DQ[127:64], Phase0
                                                         64b mode  -  corresponds to DQ[127:64], Phase0, cycle1 */
        uint64_t mrdsyn0                 : 8;       /**< MRD ECC Syndrome Quad0
                                                         In 128b mode, ecc is calulated on 1 cycle worth of data
                                                         SYND0 corresponds to DQ[63:0], Phase0
                                                         In 64b mode, ecc is calculated on 2 cycle worth of data
                                                         SYND0 corresponds to DQ[63:0], Phase0, cycle0 */
#else
        uint64_t mrdsyn0                 : 8;
        uint64_t mrdsyn1                 : 8;
        uint64_t mrdsyn2                 : 8;
        uint64_t mrdsyn3                 : 8;
        uint64_t reserved                : 32;
#endif
    } s;
} cvmx_lmc_ecc_synd_t;


/**
 * LMC_FADR = LMC Failing Address Register (SEC/DED)
 *
 * - Access using the CVMX_LMC_FADR CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 32;      /**< RESERVED */
        uint64_t fdimm                   : 2;       /**< Failing DIMM# */
        uint64_t fbunk                   : 1;       /**< Failing Rank */
        uint64_t fbank                   : 3;       /**< Failing Bank[2:0] */
        uint64_t frow                    : 14;      /**< Failing Row Address[13:0] */
        uint64_t fcol                    : 12;      /**< Failing Column Start Address[11:0]
                                                         Represents the Failing read's starting column address
                                                         (and not the exact column address in which the SEC/DED
                                                         was detected) */
#else
        uint64_t fcol                    : 12;
        uint64_t frow                    : 14;
        uint64_t fbank                   : 3;
        uint64_t fbunk                   : 1;
        uint64_t fdimm                   : 2;
        uint64_t reserved                : 32;
#endif
    } s;
} cvmx_lmc_fadr_t;


/**
 * LMC_IFB_CNT_HI  = Performance Counters
 *
 * - Access using the CVMX_LMC_IFB_CNT_HI CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 32;      /**< RESERVED */
        uint64_t ifbcnt_hi               : 32;      /**< Performance Counter to measure Bus Utilization
                                                         Bus Utilization = [clk_cnt_ops_hi,clk_cnt_ops_lo]
                                                         /[clk_cnt_ifb_hi,clk_cnt_ifb_lo] */
#else
        uint64_t ifbcnt_hi               : 32;
        uint64_t reserved                : 32;
#endif
    } s;
} cvmx_lmc_ifb_cnt_hi_t;


/**
 * LMC_IFB_CNT_LO  = Performance Counters
 *
 * - Access using the CVMX_LMC_IFB_CNT_LO CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 32;      /**< RESERVED */
        uint64_t ifbcnt_lo               : 32;      /**< Performance Counter to measure Bus Utilization
                                                         Bus Utilization = [clk_cnt_ops_hi,clk_cnt_ops_lo]
                                                         /[clk_cnt_ifb_hi,clk_cnt_ifb_lo] */
#else
        uint64_t ifbcnt_lo               : 32;
        uint64_t reserved                : 32;
#endif
    } s;
} cvmx_lmc_ifb_cnt_lo_t;


/**
 * Specify the RSL base addresses for the block
 *                   LMC_MEM_CFG0 = LMC Memory Configuration Register0
 *  This register controls certain parameters of  Memory Configuration
 *
 * - Access using the CVMX_LMC_MEM_CFG0 CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 32;      /**< RESERVED */
        uint64_t reset                   : 1;       /**< Reset oneshot pulse for free-running structures
                                                         A pulse longer than 1 dclk length will clear out
                                                         internal free running counters
                                                         (refresh counter and perf counters). */
        uint64_t spare0                  : 1;       /**< Unused */
        uint64_t bunk_ena                : 1;       /**< Bunk Enable aka RANK ena (for use with dual-rank DIMMs)
                                                         For dual-rank DIMMs, the bunk_ena bit will enable
                                                         the drive of the CS_N[1:0] pins based on the
                                                         (pbank_lsb-1) address bit. */
        uint64_t ded_err                 : 4;       /**< Double Error detected (DED) of Rd Data
                                                         In 128b mode, ecc is calulated on 1 cycle worth of data
                                                         [0] corresponds to DQ[63:0], Phase0
                                                         [1] corresponds to DQ[127:64], Phase0
                                                         [2] corresponds to DQ[63:0], Phase1
                                                         [3] corresponds to DQ[127:64], Phase1
                                                         In 64b mode, ecc is calculated on 2 cycle worth of data
                                                         [0] corresponds to DQ[63:0], Phase0, cycle0
                                                         [1] corresponds to DQ[127:64], Phase0, cycle1
                                                         [2] corresponds to DQ[63:0], Phase1, cycle0
                                                         [3] corresponds to DQ[127:64], Phase1, cycle1
                                                         Write of 1 will clear the corresponding error bit */
        uint64_t sec_err                 : 4;       /**< Single Error (corrected) of Rd Data
                                                         In 128b mode, ecc is calulated on 1 cycle worth of data
                                                         [0] corresponds to DQ[63:0], Phase0
                                                         [1] corresponds to DQ[127:64], Phase0
                                                         [2] corresponds to DQ[63:0], Phase1
                                                         [3] corresponds to DQ[127:64], Phase1
                                                         In 64b mode, ecc is calculated on 2 cycle worth of data
                                                         [0] corresponds to DQ[63:0], Phase0, cycle0
                                                         [1] corresponds to DQ[127:64], Phase0, cycle1
                                                         [2] corresponds to DQ[63:0], Phase1, cycle0
                                                         [3] corresponds to DQ[127:64], Phase1, cycle1
                                                         Write of 1 will clear the corresponding error bit */
        uint64_t intr_ded_ena            : 1;       /**< ECC Double Error Detect(DED) Interrupt Enable bit
                                                         When set, allows interrupts to be reported on double
                                                         bit(uncorrectable) errors. */
        uint64_t intr_sec_ena            : 1;       /**< ECC Single Error Correct(SEC) Interrupt Enable bit
                                                         When set, allows interrupts to be reported on single
                                                         bit(correctable) errors. */
        uint64_t tcl                     : 4;       /**< Encoding used to determine the CAS Latency(CL)
                                                         (Represents #dclk cycles)
                                                         0010: CAS Latency = 2 dclk  (CL=2.0)
                                                         0011: CAS Latency = 3 dclk  (CL=3.0)
                                                         0100: CAS Latency = 4 dclk  (CL=4.0)
                                                         0101: CAS Latency = 5 dclk  (CL=5)
                                                         0110: CAS Latency = 6 dclk  (CL=2.5)
                                                         0111 - 1001 = RESERVED */
        uint64_t ref_int                 : 6;       /**< Refresh interval represented in #of 512 dclk increments.
                                                         Program this to RND-DN(tREFI/clkPeriod/512)
                                                         000000: RESERVED
                                                         000001: 1 * 512  = 512 dclks
                                                         ...
                                                         111111: 63 * 512 = 32256 dclks */
        uint64_t pbank_lsb               : 4;       /**< Physical Bank address select
                                                         Reverting to the explanation for ROW_LSB,
                                                         PBank_LSB would be Row_LSB bit + # Rows
                                                         In the 512MB DIMM Example,
                                                         pbank_lsb=mem_addr[15+13] for 64 b mode
                                                         =mem_addr[16+13] for 128b mode
                                                         Hence the parameter
                                                         0000:pbank[1:0] = mem_adr[28:27]    / rank = mem_adr[26] (if bunk_ena)
                                                         0001:pbank[1:0] = mem_adr[29:28]    / rank = mem_adr[27]      "
                                                         0010:pbank[1:0] = mem_adr[30:29]    / rank = mem_adr[28]      "
                                                         0011:pbank[1:0] = mem_adr[31:30]    / rank = mem_adr[29]      "
                                                         0100:pbank[1:0] = mem_adr[32:31]    / rank = mem_adr[30]      "
                                                         0101:pbank[1:0] = mem_adr[33:32]    / rank = mem_adr[31]      "
                                                         0110:pbank[1:0] =[1'b0,mem_adr[33]] / rank = mem_adr[32]      "
                                                         0111:pbank[1:0] =[2'b0]             / rank = mem_adr[33]      "
                                                         1000-1111: RESERVED */
        uint64_t row_lsb                 : 3;       /**< Encoding used to determine which memory address
                                                         bit position represents the low order DDR ROW address.
                                                         Its a function of the following:
                                                         1. # Banks (4 or 8)
                                                         2. # Column Bits of the memory part
                                                         3. Datapath Width - 64 or 128?
                                                         Example: For Micron's MT18HTF6472A,512MB DDR2 Unbuffered
                                                         DIMM which uses 256Mb parts (8M x 8 x 4),
                                                         # Banks = 4 -> 2 bits of BA
                                                         # Columns = 1K -> 10 bits of Col
                                                         # Rows = 8K -> 13 bits of Row
                                                         Assuming that the total Data width is 128, this is how
                                                         we arrive at row_lsb:
                                                         Col Address starts from mem_addr[4] for 128b (16Bytes)
                                                         dq width or from mem_addr[3] for 64b (8Bytes) dq width
                                                         # col + # bank = 12. Hence row_lsb is mem_adr[15] for
                                                         64bmode or mem_adr[16] for 128b mode. Hence row_lsb
                                                         parameter should be set to 001 (64b) or 010 (128b).
                                                         000: row_lsb = mem_adr[14]
                                                         001: row_lsb = mem_adr[15]
                                                         010: row_lsb = mem_adr[16]
                                                         011: row_lsb = mem_adr[17]
                                                         100: row_lsb = mem_adr[18]
                                                         101-111:row_lsb = RESERVED
                                                         Note: When FCRAM_ENA=1, the ROW_LSB determines which
                                                         memory address bit position represents the FCRAM UA lsb.
                                                         000: ua_lsb = mem_adr[9]
                                                         001: ua_lsb = mem_adr[10]
                                                         010: ua_lsb = mem_adr[11]
                                                         011: ua_lsb = mem_adr[12]
                                                         100: ua_lsb = mem_adr[13]
                                                         101-111: RESERVED */
        uint64_t ecc_ena                 : 1;       /**< ECC Enable: When set will enable the 8b ECC
                                                         check/correct logic. Should be 1 when used with DIMMs
                                                         with ECC. 0, otherwise. */
        uint64_t init_start              : 1;       /**< When set, starts off DDR memory initialization
                                                         sequence required prior to using the memory. */
#else
        uint64_t init_start              : 1;
        uint64_t ecc_ena                 : 1;
        uint64_t row_lsb                 : 3;
        uint64_t pbank_lsb               : 4;
        uint64_t ref_int                 : 6;
        uint64_t tcl                     : 4;
        uint64_t intr_sec_ena            : 1;
        uint64_t intr_ded_ena            : 1;
        uint64_t sec_err                 : 4;
        uint64_t ded_err                 : 4;
        uint64_t bunk_ena                : 1;
        uint64_t spare0                  : 1;
        uint64_t reset                   : 1;
        uint64_t reserved                : 32;
#endif
    } s;
} cvmx_lmc_mem_cfg0_t;


/**
 * LMC_MEM_CFG1 = LMC Memory Configuration Register1
 *  This register controls the External Memory Configuration Timing Parameters
 *
 * - Access using the CVMX_LMC_MEM_CFG1 CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 33;      /**< RESERVED */
        uint64_t trrd                    : 3;       /**< tRRD cycles: ACT-ACT timing parameter for different
                                                         banks. (Represented in tCYC cycles == 1dclks)
                                                         TYP=15ns (66MHz=1,167MHz=3,200MHz=3)
                                                         For DDR2, TYP=7.5ns
                                                         - 000: RESERVED
                                                         - 001: 1 tCYC
                                                         - 010: 2 tCYC
                                                         - 011: 3 tCYC
                                                         - 100: 4 tCYC
                                                         - 101: 5 tCYC
                                                         - 110-111: RESERVED */
        uint64_t caslat                  : 3;       /**< CAS Latency Encoding which is loaded into each DDR
                                                         SDRAM device (MRS[6:4]) upon power-up (INIT_START=1).
                                                         Note: Due to etch delays, this value can be different
                                                         from tCL which is the memory controller'sCAS latency.
                                                         (Represented in tCYC cycles == 1 dclks)
                                                         - 000 RESERVED
                                                         - 001 RESERVED
                                                         - 010 2.0 tCYC
                                                         - 011 3.0 tCYC
                                                         - 100 4.0 tCYC
                                                         - 101 5.0 tCYC (1.5 DDR-I NOT SUPPORTED)
                                                         - 110 2.5 tCYC (only in DDR-I mode)
                                                         - 111 RESERVED
                                                         eg). The parameter 'SILO_HC' will be programmed to
                                                         account for half cycle granularity in board/etch delays.
                                                         Note: When FCRAM_ENA=1, the CASLAT encoding for FCRAM
                                                         devices is used (which is slightly different from
                                                         DDR-I). This encoded value is loaded into each
                                                         FCRAM device (MRS[6:4]) upon power-up (INIT_START=1).
                                                         - 000 RESERVED
                                                         - 001 RESERVED
                                                         - 010 2.0 tCYC
                                                         - 011 3.0 tCYC
                                                         - 100 4.0 tCYC
                                                         - 101 5.0 tCYC
                                                         - 110 6.0 tCYC
                                                         - 111 RESERVED */
        uint64_t tmrd                    : 3;       /**< tMRD Cycles = RNDUP[tRFC(ns)/tcyc(ns)]
                                                         (Represented in tCYC cycles == 1 dclk)
                                                         For DDR-I, the following encodings are used:
                                                         TYP=15ns (66MHz=1,167MHz=3,200MHz=3)
                                                         For DDR2, its TYP 2*tCYC)
                                                         - 000: RESERVED
                                                         - 001: 1
                                                         - 010: 2
                                                         - 011: 3
                                                         - 100: 4
                                                         - 101-111: RESERVED
                                                         Note: When FCRAM_ENA=1 (FCRAM mode):
                                                         tRSC = [TMRD_CSR+4] */
        uint64_t trfc                    : 5;       /**< 1/4 tRFC Cycles = RNDUP[tRFC(ns)/4*tcyc(ns)]
                                                         (Represented in tCYC cycles == 1dclks)
                                                         For DDR-I, the following encodings are used
                                                         TYP=70ns (133MHz - 3; 333MHz - 6)
                                                         For 2Gb, DDR2-667 parts, typ=195ns
                                                         (TRFC = 195/3/4 = 5'd17 = 0x11)
                                                         - 00000-00001: RESERVED
                                                         - 00010: 8
                                                         - 00011: 12
                                                         - 00100: 16
                                                         -
                                                         - 11110: 120
                                                         - 11111: 124
                                                         Note: When FCRAM_ENA=1 (FCRAM mode):
                                                         tREFC = [TRFC_CSR+11] */
        uint64_t trp                     : 4;       /**< tRP Cycles = RNDUP[tRP(ns)/tcyc(ns)]
                                                         (Represented in tCYC cycles == 1dclk)
                                                         TYP=15ns (66MHz=1,167MHz=3,400MHz=6 for TYP)
                                                         - 0000: RESERVED
                                                         - 0001: 1
                                                         -
                                                         - 0111: 7
                                                         - 1000-1111: RESERVED */
        uint64_t twtr                    : 4;       /**< tWTR Cycles = RNDUP[tWTR(ns)/tcyc(ns)]
                                                         Last Wr Data to Rd Command time.
                                                         (Represented in tCYC cycles == 1dclks)
                                                         TYP=15ns (66MHz=1,167MHz=3,400MHz=6, for TYP)
                                                         - 0000: RESERVED
                                                         - 0001: 1
                                                         -
                                                         - 0111: 7
                                                         - 1000-1111: RESERVED */
        uint64_t trcd                    : 4;       /**< tRCD Cycles = RNDUP[tRAS(ns)/tcyc(ns)]
                                                         (Represented in tCYC cycles == 1dclk)
                                                         TYP=15ns (66MHz=1,167MHz=3,400MHz=6 for TYP)
                                                         - 0000: RESERVED
                                                         - 0001: 1
                                                         -
                                                         - 0111: 7
                                                         - 1110-1111: RESERVED */
        uint64_t tras                    : 5;       /**< tRAS Cycles = RNDUP[tRAS(ns)/tcyc(ns)]
                                                         (Represented in tCYC cycles == 1 dclk)
                                                         For DDR-I mode: TYP=45ns (66MHz=3,167MHz=8,400MHz=18)
                                                         - 00000-0001: RESERVED
                                                         - 00010: 2
                                                         -
                                                         - 10100: 20
                                                         - 10101-11111: RESERVED
                                                         Note: When FCRAM_ENA=1 (FCRAM mode): tRAS = (tRC-1)
                                                         eg) If FCRAM tRC=5 tCYC, then TRAS=4. */
#else
        uint64_t tras                    : 5;
        uint64_t trcd                    : 4;
        uint64_t twtr                    : 4;
        uint64_t trp                     : 4;
        uint64_t trfc                    : 5;
        uint64_t tmrd                    : 3;
        uint64_t caslat                  : 3;
        uint64_t trrd                    : 3;
        uint64_t reserved                : 33;
#endif
    } s;
} cvmx_lmc_mem_cfg1_t;


/**
 * LMC_WODT_CTL = LMC Write OnDieTermination control
 *
 * - Access using the CVMX_LMC_ODT_CTL CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t unused                  : 32;      /**< Unused */
        uint64_t wodt_hi3                : 4;       /**< Write ODT mask for position 3, data[127:64] */
        uint64_t wodt_hi2                : 4;       /**< Write ODT mask for position 2, data[127:64] */
        uint64_t wodt_hi1                : 4;       /**< Write ODT mask for position 1, data[127:64] */
        uint64_t wodt_hi0                : 4;       /**< Write ODT mask for position 0, data[127:64] */
        uint64_t wodt_lo3                : 4;       /**< Write ODT mask for position 3, data[ 63: 0] */
        uint64_t wodt_lo2                : 4;       /**< Write ODT mask for position 2, data[ 63: 0] */
        uint64_t wodt_lo1                : 4;       /**< Write ODT mask for position 1, data[ 63: 0] */
        uint64_t wodt_lo0                : 4;       /**< Write ODT mask for position 0, data[ 63: 0] */
#else
        uint64_t wodt_lo0                : 4;
        uint64_t wodt_lo1                : 4;
        uint64_t wodt_lo2                : 4;
        uint64_t wodt_lo3                : 4;
        uint64_t wodt_hi0                : 4;
        uint64_t wodt_hi1                : 4;
        uint64_t wodt_hi2                : 4;
        uint64_t wodt_hi3                : 4;
        uint64_t unused                  : 32;
#endif
    } s;
} cvmx_lmc_odt_ctl_t;


/**
 * LMC_OPS_CNT_HI  = Performance Counters
 *
 * - Access using the CVMX_LMC_OPS_CNT_HI CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 32;      /**< RESERVED */
        uint64_t opscnt_hi               : 32;      /**< Performance Counter to measure Bus Utilization
                                                         Bus Utilization = [clk_cnt_ops_hi,clk_cnt_ops_lo]
                                                         /[clk_cnt_ifb_hi,clk_cnt_ifb_lo] */
#else
        uint64_t opscnt_hi               : 32;
        uint64_t reserved                : 32;
#endif
    } s;
} cvmx_lmc_ops_cnt_hi_t;


/**
 * LMC_OPS_CNT_LO  = Performance Counters
 *
 * - Access using the CVMX_LMC_OPS_CNT_LO CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 32;      /**< RESERVED */
        uint64_t opscnt_lo               : 32;      /**< Performance Counter to measure Bus Utilization
                                                         Bus Utilization = [clk_cnt_ops_hi,clk_cnt_ops_lo]
                                                         /[clk_cnt_ifb_hi,clk_cnt_ifb_lo] */
#else
        uint64_t opscnt_lo               : 32;
        uint64_t reserved                : 32;
#endif
    } s;
} cvmx_lmc_ops_cnt_lo_t;


/**
 * LMC_PLL_BWCTL  = DDR PLL Bandwidth Control Register
 *
 * - Access using the CVMX_LMC_PLL_BWCTL CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 59;      /**< RESERVED */
        uint64_t bwupd                   : 1;       /**< Load this Bandwidth Register value into the PLL */
        uint64_t bwctl                   : 4;       /**< Bandwidth Control Register for DDR PLL */
#else
        uint64_t bwctl                   : 4;
        uint64_t bwupd                   : 1;
        uint64_t reserved                : 59;
#endif
    } s;
} cvmx_lmc_pll_bwctl_t;


/**
 * MIO_BOOT_BIST_STAT = MIO Boot BIST Status Register
 *
 *  Contains the BIST status for the MIO boot memories.  '0' = pass, '1' = fail.
 *
 * - Access using the CVMX_MIO_BOOT_BIST_STAT CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 61;      /**< Reserved */
        uint64_t ncbo                    : 1;       /**< NCB output FIFO BIST status */
        uint64_t loc                     : 1;       /**< Local memory BIST status */
        uint64_t ncbi                    : 1;       /**< NCB input FIFO BIST status */
#else
        uint64_t ncbi                    : 1;
        uint64_t loc                     : 1;
        uint64_t ncbo                    : 1;
        uint64_t reserved                : 61;
#endif
    } s;
} cvmx_mio_boot_bist_stat_t;


/**
 * MIO_BOOT_ERR = MIO Boot Error Register
 *
 *  Contains the address decode error and wait mode error bits.  Address decode error is set when a
 *  boot bus access does not hit in any of the 8 remote regions or 2 local regions.  Wait mode error is
 *  set when wait mode is enabled and the external wait signal is not de-asserted after 16k eclk cycles.
 *
 * - Access using the CVMX_MIO_BOOT_ERR CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 62;      /**< Reserved */
        uint64_t wait_err                : 1;       /**< Wait mode error */
        uint64_t adr_err                 : 1;       /**< Address decode error */
#else
        uint64_t adr_err                 : 1;
        uint64_t wait_err                : 1;
        uint64_t reserved                : 62;
#endif
    } s;
} cvmx_mio_boot_err_t;


/**
 * MIO_BOOT_INT = MIO Boot Interrupt Register
 *
 *  Contains the interrupt enable bits for address decode error and wait mode error.
 *
 * - Access using the CVMX_MIO_BOOT_INT CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 62;      /**< Reserved */
        uint64_t wait_int                : 1;       /**< Wait mode error interrupt enable */
        uint64_t adr_int                 : 1;       /**< Address decode error interrupt enable */
#else
        uint64_t adr_int                 : 1;
        uint64_t wait_int                : 1;
        uint64_t reserved                : 62;
#endif
    } s;
} cvmx_mio_boot_int_t;


/**
 * MIO_BOOT_LOC_ADR = MIO Boot Local Memory Address Register
 *
 *  Specifies the address for reading or writing the local memory.  This address will post-increment
 *  following an access to the MIO Boot Local Memory Data Register (MIO_BOOT_LOC_DAT).
 *  - Local memory region 0 exists from addresses 0x00 - 0x78.
 *  - Local memory region 1 exists from addresses 0x80 - 0xf8.
 *
 * - Access using the CVMX_MIO_BOOT_LOC_ADR CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved1               : 56;      /**< Reserved */
        uint64_t adr                     : 5;       /**< Local memory address */
        uint64_t reserved0               : 3;       /**< Reserved */
#else
        uint64_t reserved0               : 3;
        uint64_t adr                     : 5;
        uint64_t reserved1               : 56;
#endif
    } s;
} cvmx_mio_boot_loc_adr_t;


/**
 * MIO_BOOT_LOC_CFG = MIO Boot Local Region Config Register (1 per region * 2 regions)
 *
 *  Contains local region enable and local region base address parameters.  Each local region is 128
 *  bytes organized as 16 entries x 8 bytes.
 *  Base address specifies address bits [31:7] of the region.
 *
 * - Access using the CVMX_MIO_BOOT_LOC_CFGX(0..1) CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved2               : 32;      /**< Reserved */
        uint64_t en                      : 1;       /**< Local region (0..1) enable */
        uint64_t reserved1               : 3;       /**< Reserved */
        uint64_t base                    : 25;      /**< Local region (0..1) base address */
        uint64_t reserved0               : 3;       /**< Reserved */
#else
        uint64_t reserved0               : 3;
        uint64_t base                    : 25;
        uint64_t reserved1               : 3;
        uint64_t en                      : 1;
        uint64_t reserved2               : 32;
#endif
    } s;
} cvmx_mio_boot_loc_cfgx_t;


/**
 * MIO_BOOT_LOC_DAT = MIO Boot Local Memory Data Register
 *
 *  This is a pseudo-register that will read/write the local memory at the address specified by the MIO
 *  Boot Local Address Register (MIO_BOOT_LOC_ADR) when accessed.
 *
 * - Access using the CVMX_MIO_BOOT_LOC_DAT CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t data                    : 64;      /**< Local memory data */
#else
        uint64_t data                    : 64;
#endif
    } s;
} cvmx_mio_boot_loc_dat_t;


/**
 * MIO_BOOT_REG_CFG = MIO Boot Region Config Register (1 per region * 8 regions)
 *
 *  Contains region enable, region or, region size, and region base address parameters.
 *  Region or bit will assert the given region's chip enable when there is an address hit in the previous
 *  region (no function for region 0, since there is no previous region).  This is useful for CF cards
 *  because it allows the use of 2 separate timing configurations for common memory and attribute memory.
 *  Region size is in 64k blocks and in -1 notation (i.e. 0 = 1 64k block, 1 = 2 64k blocks, etc.).
 *  Base address specifies address bits [31:16] of the first 64k block of the region.
 *
 * - Access using the CVMX_MIO_BOOT_REG_CFG0 CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved1               : 32;      /**< Reserved */
        uint64_t en                      : 1;       /**< Region 0 enable */
        uint64_t orbit                   : 1;       /**< No function for region 0 */
        uint64_t reserved0               : 2;       /**< Reserved */
        uint64_t size                    : 12;      /**< Region 0 size */
        uint64_t base                    : 16;      /**< Region 0 base address */
#else
        uint64_t base                    : 16;
        uint64_t size                    : 12;
        uint64_t reserved0               : 2;
        uint64_t orbit                   : 1;
        uint64_t en                      : 1;
        uint64_t reserved1               : 32;
#endif
    } s;
} cvmx_mio_boot_reg_cfg0_t;


/**
 * - Access using the CVMX_MIO_BOOT_REG_CFGX(1..7) CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved1               : 32;      /**< Reserved */
        uint64_t en                      : 1;       /**< Region (1..7) enable */
        uint64_t orbit                   : 1;       /**< Region (1..7) or bit */
        uint64_t reserved0               : 2;       /**< Reserved */
        uint64_t size                    : 12;      /**< Region (1..7) size */
        uint64_t base                    : 16;      /**< Region (1..7) base address */
#else
        uint64_t base                    : 16;
        uint64_t size                    : 12;
        uint64_t reserved0               : 2;
        uint64_t orbit                   : 1;
        uint64_t en                      : 1;
        uint64_t reserved1               : 32;
#endif
    } s;
} cvmx_mio_boot_reg_cfgx_t;


/**
 * MIO_BOOT_REG_TIM = MIO Boot Region Timing Register (1 per region * 8 regions)
 *
 *  Contains page mode, wait mode, and region timing parameters.
 *
 * - Access using the CVMX_MIO_BOOT_REG_TIM0 CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t pagem                   : 1;       /**< Region 0 page mode */
        uint64_t waitm                   : 1;       /**< Region 0 wait mode */
        uint64_t reserved                : 8;       /**< Reserved */
        uint64_t page                    : 6;       /**< Region 0 page count */
        uint64_t wait                    : 6;       /**< Region 0 wait count */
        uint64_t pause                   : 6;       /**< Region 0 pause count */
        uint64_t wr_hld                  : 6;       /**< Region 0 write hold count */
        uint64_t rd_hld                  : 6;       /**< Region 0 read hold count */
        uint64_t we                      : 6;       /**< Region 0 write enable count */
        uint64_t oe                      : 6;       /**< Region 0 output enable count */
        uint64_t ce                      : 6;       /**< Region 0 chip enable count */
        uint64_t adr                     : 6;       /**< Region 0 address count */
#else
        uint64_t adr                     : 6;
        uint64_t ce                      : 6;
        uint64_t oe                      : 6;
        uint64_t we                      : 6;
        uint64_t rd_hld                  : 6;
        uint64_t wr_hld                  : 6;
        uint64_t pause                   : 6;
        uint64_t wait                    : 6;
        uint64_t page                    : 6;
        uint64_t reserved                : 8;
        uint64_t waitm                   : 1;
        uint64_t pagem                   : 1;
#endif
    } s;
} cvmx_mio_boot_reg_tim0_t;


/**
 * - Access using the CVMX_MIO_BOOT_REG_TIMX(1..7) CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t pagem                   : 1;       /**< Region (1..7) page mode */
        uint64_t waitm                   : 1;       /**< Region (1..7) wait mode */
        uint64_t reserved                : 8;       /**< Reserved */
        uint64_t page                    : 6;       /**< Region (1..7) page count */
        uint64_t wait                    : 6;       /**< Region (1..7) wait count */
        uint64_t pause                   : 6;       /**< Region (1..7) pause count */
        uint64_t wr_hld                  : 6;       /**< Region (1..7) write hold count */
        uint64_t rd_hld                  : 6;       /**< Region (1..7) read hold count */
        uint64_t we                      : 6;       /**< Region (1..7) write enable count */
        uint64_t oe                      : 6;       /**< Region (1..7) output enable count */
        uint64_t ce                      : 6;       /**< Region (1..7) chip enable count */
        uint64_t adr                     : 6;       /**< Region (1..7) address count */
#else
        uint64_t adr                     : 6;
        uint64_t ce                      : 6;
        uint64_t oe                      : 6;
        uint64_t we                      : 6;
        uint64_t rd_hld                  : 6;
        uint64_t wr_hld                  : 6;
        uint64_t pause                   : 6;
        uint64_t wait                    : 6;
        uint64_t page                    : 6;
        uint64_t reserved                : 8;
        uint64_t waitm                   : 1;
        uint64_t pagem                   : 1;
#endif
    } s;
} cvmx_mio_boot_reg_timx_t;


/**
 * MIO_BOOT_THR = MIO Boot Threshold Register
 *
 *  Contains MIO Boot threshold values (not typically for customer use):
 *  - FIF_THR = Assert ncb__busy when the Boot NCB input FIFO reaches this level.
 *
 * - Access using the CVMX_MIO_BOOT_THR CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 58;      /**< Reserved */
        uint64_t fif_thr                 : 6;       /**< NCB busy threshold */
#else
        uint64_t fif_thr                 : 6;
        uint64_t reserved                : 58;
#endif
    } s;
} cvmx_mio_boot_thr_t;


/**
 * - Access using the CVMX_MIO_FUS_DAT0 CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 32;      /**< Reserved */
        uint64_t man_info                : 32;      /**< Fuse information - manufacturing info [31:0] */
#else
        uint64_t man_info                : 32;
        uint64_t reserved                : 32;
#endif
    } s;
} cvmx_mio_fus_dat0_t;


/**
 * - Access using the CVMX_MIO_FUS_DAT1 CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 32;      /**< Reserved */
        uint64_t man_info                : 32;      /**< Fuse information - manufacturing info [63:32] */
#else
        uint64_t man_info                : 32;
        uint64_t reserved                : 32;
#endif
    } s;
} cvmx_mio_fus_dat1_t;


/**
 * - Access using the CVMX_MIO_FUS_DAT2 CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 32;      /**< Reserved */
        uint64_t fus                     : 6;       /**< Fuse information */
        uint64_t rst_sht                 : 1;       /**< Fuse information - When set, use short reset count */
        uint64_t bist_dis                : 1;       /**< Fuse information - BIST Disable */
        uint64_t chip_id                 : 8;       /**< Fuse information - CHIP_ID */
        uint64_t pp_dis                  : 16;      /**< Fuse information - PP_DISABLES */
#else
        uint64_t pp_dis                  : 16;
        uint64_t chip_id                 : 8;
        uint64_t bist_dis                : 1;
        uint64_t rst_sht                 : 1;
        uint64_t fus                     : 6;
        uint64_t reserved                : 32;
#endif
    } s;
} cvmx_mio_fus_dat2_t;


/**
 * - Access using the CVMX_MIO_FUS_DAT3 CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 32;      /**< Reserved */
        uint64_t fus                     : 7;       /**< Fuse information */
        uint64_t icache                  : 25;      /**< Fuse information - ICACHE Hard Repair Data */
#else
        uint64_t icache                  : 25;
        uint64_t fus                     : 7;
        uint64_t reserved                : 32;
#endif
    } s;
} cvmx_mio_fus_dat3_t;


/**
 * MIO_TWS_INT = TWSI Interrupt Register
 *
 *  This register contains the TWSI interrupt enable mask and the interrupt source bits.  Note: the
 *  interrupt source bit for the TWSI core interrupt (CORE_INT) is read-only, the appropriate sequence
 *  must be written to the TWSI core to clear this interrupt.  The other interrupt source bits are write-
 *  one-to-clear.  TS_INT is set on the update of the MIO_TWS_TWSI_SW register (i.e. when it is written
 *  by a TWSI device).  ST_INT is set whenever the valid bit of the MIO_TWS_SW_TWSI is cleared (see above
 *  for reasons).
 *
 * - Access using the CVMX_MIO_TWS_INT CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved1               : 57;      /**< Reserved */
        uint64_t core_en                 : 1;       /**< TWSI core interrupt enable */
        uint64_t ts_en                   : 1;       /**< MIO_TWS_TWSI_SW register update interrupt enable */
        uint64_t st_en                   : 1;       /**< MIO_TWS_SW_TWSI register update interrupt enable */
        uint64_t reserved0               : 1;       /**< Reserved */
        uint64_t core_int                : 1;       /**< TWSI core interrupt */
        uint64_t ts_int                  : 1;       /**< MIO_TWS_TWSI_SW register update interrupt */
        uint64_t st_int                  : 1;       /**< MIO_TWS_SW_TWSI register update interrupt */
#else
        uint64_t st_int                  : 1;
        uint64_t ts_int                  : 1;
        uint64_t core_int                : 1;
        uint64_t reserved0               : 1;
        uint64_t st_en                   : 1;
        uint64_t ts_en                   : 1;
        uint64_t core_en                 : 1;
        uint64_t reserved1               : 57;
#endif
    } s;
} cvmx_mio_tws_int_t;


/**
 * MIO_TWS_SW_TWSI = Software to TWSI Register
 *
 *  This register allows software to
 *     - initiate TWSI interface master-mode operations with a write and read the result with a read
 *     - load four bytes for later retrieval (slave mode) with a write and check validity with a read
 *     - launch a TWSI controller configuration read/write with a write and read the result with a read
 *  This register should be read or written by software, and read by the TWSI device. The TWSI device can
 *  use either two-byte or five-byte reads to reference this register.
 *  The TWSI device considers this register valid when V==1 and SLONLY==1.
 *
 * - Access using the CVMX_MIO_TWS_SW_TWSI CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t v                       : 1;       /**< Valid bit
                                                         - Set on a write (should always be written with
                                                         a 1)
                                                         - Cleared when a TWSI master mode op completes
                                                         - Cleared when a TWSI configuration register
                                                         access completes
                                                         - Cleared when the TWSI device reads the
                                                         register if SLONLY==1 */
        uint64_t slonly                  : 1;       /**< Slave Only Mode
                                                         - No operation is initiated with a write when
                                                         this bit is set - only D field is updated in
                                                         this case
                                                         - When clear, a write initiates either a TWSI
                                                         master-mode operation or a TWSI configuration
                                                         register access */
        uint64_t flop                    : 1;       /**< Unused, retains state */
        uint64_t op                      : 4;       /**< Opcode field - When the register is written with
                                                         SLONLY==0, initiate a read or write:
                                                         - 0000 => 7-bit Byte Master Mode TWSI Op
                                                         - 0001 => 7-bit Combined Byte Master Mode Op
                                                         - 0010 => 10-bit Byte Master Mode TWSI Op
                                                         - 0011 => 10-bit Combined Byte Master Mode Op
                                                         - 0100 => TWSI Master Clock Register
                                                         - 0110 => See EOP field
                                                         - 1000 => 7-bit 4-byte Master Mode TWSI Op
                                                         - 1001 => 7-bit 4-byte Comb. Master Mode Op
                                                         - 1010 => 10-bit 4-byte Master Mode TWSI Op
                                                         - 1011 => 10-bit 4-byte Comb. Master Mode Op */
        uint64_t r                       : 1;       /**< Read bit or result
                                                         - If set on a write when SLONLY==0, the
                                                         operation is a read
                                                         - On a read, this bit returns the result
                                                         indication for the most recent master mode
                                                         operation (1 = success, 0 = fail) */
        uint64_t flops                   : 6;       /**< Unused, but retain state */
        uint64_t a                       : 10;      /**< Address field
                                                         - the address of the remote device for a master
                                                         mode operation
                                                         - A<9:7> are only used for 10-bit addressing */
        uint64_t ia                      : 5;       /**< Internal Address - Used when launching a combined
                                                         master mode operation (lower 3 bits are
                                                         contained in the EOP_IA field) */
        uint64_t eop_ia                  : 3;       /**< Extra opcode (when OP<3:0> == 0110 and SLONLY==0):
                                                         - 000 => TWSI Slave Address Register
                                                         - 001 => TWSI Data Register
                                                         - 010 => TWSI Control Register
                                                         - 011 => TWSI Clock Control Register (when R == 0)
                                                         - 011 => TWSI Status Register (when R == 1)
                                                         - 100 => TWSI Extended Slave Register
                                                         - 111 => TWSI Soft Reset Register
                                                         Also the lower 3 bits of Internal Address when
                                                         launching a combined master mode operation */
        uint64_t d                       : 32;      /**< Data Field
                                                         Used on a write when
                                                         - initiating a master-mode write (SLONLY==0)
                                                         - writing a TWSI config register (SLONLY==0)
                                                         - a slave mode write (SLONLY==1)
                                                         The read value is updated by
                                                         - a write to this register
                                                         - master mode completion (contains error code)
                                                         - TWSI config register read (contains result) */
#else
        uint64_t d                       : 32;
        uint64_t eop_ia                  : 3;
        uint64_t ia                      : 5;
        uint64_t a                       : 10;
        uint64_t flops                   : 6;
        uint64_t r                       : 1;
        uint64_t op                      : 4;
        uint64_t flop                    : 1;
        uint64_t slonly                  : 1;
        uint64_t v                       : 1;
#endif
    } s;
} cvmx_mio_tws_sw_twsi_t;


/**
 * MIO_TWS_TWSI_SW = TWSI to Software Register
 *
 *  This register allows the TWSI device to transfer data to software and later check that software has
 *  received the information.
 *  This register should be read or written by the TWSI device, and read by software. The TWSI device can
 *  use one-byte or four-byte payload writes, and two-byte payload reads.
 *  The TWSI device considers this register valid when V==1.
 *
 * - Access using the CVMX_MIO_TWS_TWSI_SW CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t v                       : 2;       /**< Valid Bits
                                                         - Not directly writable
                                                         - Set to 1 on any write by the TWSI device
                                                         - Cleared on any read by software */
        uint64_t reserved                : 30;      /**< Reserved */
        uint64_t d                       : 32;      /**< Data Field - updated on a write by the TWSI device */
#else
        uint64_t d                       : 32;
        uint64_t reserved                : 30;
        uint64_t v                       : 2;
#endif
    } s;
} cvmx_mio_tws_twsi_sw_t;


/**
 * NPI_BASE_ADDR_INPUT3 = NPI's Base Address Input 3 Register
 *  The address to start reading Instructions from for Input-3.
 *
 * - Access using the CVMX_NPI_BASE_ADDR_INPUT3 CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t baddr                   : 61;      /**< The address to read Instruction from for output 0.
                                                         This address is 8-byte aligned, for this reason
                                                         address bits [2:0] will always be zero. */
        uint64_t reserved                : 3;       /**< Reserved */
#else
        uint64_t reserved                : 3;
        uint64_t baddr                   : 61;
#endif
    } s;
} cvmx_npi_base_addr_input_t;


/**
 * NPI_BASE_ADDR_OUTPUT3 = NPI's Base Address Output 3 Register
 *  The address to start reading Instructions from for Output-3.
 *
 * - Access using the CVMX_NPI_BASE_ADDR_OUTPUT3 CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t baddr                   : 61;      /**< The address to read Instruction from for output 3.
                                                         This address is 8-byte aligned, for this reason
                                                         address bits [2:0] will always be zero. */
        uint64_t reserved                : 3;       /**< Reserved */
#else
        uint64_t reserved                : 3;
        uint64_t baddr                   : 61;
#endif
    } s;
} cvmx_npi_base_addr_output_t;


/**
 * NPI_BIST_STATUS = NPI's BIST Status Register
 *  Results from BIST runs of NPI's memories.
 *
 * - Access using the CVMX_NPI_BIST_STATUS CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 44;      /**< Reserved */
        uint64_t csr_bs                  : 1;       /**< BIST Status for the csr_fifo */
        uint64_t dif_bs                  : 1;       /**< BIST Status for the dif_fifo */
        uint64_t rdp_bs                  : 1;       /**< BIST Status for the rdp_fifo */
        uint64_t pcnc_bs                 : 1;       /**< BIST Status for the pcn_cnt_fifo */
        uint64_t pcn_bs                  : 1;       /**< BIST Status for the pcn_fifo */
        uint64_t rdn_bs                  : 1;       /**< BIST Status for the rdn_fifo */
        uint64_t pcac_bs                 : 1;       /**< BIST Status for the pca_cmd_fifo */
        uint64_t pcad_bs                 : 1;       /**< BIST Status for the pca_data_fifo */
        uint64_t rdnl_bs                 : 1;       /**< BIST Status for the rdn_length_fifo */
        uint64_t pgf_bs                  : 1;       /**< BIST Status for the pgf_fifo */
        uint64_t pig_bs                  : 1;       /**< BIST Status for the pig_fifo */
        uint64_t pof0_bs                 : 1;       /**< BIST Status for the pof0_fifo */
        uint64_t pof1_bs                 : 1;       /**< BIST Status for the pof1_fifo */
        uint64_t pof2_bs                 : 1;       /**< BIST Status for the pof2_fifo */
        uint64_t pof3_bs                 : 1;       /**< BIST Status for the pof3_fifo */
        uint64_t pos_bs                  : 1;       /**< BIST Status for the pos_fifo */
        uint64_t nus_bs                  : 1;       /**< BIST Status for the nus_fifo */
        uint64_t dob_bs                  : 1;       /**< BIST Status for the dob_fifo */
        uint64_t pdf_bs                  : 1;       /**< BIST Status for the pdf_fifo */
        uint64_t dpi_bs                  : 1;       /**< BIST Status for the dpi_fifo */
#else
        uint64_t dpi_bs                  : 1;
        uint64_t pdf_bs                  : 1;
        uint64_t dob_bs                  : 1;
        uint64_t nus_bs                  : 1;
        uint64_t pos_bs                  : 1;
        uint64_t pof3_bs                 : 1;
        uint64_t pof2_bs                 : 1;
        uint64_t pof1_bs                 : 1;
        uint64_t pof0_bs                 : 1;
        uint64_t pig_bs                  : 1;
        uint64_t pgf_bs                  : 1;
        uint64_t rdnl_bs                 : 1;
        uint64_t pcad_bs                 : 1;
        uint64_t pcac_bs                 : 1;
        uint64_t rdn_bs                  : 1;
        uint64_t pcn_bs                  : 1;
        uint64_t pcnc_bs                 : 1;
        uint64_t rdp_bs                  : 1;
        uint64_t dif_bs                  : 1;
        uint64_t csr_bs                  : 1;
        uint64_t reserved                : 44;
#endif
    } s;
} cvmx_npi_bist_status_t;


/**
 * NPI_BUFF_SIZE_OUTPUT3 = NPI's D/I Buffer Sizes For Output 3
 *  The size in bytes of the Data Bufffer and Information Buffer for output 3.
 *
 * - Access using the CVMX_NPI_BUFF_SIZE_OUTPUT3 CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 41;      /**< Reserved */
        uint64_t isize                   : 7;       /**< The number of bytes to move to the Info-Pointer
                                                         from the front of the packet. */
        uint64_t bsize                   : 16;      /**< The size in bytes of the area pointed to by
                                                         buffer pointer for output packet data. */
#else
        uint64_t bsize                   : 16;
        uint64_t isize                   : 7;
        uint64_t reserved                : 41;
#endif
    } s;
} cvmx_npi_buff_size_output_t;


/**
 * NPI_CTL_STATUS = NPI's Control Status Register
 *  Contains control ans status for NPI.
 *
 * - Access using the CVMX_NPI_CTL_STATUS CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 1;       /**< Reserved */
        uint64_t chip_rev                : 8;       /**< The revision of the N3.
                                                         register will be disabled. */
        uint64_t dis_pniw                : 1;       /**< When asserted '1' access from the PNI Window
                                                         Registers are disabled. */
        uint64_t out3_enb                : 1;       /**< When asserted '1' the output3 engine is enabled.
                                                         After enabling the values of the associated
                                                         Address and Size Register should not be changed. */
        uint64_t out2_enb                : 1;       /**< When asserted '1' the output2 engine is enabled.
                                                         After enabling the values of the associated
                                                         Address and Size Register should not be changed. */
        uint64_t out1_enb                : 1;       /**< When asserted '1' the output1 engine is enabled.
                                                         After enabling the values of the associated
                                                         Address and Size Register should not be changed. */
        uint64_t out0_enb                : 1;       /**< When asserted '1' the output0 engine is enabled.
                                                         After enabling the values of the associated
                                                         Address and Size Register should not be changed. */
        uint64_t ins3_enb                : 1;       /**< When asserted '1' the gather3 engine is enabled.
                                                         After enabling the values of the associated
                                                         Address and Size Register should not be changed.
                                                         write operation. */
        uint64_t ins2_enb                : 1;       /**< When asserted '1' the gather2 engine is enabled.
                                                         After enabling the values of the associated
                                                         Address and Size Register should not be changed. */
        uint64_t ins1_enb                : 1;       /**< When asserted '1' the gather1 engine is enabled.
                                                         After enabling the values of the associated
                                                         Address and Size Register should not be changed. */
        uint64_t ins0_enb                : 1;       /**< When asserted '1' the gather0 engine is enabled.
                                                         After enabling the values of the associated
                                                         Address and Size Register should not be changed. */
        uint64_t ins3_64b                : 1;       /**< When asserted '1' the instructions read by the
                                                         gather3 engine are 64-Byte instructions, when
                                                         de-asserted '0' instructions are 32-byte. */
        uint64_t ins2_64b                : 1;       /**< When asserted '1' the instructions read by the
                                                         gather2 engine are 64-Byte instructions, when
                                                         de-asserted '0' instructions are 32-byte. */
        uint64_t ins1_64b                : 1;       /**< When asserted '1' the instructions read by the
                                                         gather1 engine are 64-Byte instructions, when
                                                         de-asserted '0' instructions are 32-byte. */
        uint64_t ins0_64b                : 1;       /**< When asserted '1' the instructions read by the
                                                         gather0 engine are 64-Byte instructions, when
                                                         de-asserted '0' instructions are 32-byte. */
        uint64_t pci_wdis                : 1;       /**< When set '1' disables access to registers in
                                                         PNI address range 0x1000 - 0x17FF from the PCI. */
        uint64_t wait_com                : 1;       /**< When set '1' casues the NPI to wait for a commit
                                                         from the L2C before sending additional access to
                                                         the L2C from the PCI. */
        uint64_t spares1                 : 3;       /**< These bits are reserved and should be set to 0. */
        uint64_t max_word                : 5;       /**< The maximum number of words to merge into a single
                                                         write operation from the PPs to the PCI. Legal
                                                         values are 1 to 32, where a '0' is treated as 32. */
        uint64_t spares0                 : 22;      /**< These bits are reserved and should be set to 0. */
        uint64_t timer                   : 10;      /**< When the NPI starts a PP to PCI write it will wait
                                                         no longer than the value of TIMER in eclks to
                                                         merge additional writes from the PPs into 1
                                                         large write. The values for this field is 1 to
                                                         1024 where a value of '0' is treated as 1024. */
#else
        uint64_t timer                   : 10;
        uint64_t spares0                 : 22;
        uint64_t max_word                : 5;
        uint64_t spares1                 : 3;
        uint64_t wait_com                : 1;
        uint64_t pci_wdis                : 1;
        uint64_t ins0_64b                : 1;
        uint64_t ins1_64b                : 1;
        uint64_t ins2_64b                : 1;
        uint64_t ins3_64b                : 1;
        uint64_t ins0_enb                : 1;
        uint64_t ins1_enb                : 1;
        uint64_t ins2_enb                : 1;
        uint64_t ins3_enb                : 1;
        uint64_t out0_enb                : 1;
        uint64_t out1_enb                : 1;
        uint64_t out2_enb                : 1;
        uint64_t out3_enb                : 1;
        uint64_t dis_pniw                : 1;
        uint64_t chip_rev                : 8;
        uint64_t reserved                : 1;
#endif
    } s;
} cvmx_npi_ctl_status_t;


/**
 * NPI_HIGHP_DBELL = High Priority Door Bell
 *  The door bell register for the high priority DMA queue.
 *
 * - Access using the CVMX_NPI_HIGHP_DBELL CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 48;      /**< Reserved */
        uint64_t dbell                   : 16;      /**< The value written to this register is added to the
                                                         number of 8byte words to be read and processes for
                                                         the high priority dma queue. */
#else
        uint64_t dbell                   : 16;
        uint64_t reserved                : 48;
#endif
    } s;
} cvmx_npi_dbell_t;


/**
 * NPI_DBG_SELECT = Debug Select Register
 *  Contains the debug select value in last written to the RSLs.
 *
 * - Access using the CVMX_NPI_DBG_SELECT CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 48;      /**< Reserved */
        uint64_t dbg_sel                 : 16;      /**< When this register is written its value is sent to
                                                         all RSLs. */
#else
        uint64_t dbg_sel                 : 16;
        uint64_t reserved                : 48;
#endif
    } s;
} cvmx_npi_dbg_select_t;


/**
 * NPI_P3_DBPAIR_ADDR = NPI's Port-3 DATA-BUFFER Pair Next Read Address.
 *  Contains the next address to read for Port's-3 Data/Buffer Pair.
 *
 * - Access using the CVMX_NPI_P3_DBPAIR_ADDR CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 1;       /**< Reserved */
        uint64_t state                   : 2;       /**< State. */
        uint64_t naddr                   : 61;      /**< Bits [63:3] of the next Data-Info Pair to read.
                                                         Value is only valid when STATE == 0. */
#else
        uint64_t naddr                   : 61;
        uint64_t state                   : 2;
        uint64_t reserved                : 1;
#endif
    } s;
} cvmx_npi_dbpair_addr_t;


/**
 * NPI_DMA_CONTROL = DMA Control Register
 *  Controls operation of the DMA IN/OUT of the NPI.
 *
 * - Access using the CVMX_NPI_DMA_CONTROL CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 29;      /**< Reserved */
        uint64_t dwb_denb                : 1;       /**< When set '1' the NPI will send a value in the DWB
                                                         field for a free page operation for the memory
                                                         that contained the data in N3. */
        uint64_t dwb_ichk                : 9;       /**< When Instruction Chunks for DMA operations are freed
                                                         this value is used for the DWB field of the
                                                         operation. */
        uint64_t fpa_que                 : 3;       /**< The FPA queue that the instruction-chunk page will
                                                         be returned to when used. */
        uint64_t o_add1                  : 1;       /**< When set '1' 1 will be added to the DMA counters,
                                                         if '0' then the number of bytes in the dma transfer
                                                         will be added to the count register. */
        uint64_t o_ro                    : 1;       /**< Relaxed Ordering Mode for DMA. */
        uint64_t o_ns                    : 1;       /**< Nosnoop For DMA. */
        uint64_t o_es                    : 2;       /**< Endian Swap Mode for DMA. */
        uint64_t o_mode                  : 1;       /**< Select PCI_POINTER MODE to be used.
                                                         '1' use pointer values for address and register
                                                         values for RO, ES, and NS, 0 use csr values for
                                                         address and pointer values for RO, ES, and NS. */
        uint64_t hp_enb                  : 1;       /**< Enables the High Priority DMA. */
        uint64_t lp_enb                  : 1;       /**< Enables the Low Priority DMA. */
        uint64_t csize                   : 14;      /**< The size in words of the DMA Instruction Chunk. */
#else
        uint64_t csize                   : 14;
        uint64_t lp_enb                  : 1;
        uint64_t hp_enb                  : 1;
        uint64_t o_mode                  : 1;
        uint64_t o_es                    : 2;
        uint64_t o_ns                    : 1;
        uint64_t o_ro                    : 1;
        uint64_t o_add1                  : 1;
        uint64_t fpa_que                 : 3;
        uint64_t dwb_ichk                : 9;
        uint64_t dwb_denb                : 1;
        uint64_t reserved                : 29;
#endif
    } s;
} cvmx_npi_dma_control_t;


/**
 * NPI_DMA_HIGHP_COUNTS = NPI's High Priority DMA Counts
 *  Values for determing the number of instructions for High Priority DMA in the NPI.
 *
 * - Access using the CVMX_NPI_DMA_HIGHP_COUNTS CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 25;      /**< Reserved */
        uint64_t fcnt                    : 7;       /**< Number of words in the Instruction FIFO. */
        uint64_t dbell                   : 32;      /**< Number of available words of Instructions to read. */
#else
        uint64_t dbell                   : 32;
        uint64_t fcnt                    : 7;
        uint64_t reserved                : 25;
#endif
    } s;
} cvmx_npi_dma_counts_t;


/**
 * NPI_HIGHP_IBUFF_SADDR = DMA High Priority Instruction Buffer Starting Address
 *  The address to start reading Instructions from for HIGHP.
 *
 * - Access using the CVMX_NPI_HIGHP_IBUFF_SADDR CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 28;      /**< Reserved */
        uint64_t saddr                   : 36;      /**< The starting address to read the first instruction. */
#else
        uint64_t saddr                   : 36;
        uint64_t reserved                : 28;
#endif
    } s;
} cvmx_npi_dma_ibuff_saddr_t;


/**
 * NPI_DMA_HIGHP_NADDR = NPI's High Priority DMA Next Ichunk Address
 *  Place NPI will read the next Ichunk data from. This is valid when state is 0
 *
 * - Access using the CVMX_NPI_DMA_HIGHP_NADDR CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 24;      /**< Reserved */
        uint64_t state                   : 4;       /**< State. */
        uint64_t addr                    : 36;      /**< Next read address. */
#else
        uint64_t addr                    : 36;
        uint64_t state                   : 4;
        uint64_t reserved                : 24;
#endif
    } s;
} cvmx_npi_dma_naddr_t;


/**
 * NPI_INPUT_CONTROL = NPI's Input Control Register
 *  Control for reads for gather list and instructions.
 *
 * - Access using the CVMX_NPI_INPUT_CONTROL CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 55;      /**< Reserved */
        uint64_t d_nsr                   : 1;       /**< Enables '1' NoSnoop for reading of
                                                         gather data. */
        uint64_t d_esr                   : 2;       /**< The Endian-Swap-Mode for reading of
                                                         gather data. */
        uint64_t d_ror                   : 1;       /**< Enables '1' Relaxed Ordering for reading of
                                                         gather data. */
        uint64_t use_csr                 : 1;       /**< When set '1' the csr value will be used for
                                                         ROR, ESR, and NSR. When clear '0' the value in
                                                         DPTR will be used. In turn the bits not used for
                                                         ROR, ESR, and NSR, will be used for bits [63:60]
                                                         of the address used to fetch packet data. */
        uint64_t nsr                     : 1;       /**< Enables '1' NoSnoop for reading of
                                                         gather list and gather instruction. */
        uint64_t esr                     : 2;       /**< The Endian-Swap-Mode for reading of
                                                         gather list and gather instruction. */
        uint64_t ror                     : 1;       /**< Enables '1' Relaxed Ordering for reading of
                                                         gather list and gather instruction. */
#else
        uint64_t ror                     : 1;
        uint64_t esr                     : 2;
        uint64_t nsr                     : 1;
        uint64_t use_csr                 : 1;
        uint64_t d_ror                   : 1;
        uint64_t d_esr                   : 2;
        uint64_t d_nsr                   : 1;
        uint64_t reserved                : 55;
#endif
    } s;
} cvmx_npi_input_control_t;


/**
 * NPI_P3_INSTR_ADDR = NPI's Port-3 Instruction Next Read Address.
 *  Contains the next address to read for Port's-3 Instructions.
 *
 * - Access using the CVMX_NPI_P3_INSTR_ADDR CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t state                   : 3;       /**< State. */
        uint64_t naddr                   : 61;      /**< Bits [63:3] of the next Instruction to read.
                                                         Value is only valid when STATE == 0. */
#else
        uint64_t naddr                   : 61;
        uint64_t state                   : 3;
#endif
    } s;
} cvmx_npi_instr_addr_t;


/**
 * NPI_P3_INSTR_CNTS = NPI's Port-3 Instruction Counts For Packets In.
 *  Used to determine the number of instruction in the NPI and to be fetched for Input-Packets.
 *
 * - Access using the CVMX_NPI_P3_INSTR_CNTS CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 26;      /**< Reserved */
        uint64_t fcnt                    : 6;       /**< Number entries in the Instruction FIFO. */
        uint64_t avail                   : 32;      /**< Doorbell count to be read. */
#else
        uint64_t avail                   : 32;
        uint64_t fcnt                    : 6;
        uint64_t reserved                : 26;
#endif
    } s;
} cvmx_npi_instr_cnts_t;


/**
 * NPI_INTERRUPT_ENB = NPI's Interrupt Enable Register
 *  Used to enable the various interrupting conditions of NPI
 *
 * - Access using the CVMX_NPI_INT_ENB CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 22;      /**< Reserved */
        uint64_t iobdma                  : 1;       /**< Enables NPI_INT_SUM[IOBDMA] to generate an
                                                         interrupt. */
        uint64_t p_dperr                 : 1;       /**< Enables NPI_INT_SUM[P_DPERR] to generate an
                                                         interrupt. */
        uint64_t win_rto                 : 1;       /**< Enables NPI_INT_SUM[WIN_RTO] to generate an
                                                         interrupt. */
        uint64_t i3_pperr                : 1;       /**< Enables NPI_INT_SUM[I3_PPERR] to generate an
                                                         interrupt. */
        uint64_t i2_pperr                : 1;       /**< Enables NPI_INT_SUM[I2_PPERR] to generate an
                                                         interrupt. */
        uint64_t i1_pperr                : 1;       /**< Enables NPI_INT_SUM[I1_PPERR] to generate an
                                                         interrupt. */
        uint64_t i0_pperr                : 1;       /**< Enables NPI_INT_SUM[I0_PPERR] to generate an
                                                         interrupt. */
        uint64_t p3_ptout                : 1;       /**< Enables NPI_INT_SUM[P3_PTOUT] to generate an
                                                         interrupt. */
        uint64_t p2_ptout                : 1;       /**< Enables NPI_INT_SUM[P2_PTOUT] to generate an
                                                         interrupt. */
        uint64_t p1_ptout                : 1;       /**< Enables NPI_INT_SUM[P1_PTOUT] to generate an
                                                         interrupt. */
        uint64_t p0_ptout                : 1;       /**< Enables NPI_INT_SUM[P0_PTOUT] to generate an
                                                         interrupt. */
        uint64_t p3_pperr                : 1;       /**< Enables NPI_INT_SUM[P3_PPERR] to generate an
                                                         interrupt. */
        uint64_t p2_pperr                : 1;       /**< Enables NPI_INT_SUM[P2_PPERR] to generate an
                                                         interrupt. */
        uint64_t p1_pperr                : 1;       /**< Enables NPI_INT_SUM[P1_PPERR] to generate an
                                                         interrupt. */
        uint64_t p0_pperr                : 1;       /**< Enables NPI_INT_SUM[P0_PPERR] to generate an
                                                         interrupt. */
        uint64_t g3_rtout                : 1;       /**< Enables NPI_INT_SUM[G3_RTOUT] to generate an
                                                         interrupt. */
        uint64_t g2_rtout                : 1;       /**< Enables NPI_INT_SUM[G2_RTOUT] to generate an
                                                         interrupt. */
        uint64_t g1_rtout                : 1;       /**< Enables NPI_INT_SUM[G1_RTOUT] to generate an
                                                         interrupt. */
        uint64_t g0_rtout                : 1;       /**< Enables NPI_INT_SUM[G0_RTOUT] to generate an
                                                         interrupt. */
        uint64_t p3_perr                 : 1;       /**< Enables NPI_INT_SUM[P3_PERR] to generate an
                                                         interrupt. */
        uint64_t p2_perr                 : 1;       /**< Enables NPI_INT_SUM[P2_PERR] to generate an
                                                         interrupt. */
        uint64_t p1_perr                 : 1;       /**< Enables NPI_INT_SUM[P1_PERR] to generate an
                                                         interrupt. */
        uint64_t p0_perr                 : 1;       /**< Enables NPI_INT_SUM[P0_PERR] to generate an
                                                         interrupt. */
        uint64_t p3_rtout                : 1;       /**< Enables NPI_INT_SUM[P3_RTOUT] to generate an
                                                         interrupt. */
        uint64_t p2_rtout                : 1;       /**< Enables NPI_INT_SUM[P2_RTOUT] to generate an
                                                         interrupt. */
        uint64_t p1_rtout                : 1;       /**< Enables NPI_INT_SUM[P1_RTOUT] to generate an
                                                         interrupt. */
        uint64_t p0_rtout                : 1;       /**< Enables NPI_INT_SUM[P0_RTOUT] to generate an
                                                         interrupt. */
        uint64_t i3_overf                : 1;       /**< Enables NPI_INT_SUM[I3_OVERF] to generate an
                                                         interrupt. */
        uint64_t i2_overf                : 1;       /**< Enables NPI_INT_SUM[I2_OVERF] to generate an
                                                         interrupt. */
        uint64_t i1_overf                : 1;       /**< Enables NPI_INT_SUM[I1_OVERF] to generate an
                                                         interrupt. */
        uint64_t i0_overf                : 1;       /**< Enables NPI_INT_SUM[I0_OVERF] to generate an
                                                         interrupt. */
        uint64_t i3_rtout                : 1;       /**< Enables NPI_INT_SUM[I3_RTOUT] to generate an
                                                         interrupt. */
        uint64_t i2_rtout                : 1;       /**< Enables NPI_INT_SUM[I2_RTOUT] to generate an
                                                         interrupt. */
        uint64_t i1_rtout                : 1;       /**< Enables NPI_INT_SUM[I1_RTOUT] to generate an
                                                         interrupt. */
        uint64_t i0_rtout                : 1;       /**< Enables NPI_INT_SUM[I0_RTOUT] to generate an
                                                         interrupt. */
        uint64_t po3_2sml                : 1;       /**< Enables NPI_INT_SUM[PO3_2SML] to generate an
                                                         interrupt. */
        uint64_t po2_2sml                : 1;       /**< Enables NPI_INT_SUM[PO2_2SML] to generate an
                                                         interrupt. */
        uint64_t po1_2sml                : 1;       /**< Enables NPI_INT_SUM[PO1_2SML] to generate an
                                                         interrupt. */
        uint64_t po0_2sml                : 1;       /**< Enables NPI_INT_SUM[PO0_2SML] to generate an
                                                         interrupt. */
        uint64_t pci_rsl                 : 1;       /**< Enables NPI_INT_SUM[PCI_RSL] to generate an
                                                         interrupt. */
        uint64_t rml_wto                 : 1;       /**< Enables NPI_INT_SUM[RML_WTO] to generate an
                                                         interrupt. */
        uint64_t rml_rto                 : 1;       /**< Enables NPI_INT_SUM[RML_RTO] to generate an
                                                         interrupt. */
#else
        uint64_t rml_rto                 : 1;
        uint64_t rml_wto                 : 1;
        uint64_t pci_rsl                 : 1;
        uint64_t po0_2sml                : 1;
        uint64_t po1_2sml                : 1;
        uint64_t po2_2sml                : 1;
        uint64_t po3_2sml                : 1;
        uint64_t i0_rtout                : 1;
        uint64_t i1_rtout                : 1;
        uint64_t i2_rtout                : 1;
        uint64_t i3_rtout                : 1;
        uint64_t i0_overf                : 1;
        uint64_t i1_overf                : 1;
        uint64_t i2_overf                : 1;
        uint64_t i3_overf                : 1;
        uint64_t p0_rtout                : 1;
        uint64_t p1_rtout                : 1;
        uint64_t p2_rtout                : 1;
        uint64_t p3_rtout                : 1;
        uint64_t p0_perr                 : 1;
        uint64_t p1_perr                 : 1;
        uint64_t p2_perr                 : 1;
        uint64_t p3_perr                 : 1;
        uint64_t g0_rtout                : 1;
        uint64_t g1_rtout                : 1;
        uint64_t g2_rtout                : 1;
        uint64_t g3_rtout                : 1;
        uint64_t p0_pperr                : 1;
        uint64_t p1_pperr                : 1;
        uint64_t p2_pperr                : 1;
        uint64_t p3_pperr                : 1;
        uint64_t p0_ptout                : 1;
        uint64_t p1_ptout                : 1;
        uint64_t p2_ptout                : 1;
        uint64_t p3_ptout                : 1;
        uint64_t i0_pperr                : 1;
        uint64_t i1_pperr                : 1;
        uint64_t i2_pperr                : 1;
        uint64_t i3_pperr                : 1;
        uint64_t win_rto                 : 1;
        uint64_t p_dperr                 : 1;
        uint64_t iobdma                  : 1;
        uint64_t reserved                : 22;
#endif
    } s;
} cvmx_npi_int_enb_t;


/**
 * NPI_INTERRUPT_SUM = NPI Interrupt Summary Register
 *  Set when an interrupt condition occurs, write '1' to clear.
 *
 * - Access using the CVMX_NPI_INT_SUM CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 22;      /**< Reserved */
        uint64_t iobdma                  : 1;       /**< Requested IOBDMA read size exceeded 128 words. */
        uint64_t p_dperr                 : 1;       /**< Data written to L2C from PCI that had a data
                                                         parity error. */
        uint64_t win_rto                 : 1;       /**< Windowed Load Timed Out. */
        uint64_t i3_pperr                : 1;       /**< Port-3 instruction had a parity error. */
        uint64_t i2_pperr                : 1;       /**< Port-2 instruction had a parity error. */
        uint64_t i1_pperr                : 1;       /**< Port-1 instruction had a parity error. */
        uint64_t i0_pperr                : 1;       /**< Port-0 instruction had a parity error. */
        uint64_t p3_ptout                : 1;       /**< Port-3 output had a read timeout on a DATA/INFO
                                                         pair. */
        uint64_t p2_ptout                : 1;       /**< Port-2 output had a read timeout on a DATA/INFO
                                                         pair. */
        uint64_t p1_ptout                : 1;       /**< Port-1 output had a read timeout on a DATA/INFO
                                                         pair. */
        uint64_t p0_ptout                : 1;       /**< Port-0 output had a read timeout on a DATA/INFO
                                                         pair. */
        uint64_t p3_pperr                : 1;       /**< Port-3 output had a parity error on a DATA/INFO
                                                         pair. */
        uint64_t p2_pperr                : 1;       /**< Port-2 output had a parity error on a DATA/INFO
                                                         pair. */
        uint64_t p1_pperr                : 1;       /**< Port-1 output had a parity error on a DATA/INFO
                                                         pair. */
        uint64_t p0_pperr                : 1;       /**< Port-0 output had a parity error on a DATA/INFO
                                                         pair. */
        uint64_t g3_rtout                : 1;       /**< Port-3 had a read timeout while attempting to
                                                         read a gather list. */
        uint64_t g2_rtout                : 1;       /**< Port-2 had a read timeout while attempting to
                                                         read a gather list. */
        uint64_t g1_rtout                : 1;       /**< Port-1 had a read timeout while attempting to
                                                         read a gather list. */
        uint64_t g0_rtout                : 1;       /**< Port-0 had a read timeout while attempting to
                                                         read a gather list. */
        uint64_t p3_perr                 : 1;       /**< Port-3 had a parity error on packet data. */
        uint64_t p2_perr                 : 1;       /**< Port-2 had a parity error on packet data. */
        uint64_t p1_perr                 : 1;       /**< Port-1 had a parity error on packet data. */
        uint64_t p0_perr                 : 1;       /**< Port-0 had a parity error on packet data. */
        uint64_t p3_rtout                : 1;       /**< Port-3 had a read timeout while attempting to
                                                         read packet data. */
        uint64_t p2_rtout                : 1;       /**< Port-2 had a read timeout while attempting to
                                                         read packet data. */
        uint64_t p1_rtout                : 1;       /**< Port-1 had a read timeout while attempting to
                                                         read packet data. */
        uint64_t p0_rtout                : 1;       /**< Port-0 had a read timeout while attempting to
                                                         read packet data. */
        uint64_t i3_overf                : 1;       /**< Port-3 had a doorbell overflow. Bit[31] of the
                                                         doorbell count was set. */
        uint64_t i2_overf                : 1;       /**< Port-2 had a doorbell overflow. Bit[31] of the
                                                         doorbell count was set. */
        uint64_t i1_overf                : 1;       /**< Port-1 had a doorbell overflow. Bit[31] of the
                                                         doorbell count was set. */
        uint64_t i0_overf                : 1;       /**< Port-0 had a doorbell overflow. Bit[31] of the
                                                         doorbell count was set. */
        uint64_t i3_rtout                : 1;       /**< Port-3 had a read timeout while attempting to
                                                         read instructions. */
        uint64_t i2_rtout                : 1;       /**< Port-2 had a read timeout while attempting to
                                                         read instructions. */
        uint64_t i1_rtout                : 1;       /**< Port-1 had a read timeout while attempting to
                                                         read instructions. */
        uint64_t i0_rtout                : 1;       /**< Port-0 had a read timeout while attempting to
                                                         read instructions. */
        uint64_t po3_2sml                : 1;       /**< The packet being sent out on Port3 is smaller
                                                         than the NPI_BUFF_SIZE_OUTPUT3[ISIZE] field. */
        uint64_t po2_2sml                : 1;       /**< The packet being sent out on Port2 is smaller
                                                         than the NPI_BUFF_SIZE_OUTPUT2[ISIZE] field. */
        uint64_t po1_2sml                : 1;       /**< The packet being sent out on Port1 is smaller
                                                         than the NPI_BUFF_SIZE_OUTPUT1[ISIZE] field. */
        uint64_t po0_2sml                : 1;       /**< The packet being sent out on Port0 is smaller
                                                         than the NPI_BUFF_SIZE_OUTPUT0[ISIZE] field. */
        uint64_t pci_rsl                 : 1;       /**< Set '1' when the PNI sends a PCI RSL interrupt.
                                                         The reason for the interrupt can be found by
                                                         reading the PCI_INT_SUM register. */
        uint64_t rml_wto                 : 1;       /**< Set '1' when the RML does not receive a commit
                                                         back from a RSL after sending a write command to
                                                         a RSL. */
        uint64_t rml_rto                 : 1;       /**< Set '1' when the RML does not receive read data
                                                         back from a RSL after sending a read command to
                                                         a RSL. */
#else
        uint64_t rml_rto                 : 1;
        uint64_t rml_wto                 : 1;
        uint64_t pci_rsl                 : 1;
        uint64_t po0_2sml                : 1;
        uint64_t po1_2sml                : 1;
        uint64_t po2_2sml                : 1;
        uint64_t po3_2sml                : 1;
        uint64_t i0_rtout                : 1;
        uint64_t i1_rtout                : 1;
        uint64_t i2_rtout                : 1;
        uint64_t i3_rtout                : 1;
        uint64_t i0_overf                : 1;
        uint64_t i1_overf                : 1;
        uint64_t i2_overf                : 1;
        uint64_t i3_overf                : 1;
        uint64_t p0_rtout                : 1;
        uint64_t p1_rtout                : 1;
        uint64_t p2_rtout                : 1;
        uint64_t p3_rtout                : 1;
        uint64_t p0_perr                 : 1;
        uint64_t p1_perr                 : 1;
        uint64_t p2_perr                 : 1;
        uint64_t p3_perr                 : 1;
        uint64_t g0_rtout                : 1;
        uint64_t g1_rtout                : 1;
        uint64_t g2_rtout                : 1;
        uint64_t g3_rtout                : 1;
        uint64_t p0_pperr                : 1;
        uint64_t p1_pperr                : 1;
        uint64_t p2_pperr                : 1;
        uint64_t p3_pperr                : 1;
        uint64_t p0_ptout                : 1;
        uint64_t p1_ptout                : 1;
        uint64_t p2_ptout                : 1;
        uint64_t p3_ptout                : 1;
        uint64_t i0_pperr                : 1;
        uint64_t i1_pperr                : 1;
        uint64_t i2_pperr                : 1;
        uint64_t i3_pperr                : 1;
        uint64_t win_rto                 : 1;
        uint64_t p_dperr                 : 1;
        uint64_t iobdma                  : 1;
        uint64_t reserved                : 22;
#endif
    } s;
} cvmx_npi_int_sum_t;


/**
 * NPI_MEM_ACCESS_SUBID6 = Memory Access SubId 6 Register
 *  Carries Read/Write parameters for PP access to PCI memory that use NPI SubId6.
 *
 * - Access using the CVMX_NPI_MEM_ACCESS_SUBID6 CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 28;      /**< Reserved */
        uint64_t esr                     : 2;       /**< Endian-Swap on read. */
        uint64_t esw                     : 2;       /**< Endian-Swap on write. */
        uint64_t nsr                     : 1;       /**< No-Snoop on read. */
        uint64_t nsw                     : 1;       /**< No-Snoop on write. */
        uint64_t ror                     : 1;       /**< Relax Read on read. */
        uint64_t row                     : 1;       /**< Relax Order on write. */
        uint64_t ba                      : 28;      /**< PCI Address bits [63:36]. */
#else
        uint64_t ba                      : 28;
        uint64_t row                     : 1;
        uint64_t ror                     : 1;
        uint64_t nsw                     : 1;
        uint64_t nsr                     : 1;
        uint64_t esw                     : 2;
        uint64_t esr                     : 2;
        uint64_t reserved                : 28;
#endif
    } s;
} cvmx_npi_mem_access_subid_t;


/**
 * NPI_MSI_RCV = NPI MSI Receive Vector Register
 *  A bit is set in this register relative to the vector received during a MSI. And cleared by a W1 to the register.
 *
 * - Access using the CVMX_NPI_MSI_RCV CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t int_vec                 : 64;      /**< Refer to PCI_MSI_RCV */
#else
        uint64_t int_vec                 : 64;
#endif
    } s;
} cvmx_npi_msi_rcv_t;


/**
 * NUM_DESC_OUTPUT3 = Number Of Descriptors Available For Output 3
 *  The size of the Buffer/Info Pointer Pair ring for Output-3.
 *
 * - Access using the CVMX_NPI_NUM_DESC_OUTPUT3 CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 32;      /**< Reserved */
        uint64_t size                    : 32;      /**< The size of the Buffer/Info Pointer Pair ring. */
#else
        uint64_t size                    : 32;
        uint64_t reserved                : 32;
#endif
    } s;
} cvmx_npi_num_desc_output_t;


/**
 * NPI_OUPTUT_CONTROL = NPI's Output Control Register
 *  The address to start reading Instructions from for Output-3.
 *
 * - Access using the CVMX_NPI_OUTPUT_CONTROL CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 16;      /**< Reserved */
        uint64_t p3_bmode                : 1;       /**< When set '1' PCI_PKTS_SENT3 register will be
                                                         updated with the number of bytes in the packet
                                                         sent, when '0' the register will have a value
                                                         of '1' added. */
        uint64_t p2_bmode                : 1;       /**< When set '1' PCI_PKTS_SENT2 register will be
                                                         updated with the number of bytes in the packet
                                                         sent, when '0' the register will have a value
                                                         of '1' added. */
        uint64_t p1_bmode                : 1;       /**< When set '1' PCI_PKTS_SENT1 register will be
                                                         updated with the number of bytes in the packet
                                                         sent, when '0' the register will have a value
                                                         of '1' added. */
        uint64_t p0_bmode                : 1;       /**< When set '1' PCI_PKTS_SENT0 register will be
                                                         updated with the number of bytes in the packet
                                                         sent, when '0' the register will have a value
                                                         of '1' added. */
        uint64_t o3_es                   : 2;       /**< Endian Swap for Output3 Data. */
        uint64_t o3_ns                   : 1;       /**< NoSnoop Enable for Output3 Data. */
        uint64_t o3_ro                   : 1;       /**< Relaxed Ordering Enable for Output3 Data. */
        uint64_t o2_es                   : 2;       /**< Endian Swap for Output2 Data. */
        uint64_t o2_ns                   : 1;       /**< NoSnoop Enable for Output2 Data. */
        uint64_t o2_ro                   : 1;       /**< Relaxed Ordering Enable for Output2 Data. */
        uint64_t o1_es                   : 2;       /**< Endian Swap for Output1 Data. */
        uint64_t o1_ns                   : 1;       /**< NoSnoop Enable for Output1 Data. */
        uint64_t o1_ro                   : 1;       /**< Relaxed Ordering Enable for Output1 Data. */
        uint64_t o0_es                   : 2;       /**< Endian Swap for Output0 Data. */
        uint64_t o0_ns                   : 1;       /**< NoSnoop Enable for Output0 Data. */
        uint64_t o0_ro                   : 1;       /**< Relaxed Ordering Enable for Output0 Data. */
        uint64_t o3_csrm                 : 1;       /**< Use CSR for Output3 Data for PCI ES, NS, and RO. */
        uint64_t o2_csrm                 : 1;       /**< Use CSR for Output2 Data for PCI ES, NS, and RO. */
        uint64_t o1_csrm                 : 1;       /**< Use CSR for Output1 Data for PCI ES, NS, and RO. */
        uint64_t o0_csrm                 : 1;       /**< When set '0' top 4 bits of scatter address come
                                                         the CSR ES, NS, and RO bits and the ES, NS, RO used
                                                         for PCI write come from the top 4 scatter address
                                                         bits. */
        uint64_t fixe_o3                 : 1;       /**< Rewrites the Length/Buff Usage field for the output
                                                         packet if an error occured for output-3. */
        uint64_t fixe_o2                 : 1;       /**< Rewrites the Length/Buff Usage field for the output
                                                         packet if an error occured for output-2. */
        uint64_t fixe_o1                 : 1;       /**< Rewrites the Length/Buff Usage field for the output
                                                         packet if an error occured for output-1. */
        uint64_t fixe_o0                 : 1;       /**< Rewrites the Length/Buff Usage field for the output
                                                         packet if an error occured for output-0. */
        uint64_t iptr_o3                 : 1;       /**< Uses the Info-Pointer to store length and data
                                                         for output-3. */
        uint64_t iptr_o2                 : 1;       /**< Uses the Info-Pointer to store length and data
                                                         for output-2. */
        uint64_t iptr_o1                 : 1;       /**< Uses the Info-Pointer to store length and data
                                                         for output-1. */
        uint64_t iptr_o0                 : 1;       /**< Uses the Info-Pointer to store length and data
                                                         for output-0. */
        uint64_t esr_sl3                 : 2;       /**< The Endian-Swap-Mode for Slist3 reads. */
        uint64_t nsr_sl3                 : 1;       /**< Enables '1' NoSnoop for Slist3 reads. */
        uint64_t ror_sl3                 : 1;       /**< Enables '1' Relaxed Ordering for Slist3 reads. */
        uint64_t esr_sl2                 : 2;       /**< The Endian-Swap-Mode for Slist2 reads. */
        uint64_t nsr_sl2                 : 1;       /**< Enables '1' NoSnoop for Slist2 reads. */
        uint64_t ror_sl2                 : 1;       /**< Enables '1' Relaxed Ordering for Slist2 reads. */
        uint64_t esr_sl1                 : 2;       /**< The Endian-Swap-Mode for Slist1 reads. */
        uint64_t nsr_sl1                 : 1;       /**< Enables '1' NoSnoop for Slist1 reads. */
        uint64_t ror_sl1                 : 1;       /**< Enables '1' Relaxed Ordering for Slist1 reads. */
        uint64_t esr_sl0                 : 2;       /**< The Endian-Swap-Mode for Slist0 reads. */
        uint64_t nsr_sl0                 : 1;       /**< Enables '1' NoSnoop for Slist0 reads. */
        uint64_t ror_sl0                 : 1;       /**< Enables '1' Relaxed Ordering for Slist0 reads. */
#else
        uint64_t ror_sl0                 : 1;
        uint64_t nsr_sl0                 : 1;
        uint64_t esr_sl0                 : 2;
        uint64_t ror_sl1                 : 1;
        uint64_t nsr_sl1                 : 1;
        uint64_t esr_sl1                 : 2;
        uint64_t ror_sl2                 : 1;
        uint64_t nsr_sl2                 : 1;
        uint64_t esr_sl2                 : 2;
        uint64_t ror_sl3                 : 1;
        uint64_t nsr_sl3                 : 1;
        uint64_t esr_sl3                 : 2;
        uint64_t iptr_o0                 : 1;
        uint64_t iptr_o1                 : 1;
        uint64_t iptr_o2                 : 1;
        uint64_t iptr_o3                 : 1;
        uint64_t fixe_o0                 : 1;
        uint64_t fixe_o1                 : 1;
        uint64_t fixe_o2                 : 1;
        uint64_t fixe_o3                 : 1;
        uint64_t o0_csrm                 : 1;
        uint64_t o1_csrm                 : 1;
        uint64_t o2_csrm                 : 1;
        uint64_t o3_csrm                 : 1;
        uint64_t o0_ro                   : 1;
        uint64_t o0_ns                   : 1;
        uint64_t o0_es                   : 2;
        uint64_t o1_ro                   : 1;
        uint64_t o1_ns                   : 1;
        uint64_t o1_es                   : 2;
        uint64_t o2_ro                   : 1;
        uint64_t o2_ns                   : 1;
        uint64_t o2_es                   : 2;
        uint64_t o3_ro                   : 1;
        uint64_t o3_ns                   : 1;
        uint64_t o3_es                   : 2;
        uint64_t p0_bmode                : 1;
        uint64_t p1_bmode                : 1;
        uint64_t p2_bmode                : 1;
        uint64_t p3_bmode                : 1;
        uint64_t reserved                : 16;
#endif
    } s;
} cvmx_npi_output_control_t;


/**
 * NPI_P3_PAIR_CNTS = NPI's Port-3 Instruction Counts For Packets Out.
 *  Used to determine the number of instruction in the NPI and to be fetched for Output-Packets.
 *
 * - Access using the CVMX_NPI_P3_PAIR_CNTS CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 27;      /**< Reserved */
        uint64_t fcnt                    : 5;       /**< 16 - number entries in the D/I Pair FIFO. */
        uint64_t avail                   : 32;      /**< Doorbell count to be read. */
#else
        uint64_t avail                   : 32;
        uint64_t fcnt                    : 5;
        uint64_t reserved                : 27;
#endif
    } s;
} cvmx_npi_pair_cnts_t;


/**
 * NPI_PCI_BURST_SIZE = NPI PCI Burst Size Register
 *  Control the number of words the NPI will attempt to read / write to/from the PCI.
 *
 * - Access using the CVMX_NPI_PCI_BURST_SIZE CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 50;      /**< Reserved
                                                         NPI_BUFF_SIZE_OUTPUT0 = NPI's D/I Buffer Sizes For Output 0 */
        uint64_t wr_brst                 : 7;       /**< The number of 8B words to write to PCI in any one
                                                         write operation. A zero is equal to 128. */
        uint64_t rd_brst                 : 7;       /**< Number of 8B words to read from PCI in any one
                                                         read operation. A zero is illegal. Legal values
                                                         are 1 to 127, where a 0 will be treated as a 1.
                                                         This value does not control the size of a read
                                                         caused by an IOBDMA from a PP. */
#else
        uint64_t rd_brst                 : 7;
        uint64_t wr_brst                 : 7;
        uint64_t reserved                : 50;
#endif
    } s;
} cvmx_npi_pci_burst_size_t;


/**
 * NPI_PCI_INT_ARB_CFG = Configuration For PCI Arbiter
 *  Controls operation of the Internal PCI Arbiter.  This register should
 *  only be written when PRST# is asserted.  NPI_PCI_INT_ARB_CFG[EN] should
 *  only be set when Octane is a host.
 *
 * - Access using the CVMX_NPI_PCI_INT_ARB_CFG CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 59;      /**< Reserved */
        uint64_t en                      : 1;       /**< Internal arbiter enable. */
        uint64_t park_mod                : 1;       /**< Bus park mode. 0=park on last, 1=park on device. */
        uint64_t park_dev                : 3;       /**< Bus park device. 0-3 External device, 4 = Octane. */
#else
        uint64_t park_dev                : 3;
        uint64_t park_mod                : 1;
        uint64_t en                      : 1;
        uint64_t reserved                : 59;
#endif
    } s;
} cvmx_npi_pci_int_arb_cfg_t;


/**
 * NPI_PCI_READ_CMD = NPI PCI Read Command Register
 *  Controls the type of read command sent.
 *
 * - Access using the CVMX_NPI_PCI_READ_CMD CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 53;      /**< Reserved */
        uint64_t cmd_size                : 11;      /**< Number bytes to be read is equal to or exceeds this
                                                         size will cause the PCI in PCI mode to use a
                                                         Memory-Read-Multiple. This register has a value
                                                         from 8 to 2048. A value of 0-7 will be treated as
                                                         a value of 2048. */
#else
        uint64_t cmd_size                : 11;
        uint64_t reserved                : 53;
#endif
    } s;
} cvmx_npi_pci_read_cmd_t;


/**
 * NPI_PORT_BP_CONTROL = Port Backpressure Control
 *  Enables Port Level Backpressure
 *
 * - Access using the CVMX_NPI_PORT_BP_CONTROL CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 56;      /**< Reserved */
        uint64_t bp_on                   : 4;       /**< Port 35-32 port level backpressure applied. */
        uint64_t enb                     : 4;       /**< Enables port level backpressure from the IPD. */
#else
        uint64_t enb                     : 4;
        uint64_t bp_on                   : 4;
        uint64_t reserved                : 56;
#endif
    } s;
} cvmx_npi_port_bp_control_t;


/**
 * RSL_INT_BLOCKS = RSL Interrupt Blocks Register
 *  Reading this register will return a vector with a bit set '1' for a corresponding RSL block
 *  that presently has an interrupt pending. The Field Description below supplies the name of the
 *  register that software should read to find out why that intterupt bit is set.
 *
 * - Access using the CVMX_NPI_RSL_INT_BLOCKS CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 32;      /**< Reserved */
        uint64_t rint_31                 : 1;       /**< Set '1' when RSL bLock has an interrupt. */
        uint64_t rint_30                 : 1;       /**< Set '1' when RSL bLock has an interrupt. */
        uint64_t rint_29                 : 1;       /**< Set '1' when RSL bLock has an interrupt. */
        uint64_t rint_28                 : 1;       /**< Set '1' when RSL bLock has an interrupt. */
        uint64_t rint_27                 : 1;       /**< Set '1' when RSL bLock has an interrupt. */
        uint64_t rint_26                 : 1;       /**< Set '1' when RSL bLock has an interrupt. */
        uint64_t rint_25                 : 1;       /**< Set '1' when RSL bLock has an interrupt. */
        uint64_t rint_24                 : 1;       /**< Set '1' when RSL bLock has an interrupt. */
        uint64_t asx1                    : 1;       /**< ASX1_INT_REG */
        uint64_t asx0                    : 1;       /**< ASX0_INT_REG */
        uint64_t tra                     : 1;       /**< TRA_INT_STATUS. */
        uint64_t pip                     : 1;       /**< PIP_INT_REG. */
        uint64_t spx1                    : 1;       /**< SPX1_INT_REG */
        uint64_t spx0                    : 1;       /**< SPX0_INT_REG */
        uint64_t rint_17                 : 1;       /**< Set '1' when RSL bLock has an interrupt. */
        uint64_t l2c                     : 1;       /**< L2T_ERR & L2D_ERR */
        uint64_t rint_15                 : 1;       /**< Set '1' when RSL bLock has an interrupt. */
        uint64_t rint_14                 : 1;       /**< Set '1' when RSL bLock has an interrupt. */
        uint64_t rint_13                 : 1;       /**< Set '1' when RSL bLock has an interrupt. */
        uint64_t pow                     : 1;       /**< POW_ECC_ERR */
        uint64_t rint_11                 : 1;       /**< Set '1' when RSL bLock has an interrupt. */
        uint64_t rint_10                 : 1;       /**< Set '1' when RSL bLock has an interrupt. */
        uint64_t ipd                     : 1;       /**< IPD_INT_SUM */
        uint64_t rint_8                  : 1;       /**< Set '1' when RSL bLock has an interrupt. */
        uint64_t zip                     : 1;       /**< SIP_ERR */
        uint64_t dfa                     : 1;       /**< DFA_ERR */
        uint64_t fpa                     : 1;       /**< FPA_INT_SUM */
        uint64_t key                     : 1;       /**< KEY_INT_SUM */
        uint64_t npi                     : 1;       /**< NPI_INT_SUM */
        uint64_t gmx1                    : 1;       /**< GMX1_RX_INT_REG & GMX1_INT_REG */
        uint64_t gmx0                    : 1;       /**< GMX0_RX_INT_REG & GMX0_INT_REG */
        uint64_t mio                     : 1;       /**< MIO_BOOT_ERR */
#else
        uint64_t mio                     : 1;
        uint64_t gmx0                    : 1;
        uint64_t gmx1                    : 1;
        uint64_t npi                     : 1;
        uint64_t key                     : 1;
        uint64_t fpa                     : 1;
        uint64_t dfa                     : 1;
        uint64_t zip                     : 1;
        uint64_t rint_8                  : 1;
        uint64_t ipd                     : 1;
        uint64_t rint_10                 : 1;
        uint64_t rint_11                 : 1;
        uint64_t pow                     : 1;
        uint64_t rint_13                 : 1;
        uint64_t rint_14                 : 1;
        uint64_t rint_15                 : 1;
        uint64_t l2c                     : 1;
        uint64_t rint_17                 : 1;
        uint64_t spx0                    : 1;
        uint64_t spx1                    : 1;
        uint64_t pip                     : 1;
        uint64_t tra                     : 1;
        uint64_t asx0                    : 1;
        uint64_t asx1                    : 1;
        uint64_t rint_24                 : 1;
        uint64_t rint_25                 : 1;
        uint64_t rint_26                 : 1;
        uint64_t rint_27                 : 1;
        uint64_t rint_28                 : 1;
        uint64_t rint_29                 : 1;
        uint64_t rint_30                 : 1;
        uint64_t rint_31                 : 1;
        uint64_t reserved                : 32;
#endif
    } s;
} cvmx_npi_rsl_int_blocks_t;


/**
 * NPI_SIZE_INPUT3 = NPI's Size for Input 3 Register
 *  The address to start reading Instructions from for Input-3.
 *
 * - Access using the CVMX_NPI_SIZE_INPUT3 CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 32;      /**< Reserved */
        uint64_t size                    : 32;      /**< The size of the Instruction Queue used by Octane.
                                                         The value [SIZE] is in Instructions.
                                                         A value of 0 in this field is illegal. */
#else
        uint64_t size                    : 32;
        uint64_t reserved                : 32;
#endif
    } s;
} cvmx_npi_size_input_t;


/**
 * NPI_WIN_READ_TO = NPI WINDOW READ Timeout Register
 *  Number of core clocks to wait before timing out on a WINDOW-READ to the NCB.
 *
 * - Access using the CVMX_NPI_WIN_READ_TO CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 32;      /**< Reserved */
        uint64_t time                    : 32;      /**< Time to wait in core clocks. A value of 0 will
                                                         cause no timeouts. */
#else
        uint64_t time                    : 32;
        uint64_t reserved                : 32;
#endif
    } s;
} cvmx_npi_win_read_to_t;


/**
 * PCI_BAR1_INDEX(0..31) = PCI Index(0..31) Register
 *
 *  Contains address index and control bits for access to memory ranges of Bar-1,
 *  when PCI supplied address-bits [26:22] == (0..31).
 *
 * - Access using the CVMX_PCI_BAR1_INDEXX(0..31) CSR
 */
typedef union
{
    uint32_t u32;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 14;      /**< Reserved */
        uint64_t addr_idx                : 14;      /**< Address bits [35:22] sent to L2C */
        uint64_t ca                      : 1;       /**< Set '1' when access is to be cached in L2. */
        uint64_t end_swp                 : 2;       /**< Endian Swap Mode */
        uint64_t addr_v                  : 1;       /**< Set '1' when the selected address range is valid. */
#else
        uint64_t addr_v                  : 1;
        uint64_t end_swp                 : 2;
        uint64_t ca                      : 1;
        uint64_t addr_idx                : 14;
        uint64_t reserved                : 14;
#endif
    } s;
} cvmx_pci_bar1_indexx_t;


/**
 * Sets the command buffer parameters
 *
 * The size of the command buffer segments is measured in uint64s.  The pool specifies (1 of 8 free
 * lists to be used when freeing command buffer segments.
 *            PCI_CFG00 = First 32-bits of PCI config space (PCI Vendor + Device)
 *  This register contains the first 32-bits of the PCI config space registers
 *
 * - Access using the CVMX_PCI_CFG00 CSR
 */
typedef union
{
    uint32_t u32;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t devid                   : 16;      /**< This is the device ID for N3 */
        uint64_t vendid                  : 16;      /**< This is the Cavium's vendor ID */
#else
        uint64_t vendid                  : 16;
        uint64_t devid                   : 16;
#endif
    } s;
} cvmx_pci_cfg00_t;


/**
 * PCI_CFG01 = Second 32-bits of PCI config space (Command/Status Register)
 *
 * - Access using the CVMX_PCI_CFG01 CSR
 */
typedef union
{
    uint32_t u32;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t dpe                     : 1;       /**< Detected Parity Error */
        uint64_t sse                     : 1;       /**< Signaled System Error */
        uint64_t rma                     : 1;       /**< Received Master Abort */
        uint64_t rta                     : 1;       /**< Received Target Abort */
        uint64_t sta                     : 1;       /**< Signaled Target Abort */
        uint64_t devt                    : 2;       /**< DEVSEL# timing (for PCI only/for PCIX = don?t care) */
        uint64_t mdpe                    : 1;       /**< Master Data Parity Error */
        uint64_t fbb                     : 1;       /**< Fast Back-to-Back Transactions Capable
                                                         Mode               1 = PCI Mode     0 = PCIX Mode
                                                         Dependent */
        uint64_t reserved                : 1;       /**< Reserved */
        uint64_t m66                     : 1;       /**< 66MHz Capable */
        uint64_t cle                     : 1;       /**< Capabilities List Enable */
        uint64_t i_stat                  : 1;       /**< When INTx# is asserted by N3 this bit will be set.
                                                         When deasserted by N3 this bit will be cleared. */
        uint64_t reserved1               : 8;       /**< Reserved */
        uint64_t i_dis                   : 1;       /**< When asserted '1' disables the generation of INTx#
                                                         by N3. When disabled '0' allows assertion of INTx#
                                                         by N3. */
        uint64_t fbbe                    : 1;       /**< Fast Back to Back Transaction Enable */
        uint64_t see                     : 1;       /**< System Error Enable */
        uint64_t ads                     : 1;       /**< Address/Data Stepping */
        uint64_t pee                     : 1;       /**< PERR# Enable */
        uint64_t vps                     : 1;       /**< VGA Palette Snooping */
        uint64_t mwice                   : 1;       /**< Memory Write & Invalidate Command Enable */
        uint64_t scse                    : 1;       /**< Special Cycle Snooping Enable */
        uint64_t me                      : 1;       /**< Master Enable */
        uint64_t msae                    : 1;       /**< Memory Space Access Enable */
        uint64_t isae                    : 1;       /**< I/O Space Access Enable */
#else
        uint64_t isae                    : 1;
        uint64_t msae                    : 1;
        uint64_t me                      : 1;
        uint64_t scse                    : 1;
        uint64_t mwice                   : 1;
        uint64_t vps                     : 1;
        uint64_t pee                     : 1;
        uint64_t ads                     : 1;
        uint64_t see                     : 1;
        uint64_t fbbe                    : 1;
        uint64_t i_dis                   : 1;
        uint64_t reserved1               : 8;
        uint64_t i_stat                  : 1;
        uint64_t cle                     : 1;
        uint64_t m66                     : 1;
        uint64_t reserved                : 1;
        uint64_t fbb                     : 1;
        uint64_t mdpe                    : 1;
        uint64_t devt                    : 2;
        uint64_t sta                     : 1;
        uint64_t rta                     : 1;
        uint64_t rma                     : 1;
        uint64_t sse                     : 1;
        uint64_t dpe                     : 1;
#endif
    } s;
} cvmx_pci_cfg01_t;


/**
 * PCI_CFG02 = Third 32-bits of PCI config space (Class Code / Revision ID)
 *
 * - Access using the CVMX_PCI_CFG02 CSR
 */
typedef union
{
    uint32_t u32;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t cc                      : 24;      /**< Class Code (Network Encryption/Decryption Class) */
        uint64_t rid                     : 8;       /**< Revision ID */
#else
        uint64_t rid                     : 8;
        uint64_t cc                      : 24;
#endif
    } s;
} cvmx_pci_cfg02_t;


/**
 * PCI_CFG03 = Fourth 32-bits of PCI config space (BIST, HEADER Type, Latency timer, line size)
 *
 * - Access using the CVMX_PCI_CFG03 CSR
 */
typedef union
{
    uint32_t u32;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t bcap                    : 1;       /**< BIST Capable */
        uint64_t brb                     : 1;       /**< BIST Request/busy bit
                                                         Note: N3 does not support PCI BIST, therefore
                                                         this bit should remain zero. */
        uint64_t reserved                : 2;       /**< Reserved */
        uint64_t bcod                    : 4;       /**< BIST Code */
        uint64_t ht                      : 8;       /**< Header Type (Type 0) */
        uint64_t lt                      : 8;       /**< Latency Timer
                                                         (0=PCI)                 (0=PCI)
                                                         (0x40=PCIX)             (0x40=PCIX) */
        uint64_t cls                     : 8;       /**< Cache Line Size */
#else
        uint64_t cls                     : 8;
        uint64_t lt                      : 8;
        uint64_t ht                      : 8;
        uint64_t bcod                    : 4;
        uint64_t reserved                : 2;
        uint64_t brb                     : 1;
        uint64_t bcap                    : 1;
#endif
    } s;
} cvmx_pci_cfg03_t;


/**
 * PCI_CFG04 = Fifth 32-bits of PCI config space (Base Address Register 0 - Low)
 *
 *  Description: BAR0: 4KB 64-bit Prefetchable Memory Space
 *        [0]:     0 (Memory Space)
 *        [2:1]:   2 (64bit memory decoder)
 *        [3]:     1 (Prefetchable)
 *        [11:4]:  RAZ (to imply 4KB space)
 *        [31:12]: RW (User may define base address)
 *
 * - Access using the CVMX_PCI_CFG04 CSR
 */
typedef union
{
    uint32_t u32;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t lbase                   : 20;      /**< Base Address[31:12] */
        uint64_t lbasez                  : 8;       /**< Base Address[11:4] (Read as Zero) */
        uint64_t pf                      : 1;       /**< Prefetchable Space */
        uint64_t typ                     : 2;       /**< Type (00=32b/01=below 1MB/10=64b/11=RSV) */
        uint64_t mspc                    : 1;       /**< Memory Space Indicator */
#else
        uint64_t mspc                    : 1;
        uint64_t typ                     : 2;
        uint64_t pf                      : 1;
        uint64_t lbasez                  : 8;
        uint64_t lbase                   : 20;
#endif
    } s;
} cvmx_pci_cfg04_t;


/**
 * PCI_CFG05 = Sixth 32-bits of PCI config space (Base Address Register 0 - High)
 *
 * - Access using the CVMX_PCI_CFG05 CSR
 */
typedef union
{
    uint32_t u32;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t hbase                   : 32;      /**< Base Address[63:32] */
#else
        uint64_t hbase                   : 32;
#endif
    } s;
} cvmx_pci_cfg05_t;


/**
 * PCI_CFG06 = Seventh 32-bits of PCI config space (Base Address Register 1 - Low)
 *
 *  Description: BAR1: 128MB 64-bit Prefetchable Memory Space
 *        [0]:     0 (Memory Space)
 *        [2:1]:   2 (64bit memory decoder)
 *        [3]:     1 (Prefetchable)
 *        [26:4]:  RAZ (to imply 128MB space)
 *        [31:27]: RW (User may define base address)
 *
 * - Access using the CVMX_PCI_CFG06 CSR
 */
typedef union
{
    uint32_t u32;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t lbase                   : 5;       /**< Base Address[31:27] */
        uint64_t lbasez                  : 23;      /**< Base Address[26:4] (Read as Zero) */
        uint64_t pf                      : 1;       /**< Prefetchable Space */
        uint64_t typ                     : 2;       /**< Type (00=32b/01=below 1MB/10=64b/11=RSV) */
        uint64_t mspc                    : 1;       /**< Memory Space Indicator */
#else
        uint64_t mspc                    : 1;
        uint64_t typ                     : 2;
        uint64_t pf                      : 1;
        uint64_t lbasez                  : 23;
        uint64_t lbase                   : 5;
#endif
    } s;
} cvmx_pci_cfg06_t;


/**
 * PCI_CFG07 = Eighth 32-bits of PCI config space (Base Address Register 1 - High)
 *
 * - Access using the CVMX_PCI_CFG07 CSR
 */
typedef union
{
    uint32_t u32;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t hbase                   : 32;      /**< Base Address[63:32] */
#else
        uint64_t hbase                   : 32;
#endif
    } s;
} cvmx_pci_cfg07_t;


/**
 * PCI_CFG08 = Ninth 32-bits of PCI config space (Base Address Register 2 - Low)
 *
 *  Description: BAR1: 2^39 (512GB) 64-bit Prefetchable Memory Space
 *        [0]:     0 (Memory Space)
 *        [2:1]:   2 (64bit memory decoder)
 *        [3]:     1 (Prefetchable)
 *        [31:4]:  RAZ
 *
 * - Access using the CVMX_PCI_CFG08 CSR
 */
typedef union
{
    uint32_t u32;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t lbasez                  : 28;      /**< Base Address[31:4] (Read as Zero) */
        uint64_t pf                      : 1;       /**< Prefetchable Space */
        uint64_t typ                     : 2;       /**< Type (00=32b/01=below 1MB/10=64b/11=RSV) */
        uint64_t mspc                    : 1;       /**< Memory Space Indicator */
#else
        uint64_t mspc                    : 1;
        uint64_t typ                     : 2;
        uint64_t pf                      : 1;
        uint64_t lbasez                  : 28;
#endif
    } s;
} cvmx_pci_cfg08_t;


/**
 * PCI_CFG09 = Tenth 32-bits of PCI config space (Base Address Register 2 - High)
 *
 * - Access using the CVMX_PCI_CFG09 CSR
 */
typedef union
{
    uint32_t u32;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t hbase                   : 25;      /**< Base Address[63:39] */
        uint64_t hbasez                  : 7;       /**< Base Address[38:31] (Read as Zero) */
#else
        uint64_t hbasez                  : 7;
        uint64_t hbase                   : 25;
#endif
    } s;
} cvmx_pci_cfg09_t;


/**
 * PCI_CFG10 = Eleventh 32-bits of PCI config space (Card Bus CIS Pointer)
 *
 * - Access using the CVMX_PCI_CFG10 CSR
 */
typedef union
{
    uint32_t u32;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t cisp                    : 32;      /**< CardBus CIS Pointer (UNUSED) */
#else
        uint64_t cisp                    : 32;
#endif
    } s;
} cvmx_pci_cfg10_t;


/**
 * PCI_CFG11 = Twelfth 32-bits of PCI config space (SubSystem ID/Subsystem Vendor ID Register)
 *
 * - Access using the CVMX_PCI_CFG11 CSR
 */
typedef union
{
    uint32_t u32;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t ssid                    : 16;      /**< SubSystem ID */
        uint64_t ssvid                   : 16;      /**< Subsystem Vendor ID */
#else
        uint64_t ssvid                   : 16;
        uint64_t ssid                    : 16;
#endif
    } s;
} cvmx_pci_cfg11_t;


/**
 * PCI_CFG12 = Thirteenth 32-bits of PCI config space (Expansion ROM Base Address Register)
 *
 * - Access using the CVMX_PCI_CFG12 CSR
 */
typedef union
{
    uint32_t u32;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t erbar                   : 16;      /**< Expansion ROM Base Address[31:16] 64KB in size */
        uint64_t erbarz                  : 5;       /**< Expansion ROM Base Base Address (Read as Zero) */
        uint64_t reserved                : 10;      /**< Reserved */
        uint64_t erbar_en                : 1;       /**< Expansion ROM Address Decode Enable */
#else
        uint64_t erbar_en                : 1;
        uint64_t reserved                : 10;
        uint64_t erbarz                  : 5;
        uint64_t erbar                   : 16;
#endif
    } s;
} cvmx_pci_cfg12_t;


/**
 * PCI_CFG13 = Fourteenth 32-bits of PCI config space (Capabilities Pointer Register)
 *
 * - Access using the CVMX_PCI_CFG13 CSR
 */
typedef union
{
    uint32_t u32;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 24;      /**< Reserved */
        uint64_t cp                      : 8;       /**< Capabilities Pointer */
#else
        uint64_t cp                      : 8;
        uint64_t reserved                : 24;
#endif
    } s;
} cvmx_pci_cfg13_t;


/**
 * PCI_CFG15 = Sixteenth 32-bits of PCI config space (INT/ARB/LATENCY Register)
 *
 * - Access using the CVMX_PCI_CFG15 CSR
 */
typedef union
{
    uint32_t u32;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t ml                      : 8;       /**< Maximum Latency */
        uint64_t mg                      : 8;       /**< Minimum Grant */
        uint64_t inta                    : 8;       /**< Interrupt Pin (INTA#) */
        uint64_t il                      : 8;       /**< Interrupt Line */
#else
        uint64_t il                      : 8;
        uint64_t inta                    : 8;
        uint64_t mg                      : 8;
        uint64_t ml                      : 8;
#endif
    } s;
} cvmx_pci_cfg15_t;


/**
 * PCI_CFG16 = Seventeenth 32-bits of PCI config space (Target Implementation Register)
 *
 * - Access using the CVMX_PCI_CFG16 CSR
 */
typedef union
{
    uint32_t u32;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t trdnpr                  : 1;       /**< Target Read Delayed Transaction for I/O and
                                                         non-prefetchable regions discarded. */
        uint64_t trdard                  : 1;       /**< Target Read Delayed Transaction for all regions
                                                         discarded. */
        uint64_t rdsati                  : 1;       /**< Target(I/O and Memory) Read Delayed/Split at
                                                         timeout/immediately (default timeout). */
        uint64_t trdrs                   : 1;       /**< Target(I/O and Memory) Read Delayed/Split or Retry
                                                         select (of the application interface is not ready)
                                                         0 = Delayed Split Transaction
                                                         1 = Retry Transaction (always Immediate Retry, no
                                                         AT_REQ to application). */
        uint64_t trtae                   : 1;       /**< Target(I/O and Memory) Read Target Abort Enable
                                                         (if application interface is not ready at the
                                                         latency timeout).
                                                         Note: N3 as target will never target-abort,
                                                         therefore this bit should never be set. */
        uint64_t twsei                   : 1;       /**< Target(I/O) Write Split Enable (at timeout /
                                                         iately; default timeout) */
        uint64_t twsen                   : 1;       /**< T(I/O) write split Enable (if the application
                                                         interface is not ready) */
        uint64_t twtae                   : 1;       /**< Target(I/O and Memory) Write Target Abort Enable
                                                         (if the application interface is not ready at the
                                                         start of the cycle).
                                                         Note: N3 as target will never target-abort,
                                                         therefore this bit should never be set. */
        uint64_t tmae                    : 1;       /**< Target(Read/Write) Master Abort Enable; check
                                                         at the start of each transaction.
                                                         Note: This bit can be used to force a Master
                                                         Abort when N3 is acting as the intended target
                                                         device. */
        uint64_t tslte                   : 3;       /**< Target Subsequent(2nd-last) Latency Timeout Enable
                                                         Valid range: [1..7] and 0=8. */
        uint64_t tilt                    : 4;       /**< Target Initial(1st data) Latency Timeout in PCI
                                                         ModeValid range: [8..15] and 0=16. */
        uint64_t pbe                     : 12;      /**< Programmable Boundary Enable to disconnect/prefetch
                                                         for target burst read cycles to prefetchable
                                                         region in PCI. A value of 1 indicates end of
                                                         boundary (64 KB down to 16 Bytes). */
        uint64_t dppmr                   : 1;       /**< Disconnect/Prefetch to prefetchable memory
                                                         regions Enable. Prefetchable memory regions
                                                         are always disconnected on a region boundary.
                                                         Non-prefetchable regions for PCI are always
                                                         disconnected on the first transfer.
                                                         Note: N3 as target will never target-disconnect,
                                                         therefore this bit should never be set. */
        uint64_t reserved                : 1;       /**< Reserved */
        uint64_t tswc                    : 1;       /**< Target Split Write Control
                                                         0 = Blocks all requests except PMW
                                                         1 = Blocks all requests including PMW until
                                                         split completion occurs. */
        uint64_t mltd                    : 1;       /**< Master Latency Timer Disable */
#else
        uint64_t mltd                    : 1;
        uint64_t tswc                    : 1;
        uint64_t reserved                : 1;
        uint64_t dppmr                   : 1;
        uint64_t pbe                     : 12;
        uint64_t tilt                    : 4;
        uint64_t tslte                   : 3;
        uint64_t tmae                    : 1;
        uint64_t twtae                   : 1;
        uint64_t twsen                   : 1;
        uint64_t twsei                   : 1;
        uint64_t trtae                   : 1;
        uint64_t trdrs                   : 1;
        uint64_t rdsati                  : 1;
        uint64_t trdard                  : 1;
        uint64_t trdnpr                  : 1;
#endif
    } s;
} cvmx_pci_cfg16_t;


/**
 * PCI_CFG17 = Eighteenth 32-bits of PCI config space (Target Split Completion Message
 *            Enable Register)
 *
 * - Access using the CVMX_PCI_CFG17 CSR
 */
typedef union
{
    uint32_t u32;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t tscme                   : 32;      /**< Target Split Completion Message Enable */
#else
        uint64_t tscme                   : 32;
#endif
    } s;
} cvmx_pci_cfg17_t;


/**
 * PCI_CFG18 = Nineteenth 32-bits of PCI config space (Target Delayed/Split Request
 *                         Pending Sequences)
 *
 * - Access using the CVMX_PCI_CFG18 CSR
 */
typedef union
{
    uint32_t u32;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t tdsrps                  : 32;      /**< Target Delayed/Split Request Pending Sequences */
#else
        uint64_t tdsrps                  : 32;
#endif
    } s;
} cvmx_pci_cfg18_t;


/**
 * PCI_CFG19 = Twentieth 32-bits of PCI config space (Master/Target Implementation Register)
 *
 * - Access using the CVMX_PCI_CFG19 CSR
 */
typedef union
{
    uint32_t u32;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t mrbcm                   : 1;       /**< Master Request (Memory Read) Byte Count/Byte
                                                         Enable select.
                                                         0 = Byte Enables valid. In PCI mode, a burst
                                                         transaction cannot be performed using
                                                         Memory Read command=4?h6.
                                                         1 = DWORD Byte Count valid (default). In PCI
                                                         Mode, the memory read byte enables are
                                                         automatically generated by the core.
                                                         Note: N3 Master Request transaction sizes are
                                                         always determined through the
                                                         am_attr[<35:32>|<7:0>] field. */
        uint64_t mrbci                   : 1;       /**< Master Request (I/O and CR cycles) byte count/byte
                                                         enable select.
                                                         0 = Byte Enables valid (default)
                                                         1 = DWORD byte count valid
                                                         Note: For N3K, This bit must always be zero
                                                         for proper operation (in support of
                                                         Type0/1 Cfg Space accesses which require byte
                                                         enable generation directly from a read mask). */
        uint64_t mdwe                    : 1;       /**< Master (Retry) Deferred Write Enable (allow
                                                         read requests to pass).
                                                         NOTE: Applicable to PCI Mode I/O and memory
                                                         transactions only.
                                                         0 = New read requests are NOT accepted until
                                                         the current write cycle completes. [Reads
                                                         cannot pass writes]
                                                         1 = New read requests are accepted, even when
                                                         there is a write cycle pending [Reads can
                                                         pass writes]. */
        uint64_t mdre                    : 1;       /**< Master (Retry) Deferred Read Enable (Allows
                                                         read/write requests to pass).
                                                         NOTE: Applicable to PCI mode I/O and memory
                                                         transactions only.
                                                         0 = New read/write requests are NOT accepted
                                                         until the current read cycle completes.
                                                         [Read/write requests CANNOT pass reads]
                                                         1 = New read/write requests are accepted, even
                                                         when there is a read cycle pending.
                                                         [Read/write requests CAN pass reads] */
        uint64_t mdrimc                  : 1;       /**< Master I/O Deferred/Split Request Outstanding
                                                         Maximum Count
                                                         0 = 4Ch[26:24]
                                                         1 = 1 */
        uint64_t mdrrmc                  : 3;       /**< Master Deferred Read Request Outstanding Max
                                                         Count (PCI only).
                                                         CR4C[26:24]  Max SAC cycles   MAX DAC cycles
                                                         000              8                4
                                                         001              1                0
                                                         010              2                1
                                                         011              3                1
                                                         100              4                2
                                                         101              5                2
                                                         110              6                3
                                                         111              7                3
                                                         For example, if these bits are programmed to
                                                         100, the core can support 2 DAC cycles, 4 SAC
                                                         cycles or a combination of 1 DAC and 2 SAC cycles.
                                                         NOTE: For the PCI-X maximum outstanding split
                                                         transactions, refer to CRE0[22:20] */
        uint64_t tmes                    : 8;       /**< Target/Master Error Sequence # */
        uint64_t teci                    : 1;       /**< Target Error Command Indication
                                                         0 = Delayed/Split
                                                         1 = Others */
        uint64_t tmei                    : 1;       /**< Target/Master Error Indication
                                                         0 = Target
                                                         1 = Master */
        uint64_t tmse                    : 1;       /**< Target/Master System Error. This bit is set
                                                         whenever ATM_SERR_O is active. */
        uint64_t tmdpes                  : 1;       /**< Target/Master Data PERR# error status. This
                                                         bit is set whenever ATM_DATA_PERR_O is active. */
        uint64_t tmapes                  : 1;       /**< Target/Master Address PERR# error status. This
                                                         bit is set whenever ATM_ADDR_PERR_O is active. */
        uint64_t reserved                : 2;       /**< Reserved */
        uint64_t tibcd                   : 1;       /**< Target Illegal I/O DWORD byte combinations detected. */
        uint64_t tibde                   : 1;       /**< Target Illegal I/O DWORD byte detection enable */
        uint64_t reserved1               : 1;       /**< Reserved */
        uint64_t tidomc                  : 1;       /**< Target I/O Delayed/Split request outstanding
                                                         maximum count.
                                                         0 = 4Ch[4:0],
                                                         1 = 1 */
        uint64_t tdomc                   : 5;       /**< Target Delayed/Split request outstanding maximum
                                                         count. [1..31] and 0=32.
                                                         NOTE: If the user programs these bits beyond the
                                                         Designed Maximum outstanding count, then the
                                                         designed maximum table depth will be used instead.
                                                         No additional Deferred/Split transactions will be
                                                         accepted if this outstanding maximum count
                                                         is reached. Furthermore, no additional
                                                         deferred/split transactions will be accepted if
                                                         the I/O delay/ I/O Split Request outstanding
                                                         maximum is reached. */
#else
        uint64_t tdomc                   : 5;
        uint64_t tidomc                  : 1;
        uint64_t reserved1               : 1;
        uint64_t tibde                   : 1;
        uint64_t tibcd                   : 1;
        uint64_t reserved                : 2;
        uint64_t tmapes                  : 1;
        uint64_t tmdpes                  : 1;
        uint64_t tmse                    : 1;
        uint64_t tmei                    : 1;
        uint64_t teci                    : 1;
        uint64_t tmes                    : 8;
        uint64_t mdrrmc                  : 3;
        uint64_t mdrimc                  : 1;
        uint64_t mdre                    : 1;
        uint64_t mdwe                    : 1;
        uint64_t mrbci                   : 1;
        uint64_t mrbcm                   : 1;
#endif
    } s;
} cvmx_pci_cfg19_t;


/**
 * PCI_CFG20 = Twenty-first 32-bits of PCI config space (Master Deferred/Split Sequence Pending)
 *
 * - Access using the CVMX_PCI_CFG20 CSR
 */
typedef union
{
    uint32_t u32;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t mdsp                    : 32;      /**< Master Deferred/Split sequence Pending */
#else
        uint64_t mdsp                    : 32;
#endif
    } s;
} cvmx_pci_cfg20_t;


/**
 * PCI_CFG21 = Twenty-second 32-bits of PCI config space (Master Split Completion Message Register)
 *
 * - Access using the CVMX_PCI_CFG21 CSR
 */
typedef union
{
    uint32_t u32;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t scmre                   : 32;      /**< Master Split Completion message received with
                                                         error message. */
#else
        uint64_t scmre                   : 32;
#endif
    } s;
} cvmx_pci_cfg21_t;


/**
 * PCI_CFG22 = Twenty-third 32-bits of PCI config space (Master Arbiter Control Register)
 *
 * - Access using the CVMX_PCI_CFG22 CSR
 */
typedef union
{
    uint32_t u32;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t mac                     : 7;       /**< Master Arbiter Control
                                                         [31:26]: Used only in Fixed Priority mode
                                                         (when [25]=1)
                                                         [31:30]: MSI Request
                                                         00 = Highest Priority
                                                         01 = Medium Priority
                                                         10 = Lowest Priority
                                                         11 = RESERVED
                                                         [29:28]: Target Split Completion
                                                         00 = Highest Priority
                                                         01 = Medium Priority
                                                         10 = Lowest Priority
                                                         11 = RESERVED
                                                         [27:26]: New Request; Deferred Read,Deferred Write
                                                         00 = Highest Priority
                                                         01 = Medium Priority
                                                         10 = Lowest Priority
                                                         11 = RESERVED
                                                         [25]: Fixed/Round Robin Priority Selector
                                                         0 = Round Robin
                                                         1 = Fixed */
        uint64_t reserved                : 6;       /**< Reserved */
        uint64_t flush                   : 1;       /**< AM_DO_FLUSH_I control
                                                         NOTE: This bit MUST BE ONE for proper N3K operation */
        uint64_t mra                     : 1;       /**< Master Retry Aborted */
        uint64_t mtta                    : 1;       /**< Master TRDY timeout aborted */
        uint64_t mrv                     : 8;       /**< Master Retry Value [1..255] and 0=infinite */
        uint64_t mttv                    : 8;       /**< Master TRDY timeout value [1..255] and 0=disabled
                                                         Note: N3 does not support master TRDY timeout
                                                         (target is expected to be well behaved). */
#else
        uint64_t mttv                    : 8;
        uint64_t mrv                     : 8;
        uint64_t mtta                    : 1;
        uint64_t mra                     : 1;
        uint64_t flush                   : 1;
        uint64_t reserved                : 6;
        uint64_t mac                     : 7;
#endif
    } s;
} cvmx_pci_cfg22_t;


/**
 * PCI_CFG56 = Fifty-seventh 32-bits of PCI config space (PCIX Capabilities Register)
 *
 * - Access using the CVMX_PCI_CFG56 CSR
 */
typedef union
{
    uint32_t u32;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 9;       /**< RESERVED */
        uint64_t most                    : 3;       /**< Maximum outstanding Split transactions
                                                         [000b=1..111b=32] */
        uint64_t mmbc                    : 2;       /**< Maximum Memory Byte Count
                                                         [0=512B,1=1024B,2=2048B,3=4096B] */
        uint64_t roe                     : 1;       /**< Relaxed Ordering Enable */
        uint64_t dpere                   : 1;       /**< Data Parity Error Recovery Enable */
        uint64_t ncp                     : 8;       /**< Next Capability Pointer */
        uint64_t pxcid                   : 8;       /**< PCI-X Capability ID */
#else
        uint64_t pxcid                   : 8;
        uint64_t ncp                     : 8;
        uint64_t dpere                   : 1;
        uint64_t roe                     : 1;
        uint64_t mmbc                    : 2;
        uint64_t most                    : 3;
        uint64_t reserved                : 9;
#endif
    } s;
} cvmx_pci_cfg56_t;


/**
 * PCI_CFG57 = Fifty-eigth 32-bits of PCI config space (PCIX Status Register)
 *
 * - Access using the CVMX_PCI_CFG57 CSR
 */
typedef union
{
    uint32_t u32;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 2;       /**< RESERVED */
        uint64_t scemr                   : 1;       /**< Split Completion Error Message Received */
        uint64_t mcrsd                   : 3;       /**< Maximum Cumulative Read Size designed */
        uint64_t mostd                   : 3;       /**< Maximum Outstanding Split transaction designed */
        uint64_t mmrbcd                  : 2;       /**< Maximum Memory Read byte count designed */
        uint64_t dc                      : 1;       /**< Device Complexity
                                                         0 = Simple Device
                                                         1 = Bridge Device */
        uint64_t usc                     : 1;       /**< Unexpected Split Completion */
        uint64_t scd                     : 1;       /**< Split Completion Discarded */
        uint64_t m133                    : 1;       /**< 133MHz Capable */
        uint64_t w64                     : 1;       /**< Indicates a 32b(=0) or 64b(=1) device */
        uint64_t bn                      : 8;       /**< Bus Number. Updated on all configuration write
                                                         (0x11=PCI)             cycles. It?s value is dependent upon the PCI/X
                                                         (0xFF=PCIX)            mode. */
        uint64_t dn                      : 5;       /**< Device Number. Updated on all configuration
                                                         write cycles. */
        uint64_t fn                      : 3;       /**< Function Number */
#else
        uint64_t fn                      : 3;
        uint64_t dn                      : 5;
        uint64_t bn                      : 8;
        uint64_t w64                     : 1;
        uint64_t m133                    : 1;
        uint64_t scd                     : 1;
        uint64_t usc                     : 1;
        uint64_t dc                      : 1;
        uint64_t mmrbcd                  : 2;
        uint64_t mostd                   : 3;
        uint64_t mcrsd                   : 3;
        uint64_t scemr                   : 1;
        uint64_t reserved                : 2;
#endif
    } s;
} cvmx_pci_cfg57_t;


/**
 * PCI_CFG58 = Fifty-ninth 32-bits of PCI config space (Power Management Capabilities Register)
 *
 * - Access using the CVMX_PCI_CFG58 CSR
 */
typedef union
{
    uint32_t u32;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t pmes                    : 5;       /**< PME Support (D0 to D3cold) */
        uint64_t d2s                     : 1;       /**< D2_Support */
        uint64_t d1s                     : 1;       /**< D1_Support */
        uint64_t auxc                    : 3;       /**< AUX_Current (0..375mA) */
        uint64_t dsi                     : 1;       /**< Device Specific Initialization */
        uint64_t reserved                : 1;       /**< Reserved */
        uint64_t pmec                    : 1;       /**< PME Clock */
        uint64_t pcimiv                  : 3;       /**< Indicates the version of the PCI
                                                         Management
                                                         Interface Specification with which the core
                                                         complies.
                                                         010b = Complies with PCI Management Interface
                                                         Specification Revision 1.1 */
        uint64_t ncp                     : 8;       /**< Next Capability Pointer */
        uint64_t pmcid                   : 8;       /**< Power Management Capability ID */
#else
        uint64_t pmcid                   : 8;
        uint64_t ncp                     : 8;
        uint64_t pcimiv                  : 3;
        uint64_t pmec                    : 1;
        uint64_t reserved                : 1;
        uint64_t dsi                     : 1;
        uint64_t auxc                    : 3;
        uint64_t d1s                     : 1;
        uint64_t d2s                     : 1;
        uint64_t pmes                    : 5;
#endif
    } s;
} cvmx_pci_cfg58_t;


/**
 * PCI_CFG59 = Sixtieth 32-bits of PCI config space (Power Management Data/PMCSR Register(s))
 *
 * - Access using the CVMX_PCI_CFG59 CSR
 */
typedef union
{
    uint32_t u32;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t pmdia                   : 8;       /**< Power Management data input from application
                                                         (PME_DATA) */
        uint64_t bpccen                  : 1;       /**< BPCC_En (bus power/clock control) enable */
        uint64_t bd3h                    : 1;       /**< B2_B3#, B2/B3 Support for D3hot */
        uint64_t reserved                : 6;       /**< Reserved */
        uint64_t pmess                   : 1;       /**< PME_Status sticky bit */
        uint64_t pmedsia                 : 2;       /**< PME_Data_Scale input from application
                                                         Device                  (PME_DATA_SCALE[1:0])
                                                         Specific */
        uint64_t pmds                    : 4;       /**< Power Management Data_select */
        uint64_t pmeens                  : 1;       /**< PME_En sticky bit */
        uint64_t reserved1               : 6;       /**< RESERVED */
        uint64_t ps                      : 2;       /**< Power State (D0 to D3)
                                                         The N2 DOES NOT support D1/D2 Power Management
                                                         states, therefore writing to this register has
                                                         no effect (please refer to the PCI Power
                                                         Management
                                                         Specification v1.1 for further details about
                                                         it?s R/W nature. This is not a conventional
                                                         R/W style register. */
#else
        uint64_t ps                      : 2;
        uint64_t reserved1               : 6;
        uint64_t pmeens                  : 1;
        uint64_t pmds                    : 4;
        uint64_t pmedsia                 : 2;
        uint64_t pmess                   : 1;
        uint64_t reserved                : 6;
        uint64_t bd3h                    : 1;
        uint64_t bpccen                  : 1;
        uint64_t pmdia                   : 8;
#endif
    } s;
} cvmx_pci_cfg59_t;


/**
 * PCI_CFG60 = Sixty-first 32-bits of PCI config space (MSI Capabilities Register)
 *
 * - Access using the CVMX_PCI_CFG60 CSR
 */
typedef union
{
    uint32_t u32;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 8;       /**< RESERVED */
        uint64_t m64                     : 1;       /**< 32/64 b message */
        uint64_t mme                     : 3;       /**< Multiple Message Enable(1,2,4,8,16,32) */
        uint64_t mmc                     : 3;       /**< Multiple Message Capable(0=1,1=2,2=4,3=8,4=16,5=32) */
        uint64_t msien                   : 1;       /**< MSI Enable */
        uint64_t ncp                     : 8;       /**< Next Capability Pointer */
        uint64_t msicid                  : 8;       /**< MSI Capability ID */
#else
        uint64_t msicid                  : 8;
        uint64_t ncp                     : 8;
        uint64_t msien                   : 1;
        uint64_t mmc                     : 3;
        uint64_t mme                     : 3;
        uint64_t m64                     : 1;
        uint64_t reserved                : 8;
#endif
    } s;
} cvmx_pci_cfg60_t;


/**
 * PCI_CFG61 = Sixty-second 32-bits of PCI config space (MSI Lower Address Register)
 *
 * - Access using the CVMX_PCI_CFG61 CSR
 */
typedef union
{
    uint32_t u32;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t msi31t2                 : 30;      /**< App Specific MSI Address [31:2] */
        uint64_t reserved                : 2;       /**< RESERVED */
#else
        uint64_t reserved                : 2;
        uint64_t msi31t2                 : 30;
#endif
    } s;
} cvmx_pci_cfg61_t;


/**
 * PCI_CFG62 = Sixty-third 32-bits of PCI config space (MSI Upper Address Register)
 *
 * - Access using the CVMX_PCI_CFG62 CSR
 */
typedef union
{
    uint32_t u32;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t msi                     : 32;      /**< MSI Address [63:32] */
#else
        uint64_t msi                     : 32;
#endif
    } s;
} cvmx_pci_cfg62_t;


/**
 * PCI_CFG63 = Sixty-fourth 32-bits of PCI config space (MSI Message Data Register)
 *
 * - Access using the CVMX_PCI_CFG63 CSR
 */
typedef union
{
    uint32_t u32;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 16;      /**< RESERVED */
        uint64_t msimd                   : 16;      /**< MSI Message Data */
#else
        uint64_t msimd                   : 16;
        uint64_t reserved                : 16;
#endif
    } s;
} cvmx_pci_cfg63_t;


/**
 * PCI_CTL_STATUS_2 = PCI Control Status 2 Register
 *  Control status register accessable from both PCI and NCB.
 *
 * - Access using the CVMX_PCI_CTL_STATUS_2 CSR
 */
typedef union
{
    uint32_t u32;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 14;      /**< Reserved */
        uint64_t scmtyp                  : 1;       /**< Split Completion Message CMD Type (0=RD/1=WR)
                                                         When SCM=1, SCMTYP specifies the CMD intent (R/W) */
        uint64_t scm                     : 1;       /**< Split Completion Message Detected (Read or Write) */
        uint64_t en_wfilt                : 1;       /**< When '1' the window-access filter is enabled. */
        uint64_t spare                   : 1;       /**< Spare Bit */
        uint64_t ap_pcix                 : 1;       /**< PCX Core Mode status (0=PCI Bus/1=PCIX) */
        uint64_t ap_64ad                 : 1;       /**< PCX Core Bus status (0=32b Bus/1=64b Bus) */
        uint64_t b12_bist                : 1;       /**< Bist Status For Memeory In B12 */
        uint64_t pmo_amod                : 1;       /**< PMO-ARB Mode (0=FP[HP=CMD1,LP=CMD0]/1=RR) */
        uint64_t pmo_fpc                 : 3;       /**< PMO-ARB Fixed Priority Counter
                                                         When PMO_AMOD=0 (FP mode), this field represents
                                                         the # of CMD1 requests that are issued (at higher
                                                         priority) before a single lower priority CMD0
                                                         is allowed to issue (to ensure foward progress).
                                                         0: 1 CMD1 Request issued before CMD0 allowed
                                                         ...
                                                         7: 8 CMD1 Requests issued before CMD0 allowed */
        uint64_t tsr_hwm                 : 3;       /**< Target Split-Read ADB High Water Mark
                                                         0=RESERVED
                                                         Represents the # Pending ADBs to accumulate before
                                                         a split completion is attempted.
                                                         #Pending ADBs = [TSR_HWM + 1]
                                                         Example: For TSR_HWM=1, 2 pending ADBs are
                                                         accumulated before a split completion is attempted. */
        uint64_t bar2_enb                : 1;       /**< When set '1' BAR2 is enable and will respond when
                                                         clear '0' BAR2 access will be target-aborted. */
        uint64_t bar2_esx                : 2;       /**< Value will be XORed with pci-address[37:36] to
                                                         determine the endian swap mode. */
        uint64_t bar2_cax                : 1;       /**< Value will be XORed with pci-address[38] to
                                                         determine the L2 cache attribute. */
#else
        uint64_t bar2_cax                : 1;
        uint64_t bar2_esx                : 2;
        uint64_t bar2_enb                : 1;
        uint64_t tsr_hwm                 : 3;
        uint64_t pmo_fpc                 : 3;
        uint64_t pmo_amod                : 1;
        uint64_t b12_bist                : 1;
        uint64_t ap_64ad                 : 1;
        uint64_t ap_pcix                 : 1;
        uint64_t spare                   : 1;
        uint64_t en_wfilt                : 1;
        uint64_t scm                     : 1;
        uint64_t scmtyp                  : 1;
        uint64_t reserved                : 14;
#endif
    } s;
} cvmx_pci_ctl_status_2_t;


/**
 * PCI_DBELL3 = PCI Doorbell-3
 *  The value to write to the doorbell 3 register. The value in this register is acted upon when the
 *  least-significant-byte of this register is written.
 *
 * - Access using the CVMX_PCI_DBELL_3 CSR
 */
typedef union
{
    uint32_t u32;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 16;      /**< Reserved */
        uint64_t inc_val                 : 16;      /**< Software writes this register with the
                                                         number of new Instructions to be processed
                                                         on the Instruction Queue. When read this
                                                         register contains the last write value. */
#else
        uint64_t inc_val                 : 16;
        uint64_t reserved                : 16;
#endif
    } s;
} cvmx_pci_dbell_t;


/**
 * PCI_DMA_CNT1 = PCI DMA Count1
 *  Keeps track of the number of DMAs or bytes sent by DMAs. The value in this register is acted upon when the
 *  least-significant-byte of this register is written.
 *
 * - Access using the CVMX_PCI_DMA_CNT1 CSR
 */
typedef union
{
    uint32_t u32;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t dma1_cnt                : 32;      /**< Update with the number of DMAs completed or the
                                                         number of bytes sent for DMA's associated with
                                                         this counter. When this register is written the
                                                         value written to [15:0] will be subtracted from
                                                         the value in this register. */
#else
        uint64_t dma1_cnt                : 32;
#endif
    } s;
} cvmx_pci_dma_cnt_t;


/**
 * PCI_DMA_INT_LEV1 = PCI DMA Sent Interrupt Level For DMA 1
 *  Interrupt when the value in PCI_DMA_CNT1 is equal to or greater than the register value.
 *
 * - Access using the CVMX_PCI_DMA_INT_LEV1 CSR
 */
typedef union
{
    uint32_t u32;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t pkt_cnt                 : 32;      /**< When PCI_DMA_CNT1 register exceeds
                                                         the value in this register an
                                                         interrupt will occur if enabled. */
#else
        uint64_t pkt_cnt                 : 32;
#endif
    } s;
} cvmx_pci_dma_int_lev_t;


/**
 * PCI_DMA_TIME1 = PCI DMA Sent Timer For DMA1
 *  Time to wait from DMA being sent before issuing an interrupt.
 *
 * - Access using the CVMX_PCI_DMA_TIME1 CSR
 */
typedef union
{
    uint32_t u32;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t dma_time                : 32;      /**< Number of PCI clock cycle to wait before
                                                         issuing an interrupt to the host when a
                                                         DMA is completed associated with this DMA Counter.
                                                         The timer is reset when the
                                                         PCI_INT_SUM[28] register is cleared. */
#else
        uint64_t dma_time                : 32;
#endif
    } s;
} cvmx_pci_dma_time_t;


/**
 * PCI_INSTR_COUNT3 = PCI Instructions Outstanding Request Count
 *  The number of instructions to be fetched by the Instruction-3 Engine.
 *
 * - Access using the CVMX_PCI_INSTR_COUNT3 CSR
 */
typedef union
{
    uint32_t u32;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t icnt                    : 32;      /**< Number of Instructions to be fetched by the
                                                         Instruction-3 Engine in N3. */
#else
        uint64_t icnt                    : 32;
#endif
    } s;
} cvmx_pci_instr_count_t;


/**
 * PCI_INT_ENB2 = PCI Interrupt Enable2 Register
 *  Enables interrupt bits in the PCI_INT_SUM2 register.
 *
 * - Access using the CVMX_PCI_INT_ENB2 CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 30;      /**< Reserved */
        uint64_t ill_rd                  : 1;       /**< RSL Chain Interrupt Enable for PCI_INT_SUM2[33] */
        uint64_t ill_wr                  : 1;       /**< RSL Chain Interrupt Enable for PCI_INT_SUM2[32] */
        uint64_t win_wr                  : 1;       /**< RSL Chain Interrupt Enable for PCI_INT_SUM2[31] */
        uint64_t dma1_fi                 : 1;       /**< RSL Chain Interrupt Enable for PCI_INT_SUM2[30] */
        uint64_t dma0_fi                 : 1;       /**< RSL Chain Interrupt Enable for PCI_INT_SUM2[29] */
        uint64_t rdtime1                 : 1;       /**< RSL Chain Interrupt Enable for PCI_INT_SUM2[28] */
        uint64_t rdtime0                 : 1;       /**< RSL Chain Interrupt Enable for PCI_INT_SUM2[27] */
        uint64_t rdcnt1                  : 1;       /**< RSL Chain Interrupt Enable for PCI_INT_SUM2[26] */
        uint64_t rdcnt0                  : 1;       /**< RSL Chain Interrupt Enable for PCI_INT_SUM2[25] */
        uint64_t rptime3                 : 1;       /**< RSL Chain Interrupt Enable for PCI_INT_SUM2[24] */
        uint64_t rptime2                 : 1;       /**< RSL Chain Interrupt Enable for PCI_INT_SUM2[23] */
        uint64_t rptime1                 : 1;       /**< RSL Chain Interrupt Enable for PCI_INT_SUM2[22] */
        uint64_t rptime0                 : 1;       /**< RSL Chain Interrupt Enable for PCI_INT_SUM2[21] */
        uint64_t rpcnt3                  : 1;       /**< RSL Chain Interrupt Enable for PCI_INT_SUM2[20] */
        uint64_t rpcnt2                  : 1;       /**< RSL Chain Interrupt Enable for PCI_INT_SUM2[19] */
        uint64_t rpcnt1                  : 1;       /**< RSL Chain Interrupt Enable for PCI_INT_SUM2[18] */
        uint64_t rpcnt0                  : 1;       /**< RSL Chain Interrupt Enable for PCI_INT_SUM2[17] */
        uint64_t rrsl_int                : 1;       /**< RSL Chain Interrupt Enable for PCI_INT_SUM2[16] */
        uint64_t ill_rrd                 : 1;       /**< RSL Chain Interrupt Enable for PCI_INT_SUM2[15] */
        uint64_t ill_rwr                 : 1;       /**< RSL Chain Interrupt Enable for PCI_INT_SUM2[14] */
        uint64_t rdperr                  : 1;       /**< RSL Chain Interrupt Enable for PCI_INT_SUM2[13] */
        uint64_t raperr                  : 1;       /**< RSL Chain Interrupt Enable for PCI_INT_SUM2[12] */
        uint64_t rserr                   : 1;       /**< RSL Chain Interrupt Enable for PCI_INT_SUM2[11] */
        uint64_t rtsr_abt                : 1;       /**< RSL Chain Interrupt Enable for PCI_INT_SUM2[10] */
        uint64_t rmsc_msg                : 1;       /**< RSL Chain Interrupt Enable for PCI_INT_SUM2[9] */
        uint64_t rmsi_mabt               : 1;       /**< RSL Chain Interrupt Enable for PCI_INT_SUM2[8] */
        uint64_t rmsi_tabt               : 1;       /**< RSL Chain Interrupt Enable for PCI_INT_SUM2[7] */
        uint64_t rmsi_per                : 1;       /**< RSL Chain Interrupt Enable for PCI_INT_SUM2[6] */
        uint64_t rmr_tto                 : 1;       /**< RSL Chain Interrupt Enable for PCI_INT_SUM2[5] */
        uint64_t rmr_abt                 : 1;       /**< RSL Chain Interrupt Enable for PCI_INT_SUM2[4] */
        uint64_t rtr_abt                 : 1;       /**< RSL Chain Interrupt Enable for PCI_INT_SUM2[3] */
        uint64_t rmr_wtto                : 1;       /**< RSL Chain Interrupt Enable for PCI_INT_SUM2[2] */
        uint64_t rmr_wabt                : 1;       /**< RSL Chain Interrupt Enable for PCI_INT_SUM2[1] */
        uint64_t rtr_wabt                : 1;       /**< RSL Chain Interrupt Enable for PCI_INT_SUM2[0] */
#else
        uint64_t rtr_wabt                : 1;
        uint64_t rmr_wabt                : 1;
        uint64_t rmr_wtto                : 1;
        uint64_t rtr_abt                 : 1;
        uint64_t rmr_abt                 : 1;
        uint64_t rmr_tto                 : 1;
        uint64_t rmsi_per                : 1;
        uint64_t rmsi_tabt               : 1;
        uint64_t rmsi_mabt               : 1;
        uint64_t rmsc_msg                : 1;
        uint64_t rtsr_abt                : 1;
        uint64_t rserr                   : 1;
        uint64_t raperr                  : 1;
        uint64_t rdperr                  : 1;
        uint64_t ill_rwr                 : 1;
        uint64_t ill_rrd                 : 1;
        uint64_t rrsl_int                : 1;
        uint64_t rpcnt0                  : 1;
        uint64_t rpcnt1                  : 1;
        uint64_t rpcnt2                  : 1;
        uint64_t rpcnt3                  : 1;
        uint64_t rptime0                 : 1;
        uint64_t rptime1                 : 1;
        uint64_t rptime2                 : 1;
        uint64_t rptime3                 : 1;
        uint64_t rdcnt0                  : 1;
        uint64_t rdcnt1                  : 1;
        uint64_t rdtime0                 : 1;
        uint64_t rdtime1                 : 1;
        uint64_t dma0_fi                 : 1;
        uint64_t dma1_fi                 : 1;
        uint64_t win_wr                  : 1;
        uint64_t ill_wr                  : 1;
        uint64_t ill_rd                  : 1;
        uint64_t reserved                : 30;
#endif
    } s;
} cvmx_pci_int_enb2_t;


/**
 * PCI_INT_ENB = PCI Interrupt Enable
 *  Enables interrupt bits in the PCI_INT_SUM register.
 *
 * - Access using the CVMX_PCI_INT_ENB CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 30;      /**< Reserved */
        uint64_t ill_rd                  : 1;       /**< INTA# Pin Interrupt Enable for PCI_INT_SUM[33] */
        uint64_t ill_wr                  : 1;       /**< INTA# Pin Interrupt Enable for PCI_INT_SUM[32] */
        uint64_t win_wr                  : 1;       /**< INTA# Pin Interrupt Enable for PCI_INT_SUM[31] */
        uint64_t dma1_fi                 : 1;       /**< INTA# Pin Interrupt Enable for PCI_INT_SUM[30] */
        uint64_t dma0_fi                 : 1;       /**< INTA# Pin Interrupt Enable for PCI_INT_SUM[29] */
        uint64_t idtime1                 : 1;       /**< INTA# Pin Interrupt Enable for PCI_INT_SUM[28] */
        uint64_t idtime0                 : 1;       /**< INTA# Pin Interrupt Enable for PCI_INT_SUM[27] */
        uint64_t idcnt1                  : 1;       /**< INTA# Pin Interrupt Enable for PCI_INT_SUM[26] */
        uint64_t idcnt0                  : 1;       /**< INTA# Pin Interrupt Enable for PCI_INT_SUM[25] */
        uint64_t iptime3                 : 1;       /**< INTA# Pin Interrupt Enable for PCI_INT_SUM[24] */
        uint64_t iptime2                 : 1;       /**< INTA# Pin Interrupt Enable for PCI_INT_SUM[23] */
        uint64_t iptime1                 : 1;       /**< INTA# Pin Interrupt Enable for PCI_INT_SUM[22] */
        uint64_t iptime0                 : 1;       /**< INTA# Pin Interrupt Enable for PCI_INT_SUM[21] */
        uint64_t ipcnt3                  : 1;       /**< INTA# Pin Interrupt Enable for PCI_INT_SUM[20] */
        uint64_t ipcnt2                  : 1;       /**< INTA# Pin Interrupt Enable for PCI_INT_SUM[19] */
        uint64_t ipcnt1                  : 1;       /**< INTA# Pin Interrupt Enable for PCI_INT_SUM[18] */
        uint64_t ipcnt0                  : 1;       /**< INTA# Pin Interrupt Enable for PCI_INT_SUM[17] */
        uint64_t irsl_int                : 1;       /**< INTA# Pin Interrupt Enable for PCI_INT_SUM[16] */
        uint64_t ill_rrd                 : 1;       /**< INTA# Pin Interrupt Enable for PCI_INT_SUM[15] */
        uint64_t ill_rwr                 : 1;       /**< INTA# Pin Interrupt Enable for PCI_INT_SUM[14] */
        uint64_t idperr                  : 1;       /**< INTA# Pin Interrupt Enable for PCI_INT_SUM[13] */
        uint64_t iaperr                  : 1;       /**< INTA# Pin Interrupt Enable for PCI_INT_SUM[12] */
        uint64_t iserr                   : 1;       /**< INTA# Pin Interrupt Enable for PCI_INT_SUM[11] */
        uint64_t itsr_abt                : 1;       /**< INTA# Pin Interrupt Enable for PCI_INT_SUM[10] */
        uint64_t imsc_msg                : 1;       /**< INTA# Pin Interrupt Enable for PCI_INT_SUM[9] */
        uint64_t imsi_mabt               : 1;       /**< INTA# Pin Interrupt Enable for PCI_INT_SUM[8] */
        uint64_t imsi_tabt               : 1;       /**< INTA# Pin Interrupt Enable for PCI_INT_SUM[7] */
        uint64_t imsi_per                : 1;       /**< INTA# Pin Interrupt Enable for PCI_INT_SUM[6] */
        uint64_t imr_tto                 : 1;       /**< INTA# Pin Interrupt Enable for PCI_INT_SUM[5] */
        uint64_t imr_abt                 : 1;       /**< INTA# Pin Interrupt Enable for PCI_INT_SUM[4] */
        uint64_t itr_abt                 : 1;       /**< INTA# Pin Interrupt Enable for PCI_INT_SUM[3] */
        uint64_t imr_wtto                : 1;       /**< INTA# Pin Interrupt Enable for PCI_INT_SUM[2] */
        uint64_t imr_wabt                : 1;       /**< INTA# Pin Interrupt Enable for PCI_INT_SUM[1] */
        uint64_t itr_wabt                : 1;       /**< INTA# Pin Interrupt Enable for PCI_INT_SUM[0] */
#else
        uint64_t itr_wabt                : 1;
        uint64_t imr_wabt                : 1;
        uint64_t imr_wtto                : 1;
        uint64_t itr_abt                 : 1;
        uint64_t imr_abt                 : 1;
        uint64_t imr_tto                 : 1;
        uint64_t imsi_per                : 1;
        uint64_t imsi_tabt               : 1;
        uint64_t imsi_mabt               : 1;
        uint64_t imsc_msg                : 1;
        uint64_t itsr_abt                : 1;
        uint64_t iserr                   : 1;
        uint64_t iaperr                  : 1;
        uint64_t idperr                  : 1;
        uint64_t ill_rwr                 : 1;
        uint64_t ill_rrd                 : 1;
        uint64_t irsl_int                : 1;
        uint64_t ipcnt0                  : 1;
        uint64_t ipcnt1                  : 1;
        uint64_t ipcnt2                  : 1;
        uint64_t ipcnt3                  : 1;
        uint64_t iptime0                 : 1;
        uint64_t iptime1                 : 1;
        uint64_t iptime2                 : 1;
        uint64_t iptime3                 : 1;
        uint64_t idcnt0                  : 1;
        uint64_t idcnt1                  : 1;
        uint64_t idtime0                 : 1;
        uint64_t idtime1                 : 1;
        uint64_t dma0_fi                 : 1;
        uint64_t dma1_fi                 : 1;
        uint64_t win_wr                  : 1;
        uint64_t ill_wr                  : 1;
        uint64_t ill_rd                  : 1;
        uint64_t reserved                : 30;
#endif
    } s;
} cvmx_pci_int_enb_t;


/**
 * PCI_INT_SUM2 = PCI Interrupt Summary2 Register
 *  The PCI Interrupt Summary2 Register copy used for RSL interrupts.
 *
 * - Access using the CVMX_PCI_INT_SUM2 CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 30;      /**< Reserved */
        uint64_t ill_rd                  : 1;       /**< A read to a disabled area of bar1 or bar2,
                                                         when the mem area is disabled. */
        uint64_t ill_wr                  : 1;       /**< A write to a disabled area of bar1 or bar2,
                                                         when the mem area is disabled. */
        uint64_t win_wr                  : 1;       /**< A write to the disabled Window Write Data or
                                                         Read-Address Register took place. */
        uint64_t dma1_fi                 : 1;       /**< A DMA operation operation finished that was
                                                         required to set the FORCE-INT bit for counter 1. */
        uint64_t dma0_fi                 : 1;       /**< A DMA operation operation finished that was
                                                         required to set the FORCE-INT bit for counter 0. */
        uint64_t dtime1                  : 1;       /**< When the value in the PCI_DMA_CNT1
                                                         register is not 0 the DMA_CNT1 timer counts.
                                                         When the DMA1_CNT timer has a value greater
                                                         than the PCI_DMA_TIME1 register this
                                                         bit is set. The timer is reset when bit is
                                                         written with a one. */
        uint64_t dtime0                  : 1;       /**< When the value in the PCI_DMA_CNT0
                                                         register is not 0 the DMA_CNT0 timer counts.
                                                         When the DMA0_CNT timer has a value greater
                                                         than the PCI_DMA_TIME0 register this
                                                         bit is set. The timer is reset when bit is
                                                         written with a one. */
        uint64_t dcnt1                   : 1;       /**< This bit indicates that PCI_DMA_CNT1
                                                         value is greater than the value
                                                         in the PCI_DMA_INT_LEV1 register. */
        uint64_t dcnt0                   : 1;       /**< This bit indicates that PCI_DMA_CNT0
                                                         value is greater than the value
                                                         in the PCI_DMA_INT_LEV0 register. */
        uint64_t ptime3                  : 1;       /**< When the value in the PCI_PKTS_SENT3
                                                         register is not 0 the Sent-3 timer counts.
                                                         When the Sent-3 timer has a value greater
                                                         than the PCI_PKTS_SENT_TIME3 register this
                                                         bit is set. The timer is reset when bit is
                                                         written with a one. */
        uint64_t ptime2                  : 1;       /**< When the value in the PCI_PKTS_SENT2
                                                         register is not 0 the Sent-2 timer counts.
                                                         When the Sent-2 timer has a value greater
                                                         than the PCI_PKTS_SENT_TIME2 register this
                                                         bit is set. The timer is reset when bit is
                                                         written with a one. */
        uint64_t ptime1                  : 1;       /**< When the value in the PCI_PKTS_SENT1
                                                         register is not 0 the Sent-1 timer counts.
                                                         When the Sent-1 timer has a value greater
                                                         than the PCI_PKTS_SENT_TIME1 register this
                                                         bit is set. The timer is reset when bit is
                                                         written with a one. */
        uint64_t ptime0                  : 1;       /**< When the value in the PCI_PKTS_SENT0
                                                         register is not 0 the Sent-0 timer counts.
                                                         When the Sent-0 timer has a value greater
                                                         than the PCI_PKTS_SENT_TIME0 register this
                                                         bit is set. The timer is reset when bit is
                                                         written with a one. */
        uint64_t pcnt3                   : 1;       /**< This bit indicates that PCI_PKTS_SENT3
                                                         value is greater than the value
                                                         in the PCI_PKTS_SENT_INT_LEV3 register. */
        uint64_t pcnt2                   : 1;       /**< This bit indicates that PCI_PKTS_SENT2
                                                         value is greater than the value
                                                         in the PCI_PKTS_SENT_INT_LEV2 register. */
        uint64_t pcnt1                   : 1;       /**< This bit indicates that PCI_PKTS_SENT1
                                                         value is greater than the value
                                                         in the PCI_PKTS_SENT_INT_LEV1 register. */
        uint64_t pcnt0                   : 1;       /**< This bit indicates that PCI_PKTS_SENT0
                                                         value is greater than the value
                                                         in the PCI_PKTS_SENT_INT_LEV0 register. */
        uint64_t rsl_int                 : 1;       /**< This bit is set when the RSL Chain has
                                                         generated an interrupt. */
        uint64_t ill_rrd                 : 1;       /**< A read to the disabled PCI registers took place. */
        uint64_t ill_rwr                 : 1;       /**< A write to the disabled PCI registers took place. */
        uint64_t dperr                   : 1;       /**< Data Parity Error detected by PCX Core */
        uint64_t aperr                   : 1;       /**< Address Parity Error detected by PCX Core */
        uint64_t serr                    : 1;       /**< SERR# detected by PCX Core */
        uint64_t tsr_abt                 : 1;       /**< Target Split-Read Abort Detected */
        uint64_t msc_msg                 : 1;       /**< Master Split Completion Message Detected */
        uint64_t msi_mabt                : 1;       /**< PCI MSI Master Abort. */
        uint64_t msi_tabt                : 1;       /**< PCI MSI Target Abort. */
        uint64_t msi_per                 : 1;       /**< PCI MSI Parity Error. */
        uint64_t mr_tto                  : 1;       /**< PCI Master Retry Timeout On Read. */
        uint64_t mr_abt                  : 1;       /**< PCI Master Abort On Read. */
        uint64_t tr_abt                  : 1;       /**< PCI Target Abort On Read. */
        uint64_t mr_wtto                 : 1;       /**< PCI Master Retry Timeout on write. */
        uint64_t mr_wabt                 : 1;       /**< PCI Master Abort detected on write. */
        uint64_t tr_wabt                 : 1;       /**< PCI Target Abort detected on write. */
#else
        uint64_t tr_wabt                 : 1;
        uint64_t mr_wabt                 : 1;
        uint64_t mr_wtto                 : 1;
        uint64_t tr_abt                  : 1;
        uint64_t mr_abt                  : 1;
        uint64_t mr_tto                  : 1;
        uint64_t msi_per                 : 1;
        uint64_t msi_tabt                : 1;
        uint64_t msi_mabt                : 1;
        uint64_t msc_msg                 : 1;
        uint64_t tsr_abt                 : 1;
        uint64_t serr                    : 1;
        uint64_t aperr                   : 1;
        uint64_t dperr                   : 1;
        uint64_t ill_rwr                 : 1;
        uint64_t ill_rrd                 : 1;
        uint64_t rsl_int                 : 1;
        uint64_t pcnt0                   : 1;
        uint64_t pcnt1                   : 1;
        uint64_t pcnt2                   : 1;
        uint64_t pcnt3                   : 1;
        uint64_t ptime0                  : 1;
        uint64_t ptime1                  : 1;
        uint64_t ptime2                  : 1;
        uint64_t ptime3                  : 1;
        uint64_t dcnt0                   : 1;
        uint64_t dcnt1                   : 1;
        uint64_t dtime0                  : 1;
        uint64_t dtime1                  : 1;
        uint64_t dma0_fi                 : 1;
        uint64_t dma1_fi                 : 1;
        uint64_t win_wr                  : 1;
        uint64_t ill_wr                  : 1;
        uint64_t ill_rd                  : 1;
        uint64_t reserved                : 30;
#endif
    } s;
} cvmx_pci_int_sum2_t;


/**
 * PCI_INT_SUM = PCI Interrupt Summary
 *  The PCI Interrupt Summary Register.
 *
 * - Access using the CVMX_PCI_INT_SUM CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 30;      /**< Reserved */
        uint64_t ill_rd                  : 1;       /**< A read to a disabled area of bar1 or bar2,
                                                         when the mem area is disabled. */
        uint64_t ill_wr                  : 1;       /**< A write to a disabled area of bar1 or bar2,
                                                         when the mem area is disabled. */
        uint64_t win_wr                  : 1;       /**< A write to the disabled Window Write Data or
                                                         Read-Address Register took place. */
        uint64_t dma1_fi                 : 1;       /**< A DMA operation operation finished that was
                                                         required to set the FORCE-INT bit for counter 1. */
        uint64_t dma0_fi                 : 1;       /**< A DMA operation operation finished that was
                                                         required to set the FORCE-INT bit for counter 0. */
        uint64_t dtime1                  : 1;       /**< When the value in the PCI_DMA_CNT1
                                                         register is not 0 the DMA_CNT1 timer counts.
                                                         When the DMA1_CNT timer has a value greater
                                                         than the PCI_DMA_TIME1 register this
                                                         bit is set. The timer is reset when bit is
                                                         written with a one. */
        uint64_t dtime0                  : 1;       /**< When the value in the PCI_DMA_CNT0
                                                         register is not 0 the DMA_CNT0 timer counts.
                                                         When the DMA0_CNT timer has a value greater
                                                         than the PCI_DMA_TIME0 register this
                                                         bit is set. The timer is reset when bit is
                                                         written with a one. */
        uint64_t dcnt1                   : 1;       /**< This bit indicates that PCI_DMA_CNT1
                                                         value is greater than the value
                                                         in the PCI_DMA_INT_LEV1 register. */
        uint64_t dcnt0                   : 1;       /**< This bit indicates that PCI_DMA_CNT0
                                                         value is greater than the value
                                                         in the PCI_DMA_INT_LEV0 register. */
        uint64_t ptime3                  : 1;       /**< When the value in the PCI_PKTS_SENT3
                                                         register is not 0 the Sent-3 timer counts.
                                                         When the Sent-3 timer has a value greater
                                                         than the PCI_PKTS_SENT_TIME3 register this
                                                         bit is set. The timer is reset when bit is
                                                         written with a one. */
        uint64_t ptime2                  : 1;       /**< When the value in the PCI_PKTS_SENT2
                                                         register is not 0 the Sent-2 timer counts.
                                                         When the Sent-2 timer has a value greater
                                                         than the PCI_PKTS_SENT_TIME2 register this
                                                         bit is set. The timer is reset when bit is
                                                         written with a one. */
        uint64_t ptime1                  : 1;       /**< When the value in the PCI_PKTS_SENT1
                                                         register is not 0 the Sent-1 timer counts.
                                                         When the Sent-1 timer has a value greater
                                                         than the PCI_PKTS_SENT_TIME1 register this
                                                         bit is set. The timer is reset when bit is
                                                         written with a one. */
        uint64_t ptime0                  : 1;       /**< When the value in the PCI_PKTS_SENT0
                                                         register is not 0 the Sent-0 timer counts.
                                                         When the Sent-0 timer has a value greater
                                                         than the PCI_PKTS_SENT_TIME0 register this
                                                         bit is set. The timer is reset when bit is
                                                         written with a one. */
        uint64_t pcnt3                   : 1;       /**< This bit indicates that PCI_PKTS_SENT3
                                                         value is greater than the value
                                                         in the PCI_PKTS_SENT_INT_LEV3 register. */
        uint64_t pcnt2                   : 1;       /**< This bit indicates that PCI_PKTS_SENT2
                                                         value is greater than the value
                                                         in the PCI_PKTS_SENT_INT_LEV2 register. */
        uint64_t pcnt1                   : 1;       /**< This bit indicates that PCI_PKTS_SENT1
                                                         value is greater than the value
                                                         in the PCI_PKTS_SENT_INT_LEV1 register. */
        uint64_t pcnt0                   : 1;       /**< This bit indicates that PCI_PKTS_SENT0
                                                         value is greater than the value
                                                         in the PCI_PKTS_SENT_INT_LEV0 register. */
        uint64_t rsl_int                 : 1;       /**< This bit is set when the mio_pci_inta_dr wire
                                                         is asserted by the MIO. */
        uint64_t ill_rrd                 : 1;       /**< A read to the disabled PCI registers took place. */
        uint64_t ill_rwr                 : 1;       /**< A write to the disabled PCI registers took place. */
        uint64_t dperr                   : 1;       /**< Data Parity Error detected by PCX Core */
        uint64_t aperr                   : 1;       /**< Address Parity Error detected by PCX Core */
        uint64_t serr                    : 1;       /**< SERR# detected by PCX Core */
        uint64_t tsr_abt                 : 1;       /**< Target Split-Read Abort Detected
                                                         N3K (as completer), has encountered an error
                                                         which prevents the split transaction from
                                                         completing. In this event, the N3K (as completer),
                                                         sends a SCM (Split Completion Message) to the
                                                         initiator. See: PCIX Spec v1.0a Fig 2-40.
                                                         [31:28]: Message Class = 2(completer error)
                                                         [27:20]: Message Index = 0x80
                                                         [18:12]: Remaining Lower Address
                                                         [11:0]: Remaining Byte Count */
        uint64_t msc_msg                 : 1;       /**< Master Split Completion Message (SCM) Detected
                                                         for either a Split-Read/Write error case.
                                                         Set if:
                                                         a) A Split-Write SCM is detected with SCE=1.
                                                         b) A Split-Read SCM is detected (regardless
                                                         of SCE status).
                                                         The Split completion message(SCM)
                                                         is also latched into the PCI_SCM_REG[SCM] to
                                                         assist SW with error recovery. */
        uint64_t msi_mabt                : 1;       /**< PCI Master Abort on Master MSI */
        uint64_t msi_tabt                : 1;       /**< PCI Target-Abort on Master MSI */
        uint64_t msi_per                 : 1;       /**< PCI Parity Error on Master MSI */
        uint64_t mr_tto                  : 1;       /**< PCI Master Retry Timeout On Master-Read */
        uint64_t mr_abt                  : 1;       /**< PCI Master Abort On Master-Read */
        uint64_t tr_abt                  : 1;       /**< PCI Target Abort On Master-Read */
        uint64_t mr_wtto                 : 1;       /**< PCI Master Retry Timeout on Master-write */
        uint64_t mr_wabt                 : 1;       /**< PCI Master Abort detected on Master-write */
        uint64_t tr_wabt                 : 1;       /**< PCI Target Abort detected on Master-write */
#else
        uint64_t tr_wabt                 : 1;
        uint64_t mr_wabt                 : 1;
        uint64_t mr_wtto                 : 1;
        uint64_t tr_abt                  : 1;
        uint64_t mr_abt                  : 1;
        uint64_t mr_tto                  : 1;
        uint64_t msi_per                 : 1;
        uint64_t msi_tabt                : 1;
        uint64_t msi_mabt                : 1;
        uint64_t msc_msg                 : 1;
        uint64_t tsr_abt                 : 1;
        uint64_t serr                    : 1;
        uint64_t aperr                   : 1;
        uint64_t dperr                   : 1;
        uint64_t ill_rwr                 : 1;
        uint64_t ill_rrd                 : 1;
        uint64_t rsl_int                 : 1;
        uint64_t pcnt0                   : 1;
        uint64_t pcnt1                   : 1;
        uint64_t pcnt2                   : 1;
        uint64_t pcnt3                   : 1;
        uint64_t ptime0                  : 1;
        uint64_t ptime1                  : 1;
        uint64_t ptime2                  : 1;
        uint64_t ptime3                  : 1;
        uint64_t dcnt0                   : 1;
        uint64_t dcnt1                   : 1;
        uint64_t dtime0                  : 1;
        uint64_t dtime1                  : 1;
        uint64_t dma0_fi                 : 1;
        uint64_t dma1_fi                 : 1;
        uint64_t win_wr                  : 1;
        uint64_t ill_wr                  : 1;
        uint64_t ill_rd                  : 1;
        uint64_t reserved                : 30;
#endif
    } s;
} cvmx_pci_int_sum_t;


/**
 * PCI_MSI_RCV = PCI's MSI Received Vector Register
 *
 *  A bit is set in this register relative to the vector received during a MSI.
 *
 * - Access using the CVMX_PCI_MSI_RCV CSR
 */
typedef union
{
    uint32_t u32;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 26;      /**< Reserved */
        uint64_t intr                    : 6;       /**< When an MSI is received on the PCI the bit selected
                                                         by data [5:0] will be set in this register. To
                                                         clear this bit a write must take place to the
                                                         NPI_MSI_RCV register where any bit set to 1 is
                                                         cleared. */
#else
        uint64_t intr                    : 6;
        uint64_t reserved                : 26;
#endif
    } s;
} cvmx_pci_msi_rcv_t;


/**
 * PCI_PKT_CREDITS0 = PCI Packet Credits For Output 0
 *  Used to decrease the number of packets to be processed by the host from Output-0 and return
 *  buffer/info pointer pairs to N3 Output-0. The value in this register is acted upon when the
 *  least-significant-byte of this register is written.
 *
 * - Access using the CVMX_PCI_PKT_CREDITS0 CSR
 */
typedef union
{
    uint32_t u32;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t pkt_cnt                 : 16;      /**< The value written to this field will be
                                                         subtracted from PCI_PKTS_SENT0[PKT_CNT]. */
        uint64_t ptr_cnt                 : 16;      /**< This field value is added to the
                                                         NPI's internal Buffer/Info Pointer Pair count. */
#else
        uint64_t ptr_cnt                 : 16;
        uint64_t pkt_cnt                 : 16;
#endif
    } s;
} cvmx_pci_pkt_credits_t;


/**
 * PCI_PKTS_SENT_INT_LEV3 = PCI Packets Sent Interrupt Level For Output 3
 *  Interrupt when number of packets sent is equal to or greater than the register value.
 *
 * - Access using the CVMX_PCI_PKTS_SENT_INT_LEV3 CSR
 */
typedef union
{
    uint32_t u32;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t pkt_cnt                 : 32;      /**< When corresponding port's packet sent
                                                         register exceeds or is equal to the value
                                                         in this register an interrupt will occur. */
#else
        uint64_t pkt_cnt                 : 32;
#endif
    } s;
} cvmx_pci_pkts_sent_int_lev_t;


/**
 * PCI_PKTS_SENT3 = PCI Packets Sent 3
 *  Number of packets sent to the host memory from PCI Output 3
 *
 * - Access using the CVMX_PCI_PKTS_SENT3 CSR
 */
typedef union
{
    uint32_t u32;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t pkt_cnt                 : 32;      /**< Each time a packet is written to the memory via
                                                         PCI from N3's PCI Output 3,  this counter is
                                                         incremented by 1 or the byte count of the packet
                                                         as set in NPI_OUTPUT_CONTROL[P3_BMODE]. */
#else
        uint64_t pkt_cnt                 : 32;
#endif
    } s;
} cvmx_pci_pkts_sent_t;


/**
 * PCI_PKTS_SENT_TIME3 = PCI Packets Sent Timer For Output-3
 *  Time to wait from packet being sent to host from Output-3 before issuing an interrupt.
 *
 * - Access using the CVMX_PCI_PKTS_SENT_TIME3 CSR
 */
typedef union
{
    uint32_t u32;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t pkt_time                : 32;      /**< Number of PCI clock cycle to wait before
                                                         issuing an interrupt to the host when a
                                                         packet from this port has been sent to the
                                                         host.  The timer is reset when the
                                                         PCI_INT_SUM[24] register is cleared. */
#else
        uint64_t pkt_time                : 32;
#endif
    } s;
} cvmx_pci_pkts_sent_time_t;


/**
 * PCI_READ_CMD_E = PCI Read Command E Register
 *  Contains control inforamtion related to a received PCI Command 6.
 *
 * - Access using the CVMX_PCI_READ_CMD_E CSR
 */
typedef union
{
    uint32_t u32;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 23;      /**< Reserved */
        uint64_t min_data                : 6;       /**< The number of words to have buffered in the PNI
                                                         before informaing the PCIX-Core that we have
                                                         read data available for the outstanding Delayed
                                                         read. 0 is treated as a 64.
                                                         For reads to the expansion this value is not used. */
        uint64_t prefetch                : 3;       /**< Control the amount of data to be preteched when
                                                         this type of READ command is received.
                                                         0 = 1 32/64 bit word.
                                                         1 = From address to end of 128B block.
                                                         2 = From address to end of 128B block plus 128B.
                                                         3 = From address to end of 128B block plus 256B.
                                                         4 = From address to end of 128B block plus 384B.
                                                         For reads to the expansion this value is not used. */
#else
        uint64_t prefetch                : 3;
        uint64_t min_data                : 6;
        uint64_t reserved                : 23;
#endif
    } s;
} cvmx_pci_read_cmd_t;


/**
 * PCI_READ_TIMEOUT = PCI Read Timeour Register
 *
 *  The address to start reading Instructions from for Input-3.
 *
 * - Access using the CVMX_PCI_READ_TIMEOUT CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 32;      /**< Reserved */
        uint64_t enb                     : 1;       /**< Enable the use of the Timeout function. */
        uint64_t cnt                     : 31;      /**< The number of eclk cycles to wait after issuing
                                                         a read request to the PNI before setting a
                                                         timeout and not expecting the data to return.
                                                         This is considered a fatal condition by the NPI. */
#else
        uint64_t cnt                     : 31;
        uint64_t enb                     : 1;
        uint64_t reserved                : 32;
#endif
    } s;
} cvmx_pci_read_timeout_t;


/**
 * PCI_SCM_REG = PCI Master Split Completion Message Register
 *
 *  This register contains the Master Split Completion Message(SCM) generated when a master split
 *  transaction is aborted.
 *
 * - Access using the CVMX_PCI_SCM_REG CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 32;      /**< Reserved */
        uint64_t scm                     : 32;      /**< Contains the Split Completion Message (SCM)
                                                         driven when a master-split transaction is aborted.
                                                         The format for the SCM is defined in PCIX 1.0a
                                                         spec Fig 2-40. Contains useful information for SW
                                                         about how many remaining bytes were NOT delivered
                                                         as well as WHO (which target) [Bus#,Func#,Device#] */
#else
        uint64_t scm                     : 32;
        uint64_t reserved                : 32;
#endif
    } s;
} cvmx_pci_scm_reg_t;


/**
 * PCI_TSR_REG = PCI Target Split Attribute Register
 *
 *  This register contains the Attribute field Master Split Completion Message(SCM) generated when a master split
 *  transaction is aborted.
 *
 * - Access using the CVMX_PCI_TSR_REG CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 28;      /**< Reserved */
        uint64_t tsr                     : 36;      /**< Contains the Target Split Attribute field when a
                                                         target-split transaction is aborted. See Fig 2-39
                                                         in PCIX v1.0a Spec for format details. */
#else
        uint64_t tsr                     : 36;
        uint64_t reserved                : 28;
#endif
    } s;
} cvmx_pci_tsr_reg_t;


/**
 * PCI_WIN_RD_ADDR = PCI Window Read Address Register
 *
 *  Contains the address to be read from when any of the upper 4 bytes of this register are written.
 *
 * - Access using the CVMX_PCI_WIN_RD_ADDR CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 15;      /**< Reserved */
        uint64_t iobit                   : 1;       /**< A 1 or 0 can be written here but this will always */
        uint64_t rd_addr                 : 45;      /**< The address to be read from. Whenever the LSB of
                                                         this register is written, the Read Operation will
                                                         take place.
                                                         [47:40] = NCB_ID
                                                         [39:3]  = Address
                                                         When [47:43] == NPI & [42:0] == 0 bits [39:0] are:
                                                         [39:32] == x, Not Used
                                                         [31:27] == RSL_ID
                                                         [12:3]  == RSL Register Offset
                                                         [2:0]   == x, Not Used */
        uint64_t reserved1               : 3;       /**< Reserved */
#else
        uint64_t reserved1               : 3;
        uint64_t rd_addr                 : 45;
        uint64_t iobit                   : 1;
        uint64_t reserved                : 15;
#endif
    } s;
} cvmx_pci_win_rd_addr_t;


/**
 * PCI_WIN_RD_DATA = PCI Window Read Data Register
 *
 *  Contains the result from the read operation that took place when the LSB of the PCI_WIN_RD_ADDR
 *  register was written.
 *
 * - Access using the CVMX_PCI_WIN_RD_DATA CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t rd_data                 : 64;      /**< The read data. */
#else
        uint64_t rd_data                 : 64;
#endif
    } s;
} cvmx_pci_win_rd_data_t;


/**
 * Internal per-queue state intended for debug use only - pko_prt_qsb.state[91:64]
 *
 * This CSR is a memory of 128 entries, and thus, the PKO_REG_READ_IDX CSR must be written before any
 * CSR read operations to this address can be performed.
 *                   PCI_WIN_WR_ADDR = PCI Window Write Address Register
 *  Contains the address to be written to when any of the upper 4 bytes of the PCI_WIN_WR_DATA register are written.
 *
 * - Access using the CVMX_PCI_WIN_WR_ADDR CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 15;      /**< Reserved */
        uint64_t iobit                   : 1;       /**< A 1 or 0 can be written here but this will always */
        uint64_t wr_addr                 : 45;      /**< The address that will be written to when the
                                                         PCI_WIN_WR_DATA register is written.
                                                         [47:40] = NCB_ID
                                                         [39:3]  = Address
                                                         When [47:43] == NPI & [42:0] == 0 bits [39:0] are:
                                                         [39:32] == x, Not Used
                                                         [31:27] == RSL_ID
                                                         [12:3]  == RSL Register Offset
                                                         [2:0]   == x, Not Used */
        uint64_t reserved1               : 3;       /**< Reserved */
#else
        uint64_t reserved1               : 3;
        uint64_t wr_addr                 : 45;
        uint64_t iobit                   : 1;
        uint64_t reserved                : 15;
#endif
    } s;
} cvmx_pci_win_wr_addr_t;


/**
 * PCI_WIN_WR_DATA = PCI Window Write Data Register
 *
 *  Contains the data to write to the address located in the PCI_WIN_WR_ADDR Register.
 *
 * - Access using the CVMX_PCI_WIN_WR_DATA CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t wr_data                 : 64;      /**< The data to be written. Whenever the LSB of this
                                                         register is written, the Window Write will take
                                                         place. */
#else
        uint64_t wr_data                 : 64;
#endif
    } s;
} cvmx_pci_win_wr_data_t;


/**
 * PCI_WIN_WR_MASK = PCI Window Write Mask Register
 *
 *  Contains the mask for the data in the PCI_WIN_WR_DATA Register.
 *
 * - Access using the CVMX_PCI_WIN_WR_MASK CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 56;      /**< Reserved */
        uint64_t wr_mask                 : 8;       /**< The data to be written. */
#else
        uint64_t wr_mask                 : 8;
        uint64_t reserved                : 56;
#endif
    } s;
} cvmx_pci_win_wr_mask_t;


/**
 * PIP_BCK_PRS = PIP's Back Pressure Register
 *
 * When to assert backpressure based on the todo list filling up
 * - Access using the CVMX_PIP_BCK_PRS CSR.
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t bckprs                  : 1;       /**< PIP is currently asserting backpressure to IOB
                                                         Backpressure from PIP will assert when the
                                                         entries to the todo list exceed HIWATER.
                                                         Backpressure will be held until the todo entries
                                                         is less than or equal to LOWATER. */
        uint64_t reserved1               : 50;      /**< Must be zero */
        uint64_t hiwater                 : 5;       /**< Water mark in the todo list to assert backpressure
                                                         Legal values are 1-26.  A 0 value will deadlock
                                                         the machine.  A value > 26, will trash memory */
        uint64_t reserved0               : 3;       /**< Must be zero */
        uint64_t lowater                 : 5;       /**< Water mark in the todo list to release backpressure
                                                         The LOWATER value should be < HIWATER. */
#else
        uint64_t lowater                 : 5;
        uint64_t reserved0               : 3;
        uint64_t hiwater                 : 5;
        uint64_t reserved1               : 50;
        uint64_t bckprs                  : 1;
#endif
    } s;
} cvmx_pip_bck_prs_t;


/**
 * PIP_BIST_STATUS = PIP's BIST Results
 * - Access using the CVMX_PIP_BIST_STATUS CSR.
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 49;      /**< Must be zero */
        uint64_t bist                    : 15;      /**< BIST Results. HW sets a bit in BIST
                                                         for memory that fails BIST. */
#else
        uint64_t bist                    : 15;
        uint64_t reserved                : 49;
#endif
    } s;
} cvmx_pip_bist_status_t;


/**
 * PIP_CRC_CTL = PIP CRC Control Register
 *
 * Controls datapath reflection when calculating CRC
 * - Access using the CVMX_PIP_CRC_CTLX(0..1) CSR.
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 62;      /**< Must be zero */
        uint64_t invres                  : 1;       /**< Invert the result */
        uint64_t reflect                 : 1;       /**< Reflect the bits in each byte. Byte order does not change.
                                                         - 0: CRC is calculated MSB to LSB
                                                         - 1: CRC is calculated LSB to MSB */
#else
        uint64_t reflect                 : 1;
        uint64_t invres                  : 1;
        uint64_t reserved                : 62;
#endif
    } s;
} cvmx_pip_crc_ctlx_t;


/**
 * PIP_CRC_IV = PIP CRC IV Register
 *
 *   Determines the IV used by the CRC algorithm
 *
 * PIP_CRC_IV controls the initial state of the CRC algorithm.  Octeon can
 *   support a wide range of CRC algorithms and as such, the IV must be
 *   carefully constructed to meet the specific algorithm.  The code below
 *   determines the value to program into Octeon based on the algorthim's IV
 *   and width.  In the case of Octeon, the width should always be 32.
 *
 *   PIP_CRC_IV0 sets the IV for ports 0-15 while PIP_CRC_IV1 sets the IV for
 *   ports 16-31.
 *
 * - Access using the CVMX_PIP_CRC_IVX(0..1) CSR.
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 32;      /**< Must be zero */
        uint64_t iv                      : 32;      /**< IV used by the CRC algorithm.  Default is FCS32. */
#else
        uint64_t iv                      : 32;
        uint64_t reserved                : 32;
#endif
    } s;
} cvmx_pip_crc_ivx_t;


/**
 * PIP_DEC_IPSEC = UDP or TCP ports to watch for DEC IPSEC
 *
 * PIP sets the dec_ipsec based on TCP or UDP destination port.
 * - Access using the CVMX_PIP_DEC_IPSECX(0..3) CSR.
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 46;      /**< Must be zero */
        uint64_t tcp                     : 1;       /**< This DPRT should be used for TCP packets */
        uint64_t udp                     : 1;       /**< This DPRT should be used for UDP packets */
        uint64_t dprt                    : 16;      /**< UDP or TCP destination port to match on */
#else
        uint64_t dprt                    : 16;
        uint64_t udp                     : 1;
        uint64_t tcp                     : 1;
        uint64_t reserved                : 46;
#endif
    } s;
} cvmx_pip_dec_ipsecx_t;


/**
 * PIP_GBL_CFG = PIP's Global Config Register
 *
 * Global config information that applies to all ports.
 * - Access using the CVMX_PIP_GBL_CFG CSR.
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved2               : 45;      /**< Must be zero */
        uint64_t tag_syn                 : 1;       /**< Do not include src_crc for TCP/SYN&!ACK packets
                                                         - 0 = include src_crc
                                                         - 1 = tag hash is dst_crc for TCP/SYN&!ACK packets */
        uint64_t ip6_udp                 : 1;       /**< IPv6/UDP checksum is not optional
                                                         - 0 = Allow optional checksum code
                                                         - 1 = Do not allow optional checksum code */
        uint64_t max_l2                  : 1;       /**< Config bit to choose the largest L2 frame size.
                                                         Chooses the value of the L2 Type/Length field
                                                         to classify the frame as length.
                                                         - 0 = 1500 / 0x5dc
                                                         - 1 = 1535 / 0x5ff */
        uint64_t reserved1               : 5;       /**< Must be zero */
        uint64_t raw_shf                 : 3;       /**< RAW Packet shift amount. Number of bytes
                                                         to pad a packet that has been received on a PCI RAW port. */
        uint64_t reserved0               : 5;       /**< Must be zero */
        uint64_t nip_shf                 : 3;       /**< Non-IP shift amount. Number of bytes to pad
                                                         a packet that has been classified as not IP. */
#else
        uint64_t nip_shf                 : 3;
        uint64_t reserved0               : 5;
        uint64_t raw_shf                 : 3;
        uint64_t reserved1               : 5;
        uint64_t max_l2                  : 1;
        uint64_t ip6_udp                 : 1;
        uint64_t tag_syn                 : 1;
        uint64_t reserved2               : 45;
#endif
    } s;
} cvmx_pip_gbl_cfg_t;


/**
 * PIP_GBL_CTL = PIP's Global Control Register
 *
 *   Global control information.  These are the global checker enables for
 *   IPv4/IPv6 and TCP/UDP parsing.  The enables effect all ports.
 *
 * The following text describes the conditions in which each checker will
 * assert and flag an exception.  By disabling the checker, the exception will
 * not be flagged and the packet will be parsed as best it can.  Note, by
 * disabling conditions, packets can be parsed incorrectly (.i.e. IP_MAL and
 * L4_MAL could cause bits to be seen in the wrong place.  IP_CHK and L4_CHK
 * means that the packet was corrupted).
 *
 *  IP_CHK
 *   Indicates that an IPv4 packet contained an IPv4 header checksum
 *   violations.  Only applies to packets classified as IPv4.
 *
 *  IP_MAL
 *   Indicates that the packet was malformed.  Malformed packets are defined as
 *   packets that are not long enough to cover the IP header or not long enough
 *   to cover the length in the IP header.
 *
 *  IP_HOP
 *   Indicates that the IPv4 TTL field or IPv6 HOP field is zero.
 *
 *  IP4_OPTS
 *   Indicates the presence of IPv4 options.  It is set when the length != 5.
 *   This only applies to packets classified as IPv4.
 *
 *  IP6_EEXT
 *   Indicate the presence of IPv6 early extension headers.  These bits only
 *   apply to packets classified as IPv6.  Bit 0 will flag early extensions
 *   when next_header is any one of the following...
 *
 *         - hop-by-hop (0)
 *         - destination (60)
 *         - routing (43)
 *
 *   following...
 *
 *         - TCP (6)
 *         - UDP (17)
 *         - fragmentation (44)
 *         - ICMP (58)
 *         - IPSEC ESP (50)
 *         - IPSEC AH (51)
 *         - IPCOMP
 *
 *  L4_MAL
 *   Indicates that a TCP or UDP packet is not long enough to cover the TCP or
 *   UDP header.
 *
 *  L4_PRT
 *   Indicates that a TCP or UDP packet has an illegal port number - either the
 *   source or destination port is zero.
 *
 *  L4_CHK
 *   Indicates that a packet classified as either TCP or UDP contains an L4
 *   checksum failure
 *
 *  L4_LEN
 *   Indicates that the TCP or UDP length does not match the the IP length.
 *
 *  TCP_FLAG
 *   Indicates any of the following conditions...
 *   <pre>
 *         [URG, ACK, PSH, RST, SYN, FIN] : tcp_flag
 *         6'b000001: (FIN only)
 *         6'b000000: (0)
 *         6'bxxx1x1: (RST+FIN+*)
 *         6'b1xxx1x: (URG+SYN+*)
 *         6'bxxx11x: (RST+SYN+*)
 *         6'bxxxx11: (SYN+FIN+*)
 *   </pre>
 * - Access using the CVMX_PIP_GBL_CTL CSR.
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved1               : 50;      /**< Must be zero */
        uint64_t l2_mal                  : 1;       /**< Enable L2 malformed packet check */
        uint64_t tcp_flag                : 1;       /**< Enable TCP flags checks */
        uint64_t l4_len                  : 1;       /**< Enable TCP/UDP length check */
        uint64_t l4_chk                  : 1;       /**< Enable TCP/UDP checksum check */
        uint64_t l4_prt                  : 1;       /**< Enable TCP/UDP illegal port check */
        uint64_t l4_mal                  : 1;       /**< Enable TCP/UDP malformed packet check */
        uint64_t reserved0               : 2;       /**< Must be zero */
        uint64_t ip6_eext                : 2;       /**< Enable IPv6 early extension headers */
        uint64_t ip4_opts                : 1;       /**< Enable IPv4 options check */
        uint64_t ip_hop                  : 1;       /**< Enable TTL (IPv4) / hop (IPv6) check */
        uint64_t ip_mal                  : 1;       /**< Enable malformed check */
        uint64_t ip_chk                  : 1;       /**< Enable IPv4 header checksum check */
#else
        uint64_t ip_chk                  : 1;
        uint64_t ip_mal                  : 1;
        uint64_t ip_hop                  : 1;
        uint64_t ip4_opts                : 1;
        uint64_t ip6_eext                : 2;
        uint64_t reserved0               : 2;
        uint64_t l4_mal                  : 1;
        uint64_t l4_prt                  : 1;
        uint64_t l4_chk                  : 1;
        uint64_t l4_len                  : 1;
        uint64_t tcp_flag                : 1;
        uint64_t l2_mal                  : 1;
        uint64_t reserved1               : 50;
#endif
    } s;
} cvmx_pip_gbl_ctl_t;


/**
 * PIP_INT_EN = PIP's Interrupt Enable Register
 *
 * Determines if hardward should raise an interrupt to software
 * when an exception event occurs.
 * - Access using the CVMX_PIP_INT_EN CSR.
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 55;      /**< Must be zero */
        uint64_t beperr                  : 1;       /**< Parity Error in back end memory */
        uint64_t feperr                  : 1;       /**< Parity Error in front end memory */
        uint64_t todoovr                 : 1;       /**< Todo list overflow (see PIP_BCK_PRS[HIWATER]) */
        uint64_t skprunt                 : 1;       /**< Packet was engulfed by skipper */
        uint64_t badtag                  : 1;       /**< A bad tag was sent from IPD */
        uint64_t prtnxa                  : 1;       /**< Non-existent port */
        uint64_t bckprs                  : 1;       /**< PIP asserted backpressure */
        uint64_t crcerr                  : 1;       /**< PIP calculated bad CRC */
        uint64_t pktdrp                  : 1;       /**< Packet Dropped due to QOS */
#else
        uint64_t pktdrp                  : 1;
        uint64_t crcerr                  : 1;
        uint64_t bckprs                  : 1;
        uint64_t prtnxa                  : 1;
        uint64_t badtag                  : 1;
        uint64_t skprunt                 : 1;
        uint64_t todoovr                 : 1;
        uint64_t feperr                  : 1;
        uint64_t beperr                  : 1;
        uint64_t reserved                : 55;
#endif
    } s;
} cvmx_pip_int_en_t;


/**
 * PIP_INT_REG = PIP's Interrupt Register
 *
 *  Any exception event that occurs is captured in the PIP_INT_REG.
 *  PIP_INT_REG will set the exception bit regardless of the value
 *  of PIP_INT_EN.  PIP_INT_EN only controls if an interrupt is
 *  raised to software.
 *
 * TODOOVR
 * The PIP Todo list stores packets that have been received and require work
 * queue entry generation.  PIP will normally assert backpressure when the
 * list fills up such that any error is normally is result of a programming
 * the PIP_BCK_PRS[HIWATER] incorrectly.  PIP itself can handle 29M
 * packets/sec at 500MHz or 15Gbs with 64B packets.
 *
 * SKPRUNT
 *  If a packet size is less then the amount programmed in the per port
 *  skippers, then there will be nothing to parse and the entire packet will
 *  basically be skipped over.  This is probably not what the user desired, so
 *  there is an indication to software.
 *
 * BADTAG
 *  A tag is considered bad when it is resued by a new packet before it was
 *  released by PIP.  PIP considers a tag released by one of two methods.
 *  . QOS dropped so that it is released over the pip__ipd_release bus.
 *  . WorkQ entry is validated by the pip__ipd_done signal
 *
 * PRTNXA
 *  Octance supports ports 0-39 (36-39 are considered RAW PCI ports).  If PIP
 *  receives a packet that is not in the range, the address processed will be
 *  mapped into the valid address space (the mapping is currently
 *  unpredictable) and the bit will be set.
 *
 * BCKPRS
 *  PIP can assert backpressure to the receive logic when the todo list
 *  exceeds a high-water mark (see PIP_BCK_PRS for more details).  When this
 *  occurs, PIP can raise an interrupt to software.
 *
 * CRCERR
 *  Octeon can compute CRC in two places.  Each RGMII port will compute its
 *  own CRC, but Spi4 CRC will be computed in PIP.  PCI will never include CRC
 *  - that bus is parity protected.  If PIP computes a bad Spi4 CRC (or RGMII
 *  CRC if the user has enabled it), then PIP will raise an interrupt.
 *
 * PKTDRP
 *  PIP can drop packets based on QOS results received from IPD.  If the QOS
 *  algorithm decides to drop a packet, PIP will assert an interrupt.
 *
 * - Access using the CVMX_PIP_INT_REG CSR.
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 55;      /**< Must be zero */
        uint64_t beperr                  : 1;       /**< Parity Error in back end memory */
        uint64_t feperr                  : 1;       /**< Parity Error in front end memory */
        uint64_t todoovr                 : 1;       /**< Todo list overflow (see PIP_BCK_PRS[HIWATER]) */
        uint64_t skprunt                 : 1;       /**< Packet was engulfed by skipper */
        uint64_t badtag                  : 1;       /**< A bad tag was sent from IPD */
        uint64_t prtnxa                  : 1;       /**< Non-existent port */
        uint64_t bckprs                  : 1;       /**< PIP asserted backpressure */
        uint64_t crcerr                  : 1;       /**< PIP calculated bad CRC */
        uint64_t pktdrp                  : 1;       /**< Packet Dropped due to QOS */
#else
        uint64_t pktdrp                  : 1;
        uint64_t crcerr                  : 1;
        uint64_t bckprs                  : 1;
        uint64_t prtnxa                  : 1;
        uint64_t badtag                  : 1;
        uint64_t skprunt                 : 1;
        uint64_t todoovr                 : 1;
        uint64_t feperr                  : 1;
        uint64_t beperr                  : 1;
        uint64_t reserved                : 55;
#endif
    } s;
} cvmx_pip_int_reg_t;


/**
 * PIP_IP_OFFSET = Location of the IP in the workQ entry
 *
 *   An 8-byte offset to find the start of the IP header in the data portion of IP workQ entires
 *
 * OFFSET is restricted in that the entire IP and TCP/UDP header must be
 * buffered by hardware.  In general, OFFSET must be set in the 0..4 range.  If
 * the system restricts all IPv6 packets, then the full range of 0..7 can be
 * used if desired.
 *
 * - Access using the CVMX_PIP_IP_OFFSET CSR.
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 61;      /**< Must be zero */
        uint64_t offset                  : 3;       /**< 8B Offset (0-7 which cooresponds to 0-56 bytes) */
#else
        uint64_t offset                  : 3;
        uint64_t reserved                : 61;
#endif
    } s;
} cvmx_pip_ip_offset_t;


/**
 * Packet input configuration structure.
 *
 * - Access using the CVMX_PIP_PRT_CFG(0..35) CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved4               : 37;      /**< Must be zero */
        uint64_t qos                     : 3;       /**< Default POW QoS queue. Can be overridden be overridden by options below */
        uint64_t qos_wat                 : 4;       /**< Bitfield enabling the QoS watcher look up tables. Four per port. */
        uint64_t reserved3               : 1;       /**< Must be zero */
        uint64_t spare                   : 1;       /**< Must be zero */
        uint64_t qos_diff                : 1;       /**< Set to use the IP diffserv field to determine the queue in the POW */
        uint64_t qos_vlan                : 1;       /**< Set to use the VLAN tag to determine the queue in the POW */
        uint64_t reserved2               : 3;       /**< Must be zero */
        uint64_t crc_en                  : 1;       /**< Set to enable hardware CRC32 checking */
        uint64_t reserved1               : 2;       /**< Must be zero */
        cvmx_pip_port_parse_mode_t mode  : 2;       /**< Controls the amount of packet processing performed by the input hardware */
        uint64_t reserved0               : 1;       /**< Must be zero */
        uint64_t skip                    : 7;       /**< Number of 8 byte works to skip in the beginning of a packet buffer */
#else
        uint64_t skip                    : 7;
        uint64_t reserved0               : 1;
        cvmx_pip_port_parse_mode_t mode  : 2;
        uint64_t reserved1               : 2;
        uint64_t crc_en                  : 1;
        uint64_t reserved2               : 3;
        uint64_t qos_vlan                : 1;
        uint64_t qos_diff                : 1;
        uint64_t spare                   : 1;
        uint64_t reserved3               : 1;
        uint64_t qos_wat                 : 4;
        uint64_t qos                     : 3;
        uint64_t reserved4               : 37;
#endif
    } s;
} cvmx_pip_port_cfg_t;


/**
 * This structure represents the configuration of the packet
 * input to POW interface. How input packets are tagged for
 * the POW is controlled here.
 *
 * - Access using the CVMX_PIP_PRT_TAG(0..35)
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved0               : 39;      /**< Must be zero */
        uint64_t inc_prt_flag            : 1;       /**< Sets whether the hardware input port is included in hash */
        uint64_t ip6_dprt_flag           : 1;       /**< Sets whether ipv6 includes destination port for tcp and udp in hash */
        uint64_t ip4_dprt_flag           : 1;       /**< Sets whether ipv4 includes destination port for tcp and udp in hash */
        uint64_t ip6_sprt_flag           : 1;       /**< Sets whether ipv6 includes source port for tcp and udp in hash */
        uint64_t ip4_sprt_flag           : 1;       /**< Sets whether ipv4 includes source port for tcp and udp in hash */
        uint64_t ip6_nxth_flag           : 1;       /**< Sets whether ipv6 includes next header in hash */
        uint64_t ip4_pctl_flag           : 1;       /**< Sets whether ipv4 includes protocol in hash */
        uint64_t ip6_dst_flag            : 1;       /**< Sets whether ipv6 includes destination address in tag hash */
        uint64_t ip4_dst_flag            : 1;       /**< Sets whether ipv4 includes destination address in tag hash */
        uint64_t ip6_src_flag            : 1;       /**< Sets whether ipv6 includes source address in tag hash */
        uint64_t ip4_src_flag            : 1;       /**< Sets whether ipv4 includes source address in tag hash */
        cvmx_pow_tag_type_t tcp6_tag_type : 2;      /**< Tag type to use if the packet is IPv6 TCP */
        cvmx_pow_tag_type_t tcp4_tag_type : 2;      /**< Tag type to use if the packet is IPv4 TCP */
        cvmx_pow_tag_type_t ip6_tag_type : 2;       /**< Tag type to use if the packet is IPv6 but not TCP */
        cvmx_pow_tag_type_t ip4_tag_type : 2;       /**< Tag type to use if the packet is IPv4 but not TCP */
        cvmx_pow_tag_type_t non_tag_type : 2;       /**< Tag type to use if the packet is not IPv6 or IPv4 */
        uint64_t grp                     : 4;       /**< POW group to use for packets from this port */
#else
        uint64_t grp                     : 4;
        cvmx_pow_tag_type_t non_tag_type : 2;
        cvmx_pow_tag_type_t ip4_tag_type : 2;
        cvmx_pow_tag_type_t ip6_tag_type : 2;
        cvmx_pow_tag_type_t tcp4_tag_type : 2;
        cvmx_pow_tag_type_t tcp6_tag_type : 2;
        uint64_t ip4_src_flag            : 1;
        uint64_t ip6_src_flag            : 1;
        uint64_t ip4_dst_flag            : 1;
        uint64_t ip6_dst_flag            : 1;
        uint64_t ip4_pctl_flag           : 1;
        uint64_t ip6_nxth_flag           : 1;
        uint64_t ip4_sprt_flag           : 1;
        uint64_t ip6_sprt_flag           : 1;
        uint64_t ip4_dprt_flag           : 1;
        uint64_t ip6_dprt_flag           : 1;
        uint64_t inc_prt_flag            : 1;
        uint64_t reserved0               : 39;
#endif
    } s;
} cvmx_pip_port_tag_cfg_t;


/**
 * This structure represents watcher configuration request.
 *
 * - Access using the CVMX_PIP_QOS_WATCHX(0..3)
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved0               : 41;      /**< Must be zero */
        uint64_t qos                     : 3;       /**< QoS value for packets matching this watcher */
        uint64_t reserved1               : 2;       /**< Must be zero */
        cvmx_pip_qos_watch_types match_type : 2;    /**< Watcher match type. */
        uint64_t match_value             : 16;      /**< Packet value to match. */
#else
        uint64_t match_value             : 16;
        cvmx_pip_qos_watch_types match_type : 2;
        uint64_t reserved1               : 2;
        uint64_t qos                     : 3;
        uint64_t reserved0               : 41;
#endif
    } s;
} cvmx_pip_port_watcher_cfg_t;


/**
 * PIP_QOS_DIFFX = QOS Diffserv Tables
 * - Access using the CVMX_PIP_QOS_DIFFX(0..63) CSR.
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 61;      /**< Must be zero */
        uint64_t qos                     : 3;       /**< Diffserv QOS level */
#else
        uint64_t qos                     : 3;
        uint64_t reserved                : 61;
#endif
    } s;
} cvmx_pip_qos_diffx_t;


/**
 * PIP_QOS_VLANX = QOS VLAN Tables
 *
 * If the PIP indentifies a packet to be VLAN tagged, then the QOS
 * can be set based on the VLAN user priority.  These eight register
 * comprise the QOS values for all VLAN user priority values.
 * - Access using the CVMX_PIP_QOS_VLANX(0..7) CSR.
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 61;      /**< Must be zero */
        uint64_t qos                     : 3;       /**< VLAN QOS level */
#else
        uint64_t qos                     : 3;
        uint64_t reserved                : 61;
#endif
    } s;
} cvmx_pip_qos_vlanx_t;


/**
 * PIP_RAW_WORD = The RAW Word2 of the workQ entry.
 *
 * The RAW Word2 to be inserted into the workQ entry of PCI RAW packets.
 * - Access using the CVMX_PIP_RAW_WORD CSR.
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 8;       /**< Must be zero */
        uint64_t word                    : 56;      /**< Word2 of the workQ entry. The 8-bit bufs field is still set by HW (IPD) */
#else
        uint64_t word                    : 56;
        uint64_t reserved                : 8;
#endif
    } s;
} cvmx_pip_raw_word_t;


/**
 * PIP_STAT_CTL = PIP's Stat Control Register
 *
 * Controls how the PIP statistics counters are handled.
 * - Access using the CVMX_PIP_STAT_CTL CSR.
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 63;      /**< Must be zero */
        uint64_t rdclr                   : 1;       /**< Stat registers are read and clear
                                                         - 0 = stat registers hold value when read
                                                         - 1 = stat registers are cleared when read */
#else
        uint64_t rdclr                   : 1;
        uint64_t reserved                : 63;
#endif
    } s;
} cvmx_pip_stat_ctl_t;


/**
 * PIP_TODO_ENTRY = Head entry of the Todo list (debug only)
 *
 * Summary of the current packet that has completed and waiting to be processed
 * - Access using the CVMX_PIP_TODO_ENTRY CSR.
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t val                     : 1;       /**< Entry is valid */
        uint64_t reserved                : 1;       /**< Must be zero */
        uint64_t entry                   : 62;      /**< Todo list entry summary */
#else
        uint64_t entry                   : 62;
        uint64_t reserved                : 1;
        uint64_t val                     : 1;
#endif
    } s;
} cvmx_pip_todo_entry_t;


/**
 * Sets the queue to port mapping and the initial command buffer pointer, per queue
 * Each queue may map to at most one port.  No more than 8 queues may map to a port.  The set of
 * queues that is mapped to a port must be a contiguous array of queues.  The port to which queue QID
 * is mapped is port PID.  The index of queue QID in port PID's queue list is IDX.  The last queue in
 * port PID's queue array must have its TAIL bit set.  Unused queues must be mapped to port 63.
 * This CSR is a memory of 128 entries, and thus, the PKO_REG_READ_IDX CSR must be written before any
 * CSR read operations to this address can be performed.  A read of any entry that has not been
 * previously written is illegal and will result in unpredictable CSR read data.
 *
 * - Access using the CVMX_PKO_MEM_COUNT0 CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 32;      /**< Reserved */
        uint64_t count                   : 32;      /**< Total number of packets seen by PKO */
#else
        uint64_t count                   : 32;
        uint64_t reserved                : 32;
#endif
    } s;
} cvmx_pko_mem_count0_t;


/**
 * Total number of packets seen by PKO, per port
 *  A write to this address will clear the entry whose index is specified as COUNT[5:0].
 *  This CSR is a memory of 36 entries, and thus, the PKO_REG_READ_IDX CSR must be written before any
 *  CSR read operations to this address can be performed.  A read of any entry that has not been
 *  previously written is illegal and will result in unpredictable CSR read data.
 *
 * - Access using the CVMX_PKO_MEM_COUNT1 CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 16;      /**< Reserved */
        uint64_t count                   : 48;      /**< Total number of bytes seen by PKO */
#else
        uint64_t count                   : 48;
        uint64_t reserved                : 16;
#endif
    } s;
} cvmx_pko_mem_count1_t;


/**
 * Total number of bytes seen by PKO, per port
 *  A write to this address will clear the entry whose index is specified as COUNT[5:0].
 *  This CSR is a memory of 36 entries, and thus, the PKO_REG_READ_IDX CSR must be written before any
 *  CSR read operations to this address can be performed.  A read of any entry that has not been
 *  previously written is illegal and will result in unpredictable CSR read data.
 *
 * - Access using the CVMX_PKO_MEM_DEBUG0 CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t fau                     : 28;      /**< Fetch and add command words */
        uint64_t cmd                     : 14;      /**< Command word */
        uint64_t segs                    : 6;       /**< Number of segments/gather size */
        uint64_t size                    : 16;      /**< Packet length in bytes */
#else
        uint64_t size                    : 16;
        uint64_t segs                    : 6;
        uint64_t cmd                     : 14;
        uint64_t fau                     : 28;
#endif
    } s;
} cvmx_pko_mem_debug0_t;


/**
 * Internal per-port state intended for debug use only - pko_prt_psb.cmnd[63:0]
 * This CSR is a memory of 36 entries, and thus, the PKO_REG_READ_IDX CSR must be written before any
 * CSR read operations to this address can be performed.
 *
 * - Access using the CVMX_PKO_MEM_DEBUG1 CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t i                       : 1;       /**< "I" value used for free operation */
        uint64_t back                    : 4;       /**< Back value used for free operation */
        uint64_t pool                    : 3;       /**< Pool value used for free operation */
        uint64_t size                    : 16;      /**< Size in bytes */
        uint64_t ptr                     : 40;      /**< Data pointer */
#else
        uint64_t ptr                     : 40;
        uint64_t size                    : 16;
        uint64_t pool                    : 3;
        uint64_t back                    : 4;
        uint64_t i                       : 1;
#endif
    } s;
} cvmx_pko_mem_debug1_t;


/**
 * Internal per-port state intended for debug use only - pko_prt_psb.head[63:0]
 * This CSR is a memory of 36 entries, and thus, the PKO_REG_READ_IDX CSR must be written before any
 * CSR read operations to this address can be performed.
 *
 * - Access using the CVMX_PKO_MEM_DEBUG2 CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t i                       : 1;       /**< "I" value used for free operation */
        uint64_t back                    : 4;       /**< Back value used for free operation */
        uint64_t pool                    : 3;       /**< Pool value used for free operation */
        uint64_t size                    : 16;      /**< Size in bytes */
        uint64_t ptr                     : 40;      /**< Data pointer */
#else
        uint64_t ptr                     : 40;
        uint64_t size                    : 16;
        uint64_t pool                    : 3;
        uint64_t back                    : 4;
        uint64_t i                       : 1;
#endif
    } s;
} cvmx_pko_mem_debug2_t;


/**
 * Internal per-port state intended for debug use only - pko_prt_psb.curr[63:0]
 * This CSR is a memory of 36 entries, and thus, the PKO_REG_READ_IDX CSR must be written before any
 * CSR read operations to this address can be performed.
 *
 * - Access using the CVMX_PKO_MEM_DEBUG3 CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t i                       : 1;       /**< "I" value used for free operation */
        uint64_t back                    : 4;       /**< Back value used for free operation */
        uint64_t pool                    : 3;       /**< Pool value used for free operation */
        uint64_t size                    : 16;      /**< Size in bytes */
        uint64_t ptr                     : 40;      /**< Data pointer */
#else
        uint64_t ptr                     : 40;
        uint64_t size                    : 16;
        uint64_t pool                    : 3;
        uint64_t back                    : 4;
        uint64_t i                       : 1;
#endif
    } s;
} cvmx_pko_mem_debug3_t;


/**
 * Internal per-port state intended for debug use only - pko_prt_psb.next[63:0]
 * This CSR is a memory of 36 entries, and thus, the PKO_REG_READ_IDX CSR must be written before any
 * CSR read operations to this address can be performed.
 *
 * - Access using the CVMX_PKO_MEM_DEBUG4 CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t data                    : 64;      /**< WorkQ data or Store0 pointer */
#else
        uint64_t data                    : 64;
#endif
    } s;
} cvmx_pko_mem_debug4_t;


/**
 * Internal per-port state intended for debug use only - pko_prt_psb.work[63:0]
 * This CSR is a memory of 36 entries, and thus, the PKO_REG_READ_IDX CSR must be written before any
 * CSR read operations to this address can be performed.
 *
 * - Access using the CVMX_PKO_MEM_DEBUG5 CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t buf_cnt                 : 16;      /**< Buffer count for PDB and QCB */
        uint64_t buf_widx                : 16;      /**< Buffer write index for PDB and QCB */
        uint64_t buf_ridx                : 16;      /**< Buffer read index for PDB and QCB */
        uint64_t qid_off                 : 3;       /**< Offset to be added to QID_BASE for current queue */
        uint64_t qid_base                : 7;       /**< Absolute QID of the queue array base = &QUEUES[0] */
        uint64_t wait                    : 1;       /**< State wait when set */
        uint64_t minor                   : 2;       /**< State minor code */
        uint64_t major                   : 3;       /**< State major code */
#else
        uint64_t major                   : 3;
        uint64_t minor                   : 2;
        uint64_t wait                    : 1;
        uint64_t qid_base                : 7;
        uint64_t qid_off                 : 3;
        uint64_t buf_ridx                : 16;
        uint64_t buf_widx                : 16;
        uint64_t buf_cnt                 : 16;
#endif
    } s;
} cvmx_pko_mem_debug5_t;


/**
 * Internal per-port state intended for debug use only - pko_prt_psb.state[63:0]
 * This CSR is a memory of 36 entries, and thus, the PKO_REG_READ_IDX CSR must be written before any
 * CSR read operations to this address can be performed.
 *
 * - Access using the CVMX_PKO_MEM_DEBUG6 CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 53;      /**< MBZ */
        uint64_t cbuf_fre                : 1;       /**< Command buffer needs to be freed when set */
        uint64_t chk_rdy                 : 1;       /**< Checksum computation is ready when set */
        uint64_t chk_mode                : 1;       /**< State machine is in "checksum mode" when set */
        uint64_t dwrite_c                : 1;       /**< Data write overflows due to CRC append when set */
        uint64_t dwrite_e                : 1;       /**< Data write needs to write the eop byte when set */
        uint64_t dwrite_s                : 1;       /**< Data write needs to write the sop byte when set */
        uint64_t dwrite_l                : 1;       /**< Data write needs to write packet length when set */
        uint64_t active                  : 1;       /**< Port is active (has work to do) when set */
        uint64_t qos                     : 3;       /**< Current QOS round */
#else
        uint64_t qos                     : 3;
        uint64_t active                  : 1;
        uint64_t dwrite_l                : 1;
        uint64_t dwrite_s                : 1;
        uint64_t dwrite_e                : 1;
        uint64_t dwrite_c                : 1;
        uint64_t chk_mode                : 1;
        uint64_t chk_rdy                 : 1;
        uint64_t cbuf_fre                : 1;
        uint64_t reserved                : 53;
#endif
    } s;
} cvmx_pko_mem_debug6_t;


/**
 * Internal per-port state intended for debug use only - pko_prt_psb.state[74:64]
 * This CSR is a memory of 36 entries, and thus, the PKO_REG_READ_IDX CSR must be written before any
 * CSR read operations to this address can be performed.
 *
 * - Access using the CVMX_PKO_MEM_DEBUG7 CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 6;       /**< MBZ */
        uint64_t dwb                     : 9;       /**< Calculated DWB count used for free operation */
        uint64_t start                   : 33;      /**< Calculated start address used for free operation */
        uint64_t size                    : 16;      /**< Packet length in bytes */
#else
        uint64_t size                    : 16;
        uint64_t start                   : 33;
        uint64_t dwb                     : 9;
        uint64_t reserved                : 6;
#endif
    } s;
} cvmx_pko_mem_debug7_t;


/**
 * Internal per-port state intended for debug use only - pko_prt_psb.save[63:0]
 * This CSR is a memory of 36 entries, and thus, the PKO_REG_READ_IDX CSR must be written before any
 * CSR read operations to this address can be performed.
 *
 * - Access using the CVMX_PKO_MEM_DEBUG8 CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t qos                     : 5;       /**< QOS mask to enable the queue when set */
        uint64_t tail                    : 1;       /**< This queue is the last (tail) in the queue array */
        uint64_t buf_siz                 : 13;      /**< Command buffer remaining size in words */
        uint64_t buf_ptr                 : 33;      /**< Command word pointer */
        uint64_t qcb_widx                : 6;       /**< Buffer write index for QCB */
        uint64_t qcb_ridx                : 6;       /**< Buffer read index for QCB */
#else
        uint64_t qcb_ridx                : 6;
        uint64_t qcb_widx                : 6;
        uint64_t buf_ptr                 : 33;
        uint64_t buf_siz                 : 13;
        uint64_t tail                    : 1;
        uint64_t qos                     : 5;
#endif
    } s;
} cvmx_pko_mem_debug8_t;


/**
 * Internal per-queue state intended for debug use only - pko_prt_qsb.state[63:0]
 * This CSR is a memory of 128 entries, and thus, the PKO_REG_READ_IDX CSR must be written before any
 * CSR read operations to this address can be performed.
 *
 * - Access using the CVMX_PKO_MEM_DEBUG9 CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t unused                  : 36;      /**< MBZ */
        uint64_t doorbell                : 20;      /**< Doorbell count */
        uint64_t reserved                : 5;       /**< MBZ */
        uint64_t qos                     : 3;       /**< QOS mask to enable the queue when set */
#else
        uint64_t qos                     : 3;
        uint64_t reserved                : 5;
        uint64_t doorbell                : 20;
        uint64_t unused                  : 36;
#endif
    } s;
} cvmx_pko_mem_debug9_t;


/**
 * Definition of the hardware structure used to configure the memory pool.
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 41;      /**< Must be zero */
        uint64_t pool                    : 3;       /**< Hardware pool to use */
        uint64_t reserved2               : 7;       /**< Must be zero */
        uint64_t size                    : 13;      /**< Size of the pool blocks */
#else
        uint64_t size                    : 13;
        uint64_t reserved2               : 7;
        uint64_t pool                    : 3;
        uint64_t reserved                : 41;
#endif
    } s;
} cvmx_pko_pool_cfg_t;


/**
 * Definition of the hardware structure used to configure an
 * output queue.
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 3;       /**< Must be zero */
        uint64_t qos_mask                : 8;       /**< Mask to control priority across 8 QOS levels */
        uint64_t buf_ptr                 : 36;      /**< Command buffer pointer, 8 byte-aligned */
        uint64_t tail                    : 1;       /**< Set if this queue is the tail of the port queue array */
        uint64_t index                   : 3;       /**< Index (distance from head) in the port queue array */
        uint64_t port                    : 6;       /**< Port ID to which this queue is mapped */
        uint64_t queue                   : 7;       /**< Hardware queue number */
#else
        uint64_t queue                   : 7;
        uint64_t port                    : 6;
        uint64_t index                   : 3;
        uint64_t tail                    : 1;
        uint64_t buf_ptr                 : 36;
        uint64_t qos_mask                : 8;
        uint64_t reserved                : 3;
#endif
    } s;
} cvmx_pko_queue_cfg_t;


/**
 * Sets the number of queues and amount of local storage per queue
 * The system has a total of 128 queues and (128*8) words of local command storage.  This CSR sets the
 * number of queues that are used.  Increasing the value of MODE by 1 decreases the number of queues
 * by a power of 2 and increases the local storage per queue by a power of 2.
 * MODEn queues storage/queue
 * 0     128     64B ( 8 words)
 * 1      64    128B (16 words)
 * 2      32    256B (32 words)
 *
 * - Access using the CVMX_PKO_REG_BIST_RESULT CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 42;      /**< MBZ */
        uint64_t count                   : 1;       /**< BiST result of the COUNT memories (0=pass, !0=fail) */
        uint64_t rif                     : 1;       /**< BiST result of the RIF memories (0=pass, !0=fail) */
        uint64_t wif                     : 1;       /**< BiST result of the WIF memories (0=pass, !0=fail) */
        uint64_t ncb                     : 1;       /**< BiST result of the NCB memories (0=pass, !0=fail) */
        uint64_t out                     : 1;       /**< BiST result of the OUT memories (0=pass, !0=fail) */
        uint64_t crc                     : 1;       /**< BiST result of the CRC memories (0=pass, !0=fail) */
        uint64_t chk                     : 1;       /**< BiST result of the CHK memories (0=pass, !0=fail) */
        uint64_t qsb                     : 2;       /**< BiST result of the QSB memories (0=pass, !0=fail) */
        uint64_t qcb                     : 2;       /**< BiST result of the QCB memories (0=pass, !0=fail) */
        uint64_t pdb                     : 4;       /**< BiST result of the PDB memories (0=pass, !0=fail) */
        uint64_t psb                     : 7;       /**< BiST result of the PSB memories (0=pass, !0=fail) */
#else
        uint64_t psb                     : 7;
        uint64_t pdb                     : 4;
        uint64_t qcb                     : 2;
        uint64_t qsb                     : 2;
        uint64_t chk                     : 1;
        uint64_t crc                     : 1;
        uint64_t out                     : 1;
        uint64_t ncb                     : 1;
        uint64_t wif                     : 1;
        uint64_t rif                     : 1;
        uint64_t count                   : 1;
        uint64_t reserved                : 42;
#endif
    } s;
} cvmx_pko_reg_bist_result_t;


/**
 * Enables CRC for the GMX ports
 *
 * - Access using the CVMX_PKO_REG_CRC_CTLX(0..1) CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 62;      /**< Reserved */
        uint64_t invres                  : 1;       /**< Invert the result */
        uint64_t refin                   : 1;       /**< Reflect the bits in each byte.
                                                         Byte order does not change.
                                                         0: CRC is calculated MSB to LSB
                                                         1: CRC is calculated MLB to MSB */
#else
        uint64_t refin                   : 1;
        uint64_t invres                  : 1;
        uint64_t reserved                : 62;
#endif
    } s;
} cvmx_pko_reg_crc_ctlx_t;


/**
 * Sets the number of GMX ports and amount of local storage per port independently for GMX0 and GMX1
 * The system has a total of 16 + 16 + 4 ports (GM0 + GM1 + PCI).  This CSR sets the number of GMX
 * ports that are used.  This CSR has no effect on the number of PCI ports.  When all 16 + 16 + 4
 * ports are used (MODE0=0, MODE1=0), each port has 1.5kB of local storage.  Increasing the value of
 * MODEn by 1 decreases the number of GMXn ports by a power of 2 and increases the local storage per
 * GMXn port by a power of 2.
 * MODEn GMXn  PCI   GMXn         PCI
 *       ports ports storage/port storage/port
 * 0     16    4      1.5kB       1.5kB
 * 1      8    4      3.0kB       1.5kB
 * 2      4    4      6.0kB       1.5kB
 * 3      2    4     12.0kB       1.5kB
 * 4      1    4     24.0kB       1.5kB
 *
 * - Access using the CVMX_PKO_REG_CRC_ENABLE CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 32;      /**< MBZ */
        uint64_t enable                  : 32;      /**< Mask for ports 31-0 to enable CRC */
#else
        uint64_t enable                  : 32;
        uint64_t reserved                : 32;
#endif
    } s;
} cvmx_pko_reg_crc_enable_t;


/**
 * Controls datapath reflection when calculating CRC
 *
 * - Access using the CVMX_PKO_REG_CRC_IVX(0..1) CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 32;      /**< Reserved */
        uint64_t iv                      : 32;      /**< IV used by the CRC algorithm. Default is FCS32. */
#else
        uint64_t iv                      : 32;
        uint64_t reserved                : 32;
#endif
    } s;
} cvmx_pko_reg_crc_ivx_t;


/**
 * - Access using the CVMX_PKO_REG_FLAGS CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 62;      /**< MBZ */
        uint64_t ena_dwb                 : 1;       /**< Set to enable DontWriteBacks */
        uint64_t ena_pko                 : 1;       /**< Set to enable the PKO picker */
#else
        uint64_t ena_pko                 : 1;
        uint64_t ena_dwb                 : 1;
        uint64_t reserved                : 62;
#endif
    } s;
} cvmx_pko_reg_flags_t;


/**
 * Sets the command buffer parameters
 * The size of the command buffer segments is measured in uint64s.  The pool specifies (1 of 8 free
 * lists to be used when freeing command buffer segments.
 *
 * - Access using the CVMX_PKO_REG_GMX_PORT_MODE CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 58;      /**< MBZ */
        uint64_t mode1                   : 3;       /**< # of GMX1 ports = 16 >> MODE1, 0 <= MODE1 <=4 */
        uint64_t mode0                   : 3;       /**< # of GMX0 ports = 16 >> MODE0, 0 <= MODE0 <=4 */
#else
        uint64_t mode0                   : 3;
        uint64_t mode1                   : 3;
        uint64_t reserved                : 58;
#endif
    } s;
} cvmx_pko_reg_gmx_port_mode_t;


/**
 * Determines the IV used by the CRC algorithm
 *  PKO_CRC_IV
 *    PKO_CRC_IV controls the initial state of the CRC algorithm.  Octane can
 *    support a wide range of CRC algorithms and as such, the IV must be
 *    carefully constructed to meet the specific algorithm.  The code below
 *    determines the value to program into Octane based on the algorthim's IV
 *    and width.  In the case of Octane, the width should always be 32.
 *    PKO_CRC_IV0 sets the IV for ports 0-15 while PKO_CRC_IV1 sets the IV for
 *    ports 16-31.
 *     unsigned octane_crc_iv(unsigned algorithm_iv, unsigned poly, unsigned w)
 *     [
 *       int i;
 *       int doit;
 *       unsigned int current_val = algorithm_iv;
 *       for(i = 0; i < w; i++) [
 *         doit = current_val & 0x1;
 *         if(doit) current_val ^= poly;
 *         assert(!(current_val & 0x1));
 *         current_val = (current_val >> 1) | (doit << (w-1));
 *       ]
 *       return current_val;
 *     ]
 *
 * - Access using the CVMX_PKO_REG_QUEUE_MODE CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 62;      /**< MBZ */
        uint64_t mode                    : 2;       /**< # of queues = 128 >> MODE, 0 <= MODE <=2 */
#else
        uint64_t mode                    : 2;
        uint64_t reserved                : 62;
#endif
    } s;
} cvmx_pko_reg_queue_mode_t;


/**
 * When set, ENA_PKO enables the PKO picker and places the PKO in normal operation.  When set, ENA_DWB
 * enables the use of DontWriteBacks during the buffer freeing operations.
 *
 * - Access using the CVMX_PKO_REG_READ_IDX CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 48;      /**< MBZ */
        uint64_t inc                     : 8;       /**< Increment to add to current index for next index */
        uint64_t index                   : 8;       /**< Index to use for next memory CSR read */
#else
        uint64_t index                   : 8;
        uint64_t inc                     : 8;
        uint64_t reserved                : 48;
#endif
    } s;
} cvmx_pko_reg_read_idx_t;


/**
 * POW_BIST_STAT = POW BIST Status Register
 *  Contains the BIST status for the POW memories ('0' = pass, '1' = fail).
 *  Also contains the BIST status for the PP's.  Each bit in the PP field is the OR of all BIST
 *  results for the corresponding physical PP ('0' = pass, '1' = fail).
 *
 * - Access using the CVMX_POW_BIST_STAT CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved1               : 32;      /**< Reserved */
        uint64_t pp                      : 16;      /**< Physical PP BIST status */
        uint64_t reserved0               : 6;       /**< Reserved */
        uint64_t cam                     : 1;       /**< POW CAM BIST status */
        uint64_t nbt                     : 1;       /**< NCB transmitter memory BIST status */
        uint64_t index                   : 1;       /**< Index memory BIST status */
        uint64_t fidx                    : 1;       /**< Forward index memory BIST status */
        uint64_t nbr1                    : 1;       /**< NCB receiver memory 1 BIST status */
        uint64_t nbr0                    : 1;       /**< NCB receiver memory 0 BIST status */
        uint64_t pend1                   : 1;       /**< Pending switch memory 1 BIST status */
        uint64_t pend0                   : 1;       /**< Pending switch memory 0 BIST status */
        uint64_t adr1                    : 1;       /**< Address memory 1 BIST status */
        uint64_t adr0                    : 1;       /**< Address memory 0 BIST status */
#else
        uint64_t adr0                    : 1;
        uint64_t adr1                    : 1;
        uint64_t pend0                   : 1;
        uint64_t pend1                   : 1;
        uint64_t nbr0                    : 1;
        uint64_t nbr1                    : 1;
        uint64_t fidx                    : 1;
        uint64_t index                   : 1;
        uint64_t nbt                     : 1;
        uint64_t cam                     : 1;
        uint64_t reserved0               : 6;
        uint64_t pp                      : 16;
        uint64_t reserved1               : 32;
#endif
    } s;
} cvmx_pow_bist_stat_t;


/**
 * POW_DS_PC = POW De-Schedule Performance Counter
 *  Counts the number of de-schedule requests.  Write to clear.
 *
 * - Access using the CVMX_POW_DS_PC CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 32;      /**< Reserved */
        uint64_t ds_pc                   : 32;      /**< De-schedule performance counter */
#else
        uint64_t ds_pc                   : 32;
        uint64_t reserved                : 32;
#endif
    } s;
} cvmx_pow_ds_pc_t;


/**
 * POW_ECC_ERR = POW ECC Error Register
 *  Contains the single and double error bits and the corresponding interrupt enables for the ECC-
 *  protected POW index memory.  Also contains the syndrome value in the event of an ECC error.
 *
 * - Access using the CVMX_POW_ECC_ERR CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 55;      /**< Reserved */
        uint64_t syn                     : 5;       /**< Syndrome value (only valid when DBE or SBE is set) */
        uint64_t dbe_ie                  : 1;       /**< Double bit error interrupt enable */
        uint64_t sbe_ie                  : 1;       /**< Single bit error interrupt enable */
        uint64_t dbe                     : 1;       /**< Double bit error */
        uint64_t sbe                     : 1;       /**< Single bit error */
#else
        uint64_t sbe                     : 1;
        uint64_t dbe                     : 1;
        uint64_t sbe_ie                  : 1;
        uint64_t dbe_ie                  : 1;
        uint64_t syn                     : 5;
        uint64_t reserved                : 55;
#endif
    } s;
} cvmx_pow_ecc_err_t;


/**
 * POW_INT_CTL = POW Internal Control Register
 *  Contains POW internal control values (for internal use, not typically for customer use):
 *  PFR_DIS = Disable high-performance pre-fetch reset mode.
 *  NBR_THR = Assert ncb__busy when the number of remaining coherent bus NBR credits equals is less
 *  than or equal to this value.
 *
 * - Access using the CVMX_POW_INT_CTL CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 58;      /**< Reserved */
        uint64_t pfr_dis                 : 1;       /**< High-perf pre-fetch reset mode disable */
        uint64_t nbr_thr                 : 5;       /**< NBR busy threshold */
#else
        uint64_t nbr_thr                 : 5;
        uint64_t pfr_dis                 : 1;
        uint64_t reserved                : 58;
#endif
    } s;
} cvmx_pow_int_ctl_t;


/**
 * POW_IQ_CNT(0..7) = POW Input Queue Count Register (1 per QOS level)
 *  Contains a read-only count of the number of work queue entries for each QOS level.
 *
 * - Access using the CVMX_POW_IQ_CNTX(0..7) CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 32;      /**< Reserved */
        uint64_t iq_cnt                  : 32;      /**< Input queue count for QOS level (0..7) */
#else
        uint64_t iq_cnt                  : 32;
        uint64_t reserved                : 32;
#endif
    } s;
} cvmx_pow_iq_cntx_t;


/**
 * POW_IQ_COM_CNT = POW Input Queue Combined Count Register
 *  Contains a read-only count of the total number of work queue entries in all QOS levels.
 *
 * - Access using the CVMX_POW_IQ_COM_CNT CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 32;      /**< Reserved */
        uint64_t iq_cnt                  : 32;      /**< Input queue combined count */
#else
        uint64_t iq_cnt                  : 32;
        uint64_t reserved                : 32;
#endif
    } s;
} cvmx_pow_iq_com_cnt_t;


/**
 * POW_NW_TIM = POW New Work Timer Period Register
 *  Sets the minimum period for a new work request timeout.  Period is specified in n-1 notation
 *  where the increment value is 1024 clock cycles.  Thus, a value of 0x0 in this register translates
 *  to 1024 cycles, 0x1 translates to 2048 cycles, 0x2 translates to 3072 cycles, etc...  Note: the
 *  maximum period for a new work request timeout is 2 times the minimum period.  Note: the new work
 *  request timeout counter is reset when this register is written.
 *
 * - Access using the CVMX_POW_NW_TIM CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 54;      /**< Reserved */
        uint64_t nw_tim                  : 10;      /**< New work timer period */
#else
        uint64_t nw_tim                  : 10;
        uint64_t reserved                : 54;
#endif
    } s;
} cvmx_pow_nw_tim_t;


/**
 * POW_PP_GRP_MSK(0..15) = POW PP Group Mask Register (1 per PP)
 *  Selects which group(s) a PP belongs to.  A '1' in any bit position sets the PP's membership in
 *  the corresponding group.  A value of 0x0 will prevent the PP from receiving new work.  Note:
 *  disabled or non-existent PP's should have this field set to 0xffff (the reset value) in order to
 *  maximize POW performance.
 *
 * - Access using the CVMX_POW_PP_GRP_MSKX(0..15) CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 48;      /**< Reserved */
        uint64_t grp_msk                 : 16;      /**< PP(0..15) group mask */
#else
        uint64_t grp_msk                 : 16;
        uint64_t reserved                : 48;
#endif
    } s;
} cvmx_pow_pp_grp_mskx_t;


/**
 * POW_QOS_RND(0..7) = POW QOS Issue Round Register (4 rounds per register x 8 registers = 32 rounds)
 *  Contains the round definitions for issuing new work.  Each round consists of 8 bits with each bit
 *  corresponding to a QOS level.  There are 4 rounds contained in each register for a total of 32
 *  rounds.  The issue logic traverses through the rounds sequentially (lowest round to highest round)
 *  in an attempt to find new work for each PP.  Within each round, the issue logic traverses through
 *  the QOS levels sequentially (highest QOS to lowest QOS) skipping over each QOS level with a clear
 *  bit in the round mask.  Note: setting a QOS level to all zeroes in all issue round registers will
 *  prevent work from being issued from that QOS level.
 *
 * - Access using the CVMX_POW_QOS_RNDX(0..7) CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 32;      /**< Reserved */
        uint64_t rnd_p3                  : 8;       /**< Round mask for round (0..7)x4+3 */
        uint64_t rnd_p2                  : 8;       /**< Round mask for round (0..7)x4+2 */
        uint64_t rnd_p1                  : 8;       /**< Round mask for round (0..7)x4+1 */
        uint64_t rnd                     : 8;       /**< Round mask for round (0..7)x4 */
#else
        uint64_t rnd                     : 8;
        uint64_t rnd_p1                  : 8;
        uint64_t rnd_p2                  : 8;
        uint64_t rnd_p3                  : 8;
        uint64_t reserved                : 32;
#endif
    } s;
} cvmx_pow_qos_rndx_t;


/**
 * POW_QOS_THR(0..7) = POW QOS Threshold Register (1 per QOS level)
 *  Contains the thresholds for allocating POW internal storage buffers.  If the number of remaining
 *  free buffers drops below the minimum threshold (MIN_THR) or the number of allocated buffers for
 *  this QOS level rises above the maximum threshold (MAX_THR), future incoming work queue entries
 *  will be buffered externally rather than internally.  This register also contains a read-only count
 *  of the current number of free buffers (FREE_CNT), the number of internal buffers currently
 *  allocated to this QOS level (BUF_CNT), and the total number of de-sheduled buffers (DES_CNT).
 *
 * - Access using the CVMX_POW_QOS_THRX(0..7) CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved2               : 4;       /**< Reserved */
        uint64_t des_cnt                 : 12;      /**< # of total de-scheduled buffers */
        uint64_t buf_cnt                 : 12;      /**< # of internal buffers allocated to QOS level (0..7) */
        uint64_t free_cnt                : 12;      /**< # of total free buffers */
        uint64_t reserved1               : 1;       /**< Reserved */
        uint64_t max_thr                 : 11;      /**< Max threshold for QOS level (0..7) */
        uint64_t reserved0               : 1;       /**< Reserved */
        uint64_t min_thr                 : 11;      /**< Min threshold for QOS level (0..7) */
#else
        uint64_t min_thr                 : 11;
        uint64_t reserved0               : 1;
        uint64_t max_thr                 : 11;
        uint64_t reserved1               : 1;
        uint64_t free_cnt                : 12;
        uint64_t buf_cnt                 : 12;
        uint64_t des_cnt                 : 12;
        uint64_t reserved2               : 4;
#endif
    } s;
} cvmx_pow_qos_thrx_t;


/**
 * POW_TS_PC = POW Tag Switch Performance Counter
 *  Counts the number of tag switch requests.  Write to clear.
 *
 * - Access using the CVMX_POW_TS_PC CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 32;      /**< Reserved */
        uint64_t ts_pc                   : 32;      /**< Tag switch performance counter */
#else
        uint64_t ts_pc                   : 32;
        uint64_t reserved                : 32;
#endif
    } s;
} cvmx_pow_ts_pc_t;


/**
 * POW_WA_COM_PC = POW Work Add Combined Performance Counter
 *  Counts the number of add new work requests for all QOS levels.  Write to clear.
 *
 * - Access using the CVMX_POW_WA_COM_PC CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 32;      /**< Reserved */
        uint64_t wa_pc                   : 32;      /**< Work add combined performance counter */
#else
        uint64_t wa_pc                   : 32;
        uint64_t reserved                : 32;
#endif
    } s;
} cvmx_pow_wa_com_pc_t;


/**
 * POW_WA_PC(0..7) = POW Work Add Performance Counter (1 per QOS level)
 *  Counts the number of add new work requests for each QOS level.  Write to clear.
 *
 * - Access using the CVMX_POW_WA_PCX(0..7) CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 32;      /**< Reserved */
        uint64_t wa_pc                   : 32;      /**< Work add performance counter for QOS level (0..7) */
#else
        uint64_t wa_pc                   : 32;
        uint64_t reserved                : 32;
#endif
    } s;
} cvmx_pow_wa_pcx_t;


/**
 * POW_WQ_INT_CNT(0..15) = POW Work Queue Interrupt Count Register (1 per group)
 *  Contains a read-only copy of the counts used to trigger work queue interrupts.  For more
 *  information regarding this register, see the interrupt section.
 *
 * - Access using the CVMX_POW_WQ_INT_CNTX(0..15) CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 36;      /**< Reserved */
        uint64_t tc_cnt                  : 4;       /**< Time counter current value for group (0..15) */
        uint64_t ds_cnt                  : 12;      /**< De-schedule executable count for group (0..15) */
        uint64_t iq_cnt                  : 12;      /**< Input queue executable count for group (0..15) */
#else
        uint64_t iq_cnt                  : 12;
        uint64_t ds_cnt                  : 12;
        uint64_t tc_cnt                  : 4;
        uint64_t reserved                : 36;
#endif
    } s;
} cvmx_pow_wq_int_cntx_t;


/**
 * POW_WQ_INT_PC = POW Work Queue Interrupt Periodic Counter Register
 *  Contains the threshold value for the work queue interrupt periodic counter and also a read-only
 *  copy of the periodic counter.  For more information regarding this register, see the interrupt
 *  section.
 *
 * - Access using the CVMX_POW_WQ_INT_PC CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved2               : 4;       /**< Reserved */
        uint64_t pc                      : 28;      /**< Work queue interrupt periodic counter */
        uint64_t reserved1               : 4;       /**< Reserved */
        uint64_t pc_thr                  : 20;      /**< Work queue interrupt periodic counter threshold */
        uint64_t reserved0               : 8;       /**< Reserved */
#else
        uint64_t reserved0               : 8;
        uint64_t pc_thr                  : 20;
        uint64_t reserved1               : 4;
        uint64_t pc                      : 28;
        uint64_t reserved2               : 4;
#endif
    } s;
} cvmx_pow_wq_int_pc_t;


/**
 * POW_WQ_INT = POW Work Queue Interrupt Register
 *  Contains the bits (1 per group) that set work queue interrupts and are used to clear these
 *  interrupts.  Also contains the input queue interrupt temporary disable bits (1 per group).  For
 *  more information regarding this register, see the interrupt section.
 *
 * - Access using the CVMX_POW_WQ_INT CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 32;      /**< Reserved */
        uint64_t iq_dis                  : 16;      /**< Input queue interrupt temporary disable mask */
        uint64_t wq_int                  : 16;      /**< Work queue interrupt bits */
#else
        uint64_t wq_int                  : 16;
        uint64_t iq_dis                  : 16;
        uint64_t reserved                : 32;
#endif
    } s;
} cvmx_pow_wq_int_t;


/**
 * POW_WQ_INT_THR(0..15) = POW Work Queue Interrupt Threshold Register (1 per group)
 *  Contains the thresholds for enabling and setting work queue interrupts.  For more information
 *  regarding this register, see the interrupt section.
 *
 * - Access using the CVMX_POW_WQ_INT_THRX(0..15) CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved2               : 35;      /**< Reserved */
        uint64_t tc_en                   : 1;       /**< Time counter interrupt enable for group (0..15) */
        uint64_t tc_thr                  : 4;       /**< Time counter interrupt threshold for group (0..15) */
        uint64_t reserved1               : 1;       /**< Reserved */
        uint64_t ds_thr                  : 11;      /**< De-schedule count threshold for group (0..15) */
        uint64_t reserved0               : 1;       /**< Reserved */
        uint64_t iq_thr                  : 11;      /**< Input queue count threshold for group (0..15) */
#else
        uint64_t iq_thr                  : 11;
        uint64_t reserved0               : 1;
        uint64_t ds_thr                  : 11;
        uint64_t reserved1               : 1;
        uint64_t tc_thr                  : 4;
        uint64_t tc_en                   : 1;
        uint64_t reserved2               : 35;
#endif
    } s;
} cvmx_pow_wq_int_thrx_t;


/**
 * POW_WS_PC(0..15) = POW Work Schedule Performance Counter (1 per group)
 *  Counts the number of work schedules for each group.  Write to clear.
 *
 * - Access using the CVMX_POW_WS_PCX(0..15) CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 32;      /**< Reserved */
        uint64_t ws_pc                   : 32;      /**< Work schedule performance counter for group (0..15) */
#else
        uint64_t ws_pc                   : 32;
        uint64_t reserved                : 32;
#endif
    } s;
} cvmx_pow_ws_pcx_t;


/**
 * RNM_BIST_STATUS = RNM's BIST Status Register
 *  The RNM's Memory Bist Status register.
 *
 * - Access using the CVMX_RNM_BIST_STATUS CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 62;      /**< Reserved */
        uint64_t rrc                     : 1;       /**< Status of RRC block bist. */
        uint64_t mem                     : 1;       /**< Status of MEM block bist. */
#else
        uint64_t mem                     : 1;
        uint64_t rrc                     : 1;
        uint64_t reserved                : 62;
#endif
    } s;
} cvmx_rnm_bist_status_t;


/**
 * RNM_CTL_STATUS = RNM's Control/Status Register
 *  The RNM's interrupt enable register.
 *
 * - Access using the CVMX_RNM_CTL_STATUS CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 60;      /**< Reserved */
        uint64_t rng_rst                 : 1;       /**< Reset RNG as core reset. */
        uint64_t rnm_rst                 : 1;       /**< Reset the RNM as core reset except for register
                                                         logic. */
        uint64_t rng_en                  : 1;       /**< Enable the output of the RNG. */
        uint64_t ent_en                  : 1;       /**< Entropy enable for random number generator. */
#else
        uint64_t ent_en                  : 1;
        uint64_t rng_en                  : 1;
        uint64_t rnm_rst                 : 1;
        uint64_t rng_rst                 : 1;
        uint64_t reserved                : 60;
#endif
    } s;
} cvmx_rnm_ctl_status_t;


/**
 * SMI_CLK = Clock Control Register
 *
 * - Access using the CVMX_SMI_CLK CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 51;      /**< Reserved */
        uint64_t preamble                : 1;       /**< Send PREAMBLE on SMI transacton */
        uint64_t sample                  : 4;       /**< When to sample read data
                                                         (number of eclks after the rising edge of mdc) */
        uint64_t phase                   : 8;       /**< MDC Clock Phase
                                                         (number of eclks that make up an mdc phase) */
#else
        uint64_t phase                   : 8;
        uint64_t sample                  : 4;
        uint64_t preamble                : 1;
        uint64_t reserved                : 51;
#endif
    } s;
} cvmx_smi_clk_t;


/**
 * SMI_CMD = Force a Read/Write command to the PHY
 * Writes to this register will create SMI xactions.  Software will poll on (depending on the xaction type).
 *
 * - Access using the CVMX_SMI_CMD CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 47;      /**< Reserved */
        uint64_t phy_op                  : 1;       /**< PHY Opcode
                                                         0=write
                                                         1=read */
        uint64_t reserved1               : 3;       /**< Reserved */
        uint64_t phy_adr                 : 5;       /**< PHY Address */
        uint64_t reserved0               : 3;       /**< Reserved */
        uint64_t reg_adr                 : 5;       /**< PHY Register Offset */
#else
        uint64_t reg_adr                 : 5;
        uint64_t reserved0               : 3;
        uint64_t phy_adr                 : 5;
        uint64_t reserved1               : 3;
        uint64_t phy_op                  : 1;
        uint64_t reserved                : 47;
#endif
    } s;
} cvmx_smi_cmd_t;


/**
 * SMI_EN = Enable the SMI interface
 *
 * - Access using the CVMX_SMI_EN CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 63;      /**< Reserved */
        uint64_t en                      : 1;       /**< Interface enable
                                                         0=SMI Interface is down / no transactions, no MDC
                                                         1=SMI Interface is up */
#else
        uint64_t en                      : 1;
        uint64_t reserved                : 63;
#endif
    } s;
} cvmx_smi_en_t;


/**
 * SMI_RD_DAT = SMI Read Data
 * VAL will assert when the read xaction completes.  A read to this register
 * will clear VAL.  PENDING indicates that an SMI RD transaction is in flight.
 *
 * - Access using the CVMX_SMI_RD_DAT CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 46;      /**< Reserved */
        uint64_t pending                 : 1;       /**< Read Xaction Pending */
        uint64_t val                     : 1;       /**< Read Data Valid */
        uint64_t dat                     : 16;      /**< Read Data */
#else
        uint64_t dat                     : 16;
        uint64_t val                     : 1;
        uint64_t pending                 : 1;
        uint64_t reserved                : 46;
#endif
    } s;
} cvmx_smi_rd_dat_t;


/**
 * SMI_WR_DAT = SMI Write Data
 * VAL will assert when the write xaction completes.  A read to this register
 * will clear VAL.  PENDING indicates that an SMI WR transaction is in flight.
 *
 * - Access using the CVMX_SMI_WR_DAT CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 46;      /**< Reserved */
        uint64_t pending                 : 1;       /**< Write Xaction Pending */
        uint64_t val                     : 1;       /**< Write Data Valid */
        uint64_t dat                     : 16;      /**< Write Data */
#else
        uint64_t dat                     : 16;
        uint64_t val                     : 1;
        uint64_t pending                 : 1;
        uint64_t reserved                : 46;
#endif
    } s;
} cvmx_smi_wr_dat_t;


/**
 * - Access using the CVMX_SPX0_PLL_BW_CTL CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 59;      /**< Reserved */
        uint64_t bw_ctl                  : 5;       /**< Core PLL bandwidth control */
#else
        uint64_t bw_ctl                  : 5;
        uint64_t reserved                : 59;
#endif
    } s;
} cvmx_spx0_pll_bw_ctl_t;


/**
 * - Access using the CVMX_SPX0_PLL_SETTING CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 47;      /**< Reserved */
        uint64_t setting                 : 17;      /**< Core PLL setting */
#else
        uint64_t setting                 : 17;
        uint64_t reserved                : 47;
#endif
    } s;
} cvmx_spx0_pll_setting_t;


/**
 * The back pressure watcher counts the number of cycles in which the spi
 *  receiver receives data once the TPA for a particular port has been
 *  deasserted.  The desired port to watch can be selected with the
 *  SPX_TPA_SEL[PRTSEL] field.
 *  This register can be cleared by simply writting all 1's to it.
 *
 * - Access using the CVMX_SPXX_BCKPRS_CNT(0..) CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 32;      /**< Reserved */
        uint64_t cnt                     : 32;      /**< Number of cycles when back-pressure is received */
#else
        uint64_t cnt                     : 32;
        uint64_t reserved                : 32;
#endif
    } s;
} cvmx_spxx_bckprs_cnt_t;


/**
 * Notes:
 *         Bist results encoding
 *            0: good (or bist in progress/never run)
 *            1: bad
 *
 * - Access using the CVMX_SPXX_BIST_STAT(0..) CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 61;      /**< Reserved */
        uint64_t stat2                   : 1;       /**< Bist Results/No Repair (Tx calendar table)
                                                         (spx.stx.cal.calendar) */
        uint64_t stat1                   : 1;       /**< Bist Results/No Repair (Rx calendar table)
                                                         (spx.srx.spi4.cal.calendar) */
        uint64_t stat0                   : 1;       /**< Bist Results/No Repair (Spi4 receive datapath FIFO)
                                                         (spx.srx.spi4.dat.dpr) */
#else
        uint64_t stat0                   : 1;
        uint64_t stat1                   : 1;
        uint64_t stat2                   : 1;
        uint64_t reserved                : 61;
#endif
    } s;
} cvmx_spxx_bist_stat_t;


/**
 * SRXDLCK
 *    When asserted, this bit locks the Spi4 receive DLLs.  This bit also
 *    acts as the Spi4 receiver reset and must be asserted before the
 *    training sequences are used to initialize the interface.  This bit
 *    only applies to the receiver interface.
 *  RCVTRN
 *    Once the SRXDLCK bit is asserted and the DLLs have locked and the
 *    system has been programmed, software should assert this bit in order
 *    to start looking for valid training sequence and synchronize the
 *    interface. This bit only applies to the receiver interface.
 *  DRPTRN
 *    The Spi4 receiver can either convert training packets into NOPs or
 *    drop them entirely.  Dropping ticks allows the interface to deskew
 *    periodically if the dclk and eclk ratios are close. This bit only
 *    applies to the receiver interface.
 *  SNDTRN
 *    When software sets this bit, it indicates that the Spi4 transmit
 *    interface has been setup and has seen the calendare status.  Once the
 *    transmitter begins sending training data, the receiving device is free
 *    to start traversing the calendar table to synch the link.
 *  STATRCV
 *    This bit determines which status clock edge to sample the status
 *    channel in Spi4 mode.  Since the status channel is in the opposite
 *    direction to the datapath, the STATRCV actually effects the
 *    transmitter/TX block.
 *  STATDRV
 *    This bit determines which status clock edge to drive the status
 *    channel in Spi4 mode.  Since the status channel is in the opposite
 *    direction to the datapath, the STATDRV actually effects the
 *    receiver/RX block.
 *  RUNBIST
 *    RUNBIST will beginning BIST/BISR in all the SPX compilied memories.
 *    These memories are...
 *  spx.srx.spi4.dat.dpr        - FIFO Spi4 to IMX
 *  spx.stx.cal.calendar        - Spi4 TX calendar table
 *  spx.srx.spi4.cal.calendar   - Spi4 RX calendar table
 *    RUNBIST must never be asserted when the interface is enabled.
 *    Furthmore, setting RUNBIST at any other time is destructive and can
 *    cause data and configuration corruption.  The entire interface must be
 *    reconfigured when this bit is set.
 *  CLKDLY
 *    Static clock positioning mostly intended for use in quarter clocking
 *    schemes.  The delay window is not large enough for slow clock freq,
 *    therefore clock and data must be statically positioned with CSRs.  By
 *    changing the clock position relative to the data bits, we give the
 *    system a wider window.
 *  SEETRN
 *    In systems in which no training data is sent to N2 or N2 cannot
 *    correctly sample the training data, software may pulse this bit by
 *    writing a '1' followed by a '0' in order to correctly set the
 *    receivers state.  The receive data bus should be idle at this time
 *    (only NOPs on the bus).  If N2 cannot see at least on training
 *    sequence, the data bus will not send any data to the core.  The
 *    interface will hang.
 *
 * - Access using the CVMX_SPXX_CLK_CTL(0..) CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 47;      /**< Reserved */
        uint64_t seetrn                  : 1;       /**< Force the Spi4 receive into seeing a traing
                                                         sequence */
        uint64_t spare                   : 4;       /**< Spare */
        uint64_t clkdly                  : 5;       /**< Set the spx__clkdly lines to this value to
                                                         control the delay on the incoming dclk
                                                         (spx__clkdly) */
        uint64_t runbist                 : 1;       /**< Write this bit to begin BIST testing in SPX */
        uint64_t statdrv                 : 1;       /**< Spi4 status channel drive mode
                                                         0: Drive STAT on posedge of SCLK
                                                         1: Drive STAT on negedge of SCLK */
        uint64_t statrcv                 : 1;       /**< Spi4 status channel sample mode
                                                         0: Sample STAT on posedge of SCLK
                                                         1: Sample STAT on negedge of SCLK */
        uint64_t sndtrn                  : 1;       /**< Start sending training patterns on the Spi4
                                                         Tx Interface */
        uint64_t drptrn                  : 1;       /**< Drop blocks of training packets */
        uint64_t rcvtrn                  : 1;       /**< Write this bit once the DLL is locked to sync
                                                         on the training seqeunce */
        uint64_t srxdlck                 : 1;       /**< Write this bit to lock the Spi4 receive DLL */
#else
        uint64_t srxdlck                 : 1;
        uint64_t rcvtrn                  : 1;
        uint64_t drptrn                  : 1;
        uint64_t sndtrn                  : 1;
        uint64_t statrcv                 : 1;
        uint64_t statdrv                 : 1;
        uint64_t runbist                 : 1;
        uint64_t clkdly                  : 5;
        uint64_t spare                   : 4;
        uint64_t seetrn                  : 1;
        uint64_t reserved                : 47;
#endif
    } s;
} cvmx_spxx_clk_ctl_t;


/**
 * - Access using the CVMX_SPXX_CLK_STAT(0..) CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 53;      /**< Reserved */
        uint64_t stxcal                  : 1;       /**< The transistion from Sync to Calendar on status
                                                         channel */
        uint64_t spare1                  : 1;       /**< Spare bit */
        uint64_t srxtrn                  : 1;       /**< Saw a good data training sequence */
        uint64_t s4clk1                  : 1;       /**< Saw '1' on Spi4 transmit status forward clk input */
        uint64_t s4clk0                  : 1;       /**< Saw '0' on Spi4 transmit status forward clk input */
        uint64_t d4clk1                  : 1;       /**< Saw '1' on Spi4 receive data forward clk input */
        uint64_t d4clk0                  : 1;       /**< Saw '0' on Spi4 receive data forward clk input */
        uint64_t spare4                  : 4;       /**< Spare */
#else
        uint64_t spare4                  : 4;
        uint64_t d4clk0                  : 1;
        uint64_t d4clk1                  : 1;
        uint64_t s4clk0                  : 1;
        uint64_t s4clk1                  : 1;
        uint64_t srxtrn                  : 1;
        uint64_t spare1                  : 1;
        uint64_t stxcal                  : 1;
        uint64_t reserved                : 53;
#endif
    } s;
} cvmx_spxx_clk_stat_t;


/**
 * These bits are meant as a backdoor to control Spi4 per-bit deskew.  See
 *  that Spec for more details.
 *    The basic idea is to allow software to disable the auto-deskew widgets
 *    and make any adjustments by hand.  These steps should only be taken
 *    once the RCVTRN bit is set and before any real traffic is sent on the
 *    Spi4 bus.  Great care should be taken when messing with these bits as
 *    improper programmings can cause catestrophic or intermitent problems.
 *    The params we have to test are the MUX tap selects and the XCV delay
 *    tap selects.
 *    For the muxes, we can set each tap to a random value and then read
 *    back the taps.  To write...
 *     SPXX_DBG_DESKEW_CTL[BITSEL]   = bit to set
 *     SPXX_DBG_DESKEW_CTL[OFFSET]   = mux tap value (2-bits)
 *     SPXX_DBG_DESKEW_CTL[MUX]      = go bit
 *    Notice this can all happen with a single CSR write.  To read, first
 *    set the bit you to look at with the SPXX_DBG_DESKEW_CTL[BITSEL], then
 *    simply read SPXX_DBG_DESKEW_STATE[MUXSEL]...
 *     SPXX_DBG_DESKEW_CTL[BITSEL]   = bit to set
 *     SPXX_DBG_DESKEW_STATE[MUXSEL] = 2-bit value
 *    For the xcv delay taps, the CSR controls increment and decrement the
 *    5-bit count value in the XCV.  This is a saturating counter, so it
 *    will not wrap when decrementing below zero or incrementing above 31.
 *    To write...
 *     SPXX_DBG_DESKEW_CTL[BITSEL]   = bit to set
 *     SPXX_DBG_DESKEW_CTL[OFFSET]   = tap value increment or decrement amount (5-bits)
 *     SPXX_DBG_DESKEW_CTL[INC|DEC]  = go bit
 *    These values are copied in SPX, so that they can be read back by
 *    software by a similar mechanism to the MUX selects...
 *     SPXX_DBG_DESKEW_CTL[BITSEL]   = bit to set
 *     SPXX_DBG_DESKEW_STATE[OFFSET] = 5-bit value
 *    In addition, there is a reset bit that sets all the state back to the
 *    default/starting value of 0x10.
 *     SPXX_DBG_DESKEW_CTL[CLRDLY]   = bit to set
 *  SINGLE STEP TRAINING MODE (WILMA)
 *      Debug feature that will enable the user to single-step the debug
 *      logic to watch initial movement and trends by putting the training
 *      machine in single step mode.
 *  SPX*_DBG_DESKEW_CTL[SSTEP]
 *         This will put the training control logic into single step mode.  We
 *         will not deskew in this scenario and will require the TX device to
 *         send continuous training sequences.
 *         It is required that SRX*_COM_CTL[INF_EN] be clear so that suspect
 *         data does not flow into the chip.
 *         Deasserting SPX*_DBG_DESKEW_CTL[SSTEP] will attempt to deskew as per
 *         the normal definition.  Single step mode is for debug only.  Special
 *         care must be given to correctly deskew the interface if normal
 *         operation is desired.
 *  SPX*_DBG_DESKEW_CTL[SSTEP_GO]
 *         Each write of '1' to SSTEP_GO will go through a single training
 *         iteration and will perform...
 *         - DLL update, if SPX*_DBG_DESKEW_CTL[DLLDIS] is clear
 *         - coarse update, if SPX*_TRN4_CTL[MUX_EN] is set
 *         - single fine update, if SPX*_TRN4_CTL[MACRO_EN] is set and an edge
 *        was detected after walked +/- SPX*_TRN4_CTL[MAXDIST] taps.
 *         Writes to this register have no effect if the interface is not in
 *         SSTEP mode (SPX*_DBG_DESKEW_CTL[SSTEP]).
 *         The WILMA mode will be cleared at the final state transition, so
 *         that software can set SPX*_DBG_DESKEW_CTL[SSTEP] and
 *         SPX*_DBG_DESKEW_CTL[SSTEP_GO] before setting SPX*_CLK_CTL[RCVTRN]
 *         and the machine will go through the initial iteration and stop -
 *         waiting for another SPX*_DBG_DESKEW_CTL[SSTEP_GO] or an interface
 *         enable.
 *  SPX*_DBG_DESKEW_CTL[FALL8]
 *    Determines how many pattern matches are required during training
 *    operations to fallout of training and begin processing the normal data
 *    stream.  The default value is 10 pattern matches.  The pattern that is
 *    used is dependent on the SPX*_DBG_DESKEW_CTL[FALLNOP] CSR which
 *    determines between non-training packets (the default) and NOPs.
 *  SPX*_DBG_DESKEW_CTL[FALLNOP]
 *    Determines the pattern that is required during training operations to
 *    fallout of training and begin processing the normal data stream.  The
 *    default value is to match against non-training data.  Setting this
 *    bit, changes the behavior to watch for NOPs packet instead.
 *    This bit should not be changed dynamically while the link is
 *    operational.
 *
 * - Access using the CVMX_SPXX_DBG_DESKEW_CTL(0..) CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 34;      /**< Reserved */
        uint64_t fallnop                 : 1;       /**< Training fallout on NOP matches instead of
                                                         non-training matches.
                                                         (spx_csr__spi4_fallout_nop) */
        uint64_t fall8                   : 1;       /**< Training fallout at 8 pattern matches instead of 10
                                                         (spx_csr__spi4_fallout_8_match) */
        uint64_t reserved1               : 2;       /**< Reserved */
        uint64_t sstep_go                : 1;       /**< Single Step Training Sequence
                                                         (spx_csr__spi4_single_step_go) */
        uint64_t sstep                   : 1;       /**< Single Step Training Mode
                                                         (spx_csr__spi4_single_step_mode) */
        uint64_t reserved0               : 2;       /**< Reserved */
        uint64_t clrdly                  : 1;       /**< Resets the offset control in the XCV
                                                         (spx_csr__spi4_dll_clr_dly) */
        uint64_t dec                     : 1;       /**< Decrement the offset by OFFSET for the Spi4
                                                         bit selected by BITSEL
                                                         (spx_csr__spi4_dbg_trn_dec) */
        uint64_t inc                     : 1;       /**< Increment the offset by OFFSET for the Spi4
                                                         bit selected by BITSEL
                                                         (spx_csr__spi4_dbg_trn_inc) */
        uint64_t mux                     : 1;       /**< Set the mux select tap for the Spi4 bit
                                                         selected by BITSEL
                                                         (spx_csr__spi4_dbg_trn_mux) */
        uint64_t offset                  : 5;       /**< Adds or subtracts (Based on INC or DEC) the
                                                         offset to Spi4 bit BITSEL.
                                                         (spx_csr__spi4_dbg_trn_offset) */
        uint64_t bitsel                  : 5;       /**< Select the Spi4 CTL or DAT bit
                                                         (spx_csr__spi4_dbg_trn_bitsel) */
        uint64_t offdly                  : 6;       /**< Set the spx__offset lines to this value when
                                                         not in macro sequence
                                                         (spx_csr__spi4_mac_offdly) */
        uint64_t dllfrc                  : 1;       /**< Force the Spi4 RX DLL to update
                                                         (spx_csr__spi4_dll_force) */
        uint64_t dlldis                  : 1;       /**< Disable sending the update signal to the Spi4
                                                         RX DLL when set
                                                         (spx_csr__spi4_dll_trn_en) */
#else
        uint64_t dlldis                  : 1;
        uint64_t dllfrc                  : 1;
        uint64_t offdly                  : 6;
        uint64_t bitsel                  : 5;
        uint64_t offset                  : 5;
        uint64_t mux                     : 1;
        uint64_t inc                     : 1;
        uint64_t dec                     : 1;
        uint64_t clrdly                  : 1;
        uint64_t reserved0               : 2;
        uint64_t sstep                   : 1;
        uint64_t sstep_go                : 1;
        uint64_t reserved1               : 2;
        uint64_t fall8                   : 1;
        uint64_t fallnop                 : 1;
        uint64_t reserved                : 34;
#endif
    } s;
} cvmx_spxx_dbg_deskew_ctl_t;


/**
 * These bits are meant as a backdoor to control Spi4 per-bit deskew.  See
 *  that Spec for more details.
 *
 * - Access using the CVMX_SPXX_DBG_DESKEW_STATE(0..) CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 55;      /**< Reserved */
        uint64_t testres                 : 1;       /**< Training Test Mode Result
                                                         (srx_spi4__test_mode_result) */
        uint64_t unxterm                 : 1;       /**< Unexpected training terminiation
                                                         (srx_spi4__top_unxexp_trn_term) */
        uint64_t muxsel                  : 2;       /**< The mux select value of the bit selected by
                                                         SPX_DBG_DESKEW_CTL[BITSEL]
                                                         (srx_spi4__trn_mux_sel) */
        uint64_t offset                  : 5;       /**< The counter value of the bit selected by
                                                         SPX_DBG_DESKEW_CTL[BITSEL]
                                                         (srx_spi4__xcv_tap_select) */
#else
        uint64_t offset                  : 5;
        uint64_t muxsel                  : 2;
        uint64_t unxterm                 : 1;
        uint64_t testres                 : 1;
        uint64_t reserved                : 55;
#endif
    } s;
} cvmx_spxx_dbg_deskew_state_t;


/**
 * These bits all come from Duke - he will provide documentation and
 *  explanation.  I'll just butcher it.
 *
 * - Access using the CVMX_SPXX_DRV_CTL(0..) CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 48;      /**< Reserved */
        uint64_t stx4ncmp                : 4;       /**< Duke (spx__spi4_tx_nctl_comp) */
        uint64_t stx4pcmp                : 4;       /**< Duke (spx__spi4_tx_pctl_comp) */
        uint64_t srx4cmp                 : 8;       /**< Duke (spx__spi4_rx_rctl_comp) */
#else
        uint64_t srx4cmp                 : 8;
        uint64_t stx4pcmp                : 4;
        uint64_t stx4ncmp                : 4;
        uint64_t reserved                : 48;
#endif
    } s;
} cvmx_spxx_drv_ctl_t;


/**
 * SPX_ERR_CTL - Spi error control register
 *  DIPPAY, DIPCLS, PRTNXA
 *    These bits control whether or not the packet's ERR bit is set when any of
 *    the these error is detected.  If the cooresponding error's bit is clear,
 *    the packet ERR will be set.  If the error bit is set, the SPX will simply
 *    pass through the ERR bit without modifying it in anyway - the error bit
 *    may or may not have been set by the transmitter device.
 *
 * - Access using the CVMX_SPXX_ERR_CTL(0..) CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 55;      /**< Reserved */
        uint64_t prtnxa                  : 1;       /**< Spi4 - set the ERR bit on packets in which the
                                                         port is out-of-range */
        uint64_t dipcls                  : 1;       /**< Spi4 DIPERR on closing control words cause the
                                                         ERR bit to be set */
        uint64_t dippay                  : 1;       /**< Spi4 DIPERR on payload control words cause the
                                                         ERR bit to be set */
        uint64_t spare                   : 2;       /**< Spare */
        uint64_t errcnt                  : 4;       /**< Number of Dip4 errors before bringing down the
                                                         interface */
#else
        uint64_t errcnt                  : 4;
        uint64_t spare                   : 2;
        uint64_t dippay                  : 1;
        uint64_t dipcls                  : 1;
        uint64_t prtnxa                  : 1;
        uint64_t reserved                : 55;
#endif
    } s;
} cvmx_spxx_err_ctl_t;


/**
 * SPX_INT_DAT - Interrupt Data Register
 *  Note: The SPX_INT_DAT[MUL] bit is set when multiple errors have been
 *  detected that would set any of the data fields: PRT, RSVOP, and CALBNK.
 *  The following errors will cause MUL to assert for PRT conflicts.
 *  - ABNORM
 *  - APERR
 *  - DPERR
 *  The following errors will cause MUL to assert for RSVOP conflicts.
 *  - RSVERR
 *  The following errors will cause MUL to assert for CALBNK conflicts.
 *  - CALERR
 *  The following errors will cause MUL to assert if multiple interrupts are
 *  asserted.
 *  - TPAOVR
 *  The MUL bit will be cleared once all outstanding errors have been
 *  cleared by software (not just MUL errors - all errors).
 *
 * - Access using the CVMX_SPXX_INT_DAT(0..) CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 32;      /**< Reserved */
        uint64_t mul                     : 1;       /**< Multiple errors have occured */
        uint64_t reserved2               : 17;      /**< Reserved */
        uint64_t calbnk                  : 2;       /**< Spi4 Calendar table parity error bank */
        uint64_t rsvop                   : 4;       /**< Spi4 reserved control word */
        uint64_t prt                     : 8;       /**< Port associated with error */
#else
        uint64_t prt                     : 8;
        uint64_t rsvop                   : 4;
        uint64_t calbnk                  : 2;
        uint64_t reserved2               : 17;
        uint64_t mul                     : 1;
        uint64_t reserved                : 32;
#endif
    } s;
} cvmx_spxx_int_dat_t;


/**
 * SPX_INT_MSK - Interrupt Mask Register
 *
 * - Access using the CVMX_SPXX_INT_MSK(0..) CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 52;      /**< Reserved */
        uint64_t calerr                  : 1;       /**< Spi4 Calendar table parity error */
        uint64_t syncerr                 : 1;       /**< Consecutive Spi4 DIP4 errors have exceeded
                                                         SPX_ERR_CTL[ERRCNT] */
        uint64_t diperr                  : 1;       /**< Spi4 DIP4 error */
        uint64_t tpaovr                  : 1;       /**< Selected port has hit TPA overflow */
        uint64_t rsverr                  : 1;       /**< Spi4 reserved control word detected */
        uint64_t drwnng                  : 1;       /**< Spi4 receive FIFO drowning/overflow */
        uint64_t clserr                  : 1;       /**< Spi4 packet closed on non-16B alignment without EOP */
        uint64_t spiovr                  : 1;       /**< Spi async FIFO overflow (Spi3 or Spi4) */
        uint64_t spare                   : 2;       /**< Spare */
        uint64_t abnorm                  : 1;       /**< Abnormal packet termination (ERR bit) */
        uint64_t prtnxa                  : 1;       /**< Port out of range */
#else
        uint64_t prtnxa                  : 1;
        uint64_t abnorm                  : 1;
        uint64_t spare                   : 2;
        uint64_t spiovr                  : 1;
        uint64_t clserr                  : 1;
        uint64_t drwnng                  : 1;
        uint64_t rsverr                  : 1;
        uint64_t tpaovr                  : 1;
        uint64_t diperr                  : 1;
        uint64_t syncerr                 : 1;
        uint64_t calerr                  : 1;
        uint64_t reserved                : 52;
#endif
    } s;
} cvmx_spxx_int_msk_t;


/**
 * SPX_INT_REG - Interrupt Register
 *  PRTNXA
 *   This error indicates that the port on the Spi bus was not a valid port
 *   for the system.  Spi4 accesses occur on payload control bit-times. The
 *   SRX can be configured with the exact number of ports available (by
 *   SRX_COM_CTL[PRTS] register).  Any Spi access to anthing outside the range
 *   of 0 .. (SRX_COM_CTL[PRTS] - 1) is considered an error.  The offending
 *   port is logged in SPX_INT_DAT[PRT] if there are no pending interrupts in
 *   SPX_INT_REG that require SPX_INT_DAT[PRT].
 *   SRX will not drop the packet with the bogus port address.  Instead, the
 *   port will be mapped into the supported port range.  The remapped address
 *   in simply...
 *            Address = [ interfaceId, ADR[3:0] ]
 *   If the SPX detects that a PRTNXA error has occured, the packet will
 *   have its ERR bit set (or'ed in with the ERR bit from the transmitter)
 *   if the SPX_ERR_CTL[PRTNXA] bit is clear.
 *   In Spi4 mode, SPX will generate an interrupt for every 8B data burst
 *   associated with the invalid address.  The SPX_INT_DAT[MUL] bit will never
 *   be set.
 *  ABNORM
 *   This bit simply indicates that a given packet had abnormal terminiation.
 *   In Spi4 mode, this means that packet completed with an EOPS[1:0] code of
 *   2'b01.  This error can also be thought of as the application specific
 *   error (as mentioned in the Spi4 spec).  The offending port is logged in
 *   SPX_INT_DAT[PRT] if there are no pending interrupts in SPX_INT_REG that
 *   require SPX_INT_DAT[PRT].
 *   The ABNORM error is only raised when the ERR bit that comes from the
 *   Spi interface is set.  It will never assert if any internal condition
 *   causes the ERR bit to assert (e.g. PRTNXA or DPERR).
 *  SPIOVR
 *   This error indicates that the FIFOs that manage the async crossing from
 *   the Spi clocks to the core clock domains have overflowed.  This is a
 *   fatal error and can cause much data/control corruption since ticks will
 *   be dropped and reordered.  This is purely a function of clock ratios and
 *   correct system ratios should make this an impossible condition.
 *  CLSERR
 *   This is a Spi4 error that indicates that a given data transfer burst
 *   that did not terminate with an EOP, did not end with the 16B alignment
 *   as per the Spi4 spec.  The offending port cannot be logged since the
 *   block does not know the streamm terminated until the port switches.
 *   At that time, that packet has already been pushed down the pipe.
 *   The CLSERR bit does not actually check the Spi4 burst - just how data
 *   is accumulated for the downstream logic.  Bursts that are separted by
 *   idles or training will still be merged into accumulated transfers and
 *   will not fire the CLSERR condition.  The checker is really checking
 *   non-8B aligned, non-EOP data ticks that are sent downstream.  These
 *   ticks are what will really mess up the core.
 *   This is an expensive fix, so we'll probably let it ride.  We never
 *   claim to check Spi4 protocol anyway.
 *  DRWNNG
 *   This error indicates that the Spi4 FIFO that services the GMX has
 *   overflowed.  Like the SPIOVR error condition, correct system ratios
 *   should make this an impossible condition.
 *  RSVERR
 *   This Spi4 error indicates that the Spi4 receiver has seen a reserve
 *   control packet.  A reserve control packet is an invalid combiniation
 *   of bits on DAT[15:12].  Basically this is DAT[15] == 1'b0 and DAT[12]
 *   == 1'b1 (an SOP without a payload command).  The RSVERR indicates an
 *   error has occured and SPX_INT_DAT[RSVOP] holds the first reserved
 *   opcode and will be set if there are no pending interrupts in
 *   SPX_INT_REG that require SPX_INT_DAT[RSVOP].
 *  TPAOVR
 *   This bit indicates that the TPA Watcher has flagged an event.  See the
 *   TPA Watcher for a more detailed discussion.
 *  DIPERR
 *   This bit indicates that the Spi4 receiver has encountered a DIP4
 *   miscompare on the datapath.  A DIPERR can occur in an IDLE or a
 *   control word that frames a data burst.  If the DIPERR occurs on a
 *   framing word there are three cases.
 *   1) DIPERR occurs at the end of a data burst.  The previous packet is
 *      marked with the ERR bit to be processed later if
 *      SPX_ERR_CTL[DIPCLS] is clear.
 *   2) DIPERR occurs on a payload word.  The subsequent packet is marked
 *      with the ERR bit to be processed later if SPX_ERR_CTL[DIPPAY] is
 *      clear.
 *   3) DIPERR occurs on a control word that closes on packet and is a
 *      payload for another packet.  In this case, both packets will have
 *      their ERR bit marked depending on the respective values of
 *      SPX_ERR_CTL[DIPCLS] and SPX_ERR_CTL[DIPPAY] as discussed above.
 *  SYNCERR
 *   This bit indicates that the Spi4 receiver has encountered
 *   SPX_ERR_CTL[ERRCNT] consecutive Spi4 DIP4 errors and the interface
 *   should be synched.
 *  CALERR
 *   This bit indicates that the Spi4 calendar table encountered a parity
 *   error.  This error bit is associated with the calendar table on the RX
 *   interface - the interface that receives the Spi databus.  Parity errors
 *   can occur during normal operation when the calendar table is constantly
 *   being read for the port information, or during initialization time, when
 *   the user has access.  Since the calendar table is split into two banks,
 *   SPX_INT_DAT[CALBNK] indicates which banks have taken a parity error.
 *   CALBNK[1] indicates the error occured in the upper bank, while CALBNK[0]
 *   indicates that the error occured in the lower bank.  SPX_INT_DAT[CALBNK]
 *   will be set if there are no pending interrupts in SPX_INT_REG that
 *   require SPX_INT_DAT[CALBNK].
 *  SPF
 *   This bit indicates that a Spi fatal error has occurred.  A fatal error
 *   is defined as any error condition for which the cooresponding
 *   SPX_INT_SYNC bit is set.  Therefore, conservative systems can halt the
 *   interface on any error condition although this is not strictly
 *   necessary.  Some error are much more fatal in nature than others.
 *   PRTNXA, SPIOVR, CLSERR, DRWNNG, DIPERR, CALERR, and SYNCERR are examples
 *   of fatal error for different reasons - usually because multiple port
 *   streams could be effected.  ABNORM, RSVERR, and TPAOVR are conditions
 *   that are contained to a single packet which allows the interface to drop
 *   a single packet and remain up and stable.
 *
 * - Access using the CVMX_SPXX_INT_REG(0..) CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 32;      /**< Reserved */
        uint64_t spf                     : 1;       /**< Spi interface down */
        uint64_t reserved2               : 19;      /**< Reserved */
        uint64_t calerr                  : 1;       /**< Spi4 Calendar table parity error */
        uint64_t syncerr                 : 1;       /**< Consecutive Spi4 DIP4 errors have exceeded
                                                         SPX_ERR_CTL[ERRCNT] */
        uint64_t diperr                  : 1;       /**< Spi4 DIP4 error */
        uint64_t tpaovr                  : 1;       /**< Selected port has hit TPA overflow */
        uint64_t rsverr                  : 1;       /**< Spi4 reserved control word detected */
        uint64_t drwnng                  : 1;       /**< Spi4 receive FIFO drowning/overflow */
        uint64_t clserr                  : 1;       /**< Spi4 packet closed on non-16B alignment without EOP */
        uint64_t spiovr                  : 1;       /**< Spi async FIFO overflow */
        uint64_t spare                   : 2;       /**< Spares */
        uint64_t abnorm                  : 1;       /**< Abnormal packet termination (ERR bit) */
        uint64_t prtnxa                  : 1;       /**< Port out of range */
#else
        uint64_t prtnxa                  : 1;
        uint64_t abnorm                  : 1;
        uint64_t spare                   : 2;
        uint64_t spiovr                  : 1;
        uint64_t clserr                  : 1;
        uint64_t drwnng                  : 1;
        uint64_t rsverr                  : 1;
        uint64_t tpaovr                  : 1;
        uint64_t diperr                  : 1;
        uint64_t syncerr                 : 1;
        uint64_t calerr                  : 1;
        uint64_t reserved2               : 19;
        uint64_t spf                     : 1;
        uint64_t reserved                : 32;
#endif
    } s;
} cvmx_spxx_int_reg_t;


/**
 * SPX_INT_SYNC - Interrupt Sync Register
 *  This mask set indicates which exception condition should cause the
 *  SPX_INT_REG[SPF] bit to assert
 *  It is recommended that software set the PRTNXA, SPIOVR, CLSERR, DRWNNG,
 *  DIPERR, CALERR, and SYNCERR errors as synchronization events.  Software is
 *  free to synchronize the bus on other conditions, but this is the minimum
 *  recommended set.
 *
 * - Access using the CVMX_SPXX_INT_SYNC(0..) CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 52;      /**< Reserved */
        uint64_t calerr                  : 1;       /**< Spi4 Calendar table parity error */
        uint64_t syncerr                 : 1;       /**< Consecutive Spi4 DIP4 errors have exceeded
                                                         SPX_ERR_CTL[ERRCNT] */
        uint64_t diperr                  : 1;       /**< Spi4 DIP4 error */
        uint64_t tpaovr                  : 1;       /**< Selected port has hit TPA overflow */
        uint64_t rsverr                  : 1;       /**< Spi4 reserved control word detected */
        uint64_t drwnng                  : 1;       /**< Spi4 receive FIFO drowning/overflow */
        uint64_t clserr                  : 1;       /**< Spi4 packet closed on non-16B alignment without EOP */
        uint64_t spiovr                  : 1;       /**< Spi async FIFO overflow (Spi3 or Spi4) */
        uint64_t spare                   : 2;       /**< Spare */
        uint64_t abnorm                  : 1;       /**< Abnormal packet termination (ERR bit) */
        uint64_t prtnxa                  : 1;       /**< Port out of range */
#else
        uint64_t prtnxa                  : 1;
        uint64_t abnorm                  : 1;
        uint64_t spare                   : 2;
        uint64_t spiovr                  : 1;
        uint64_t clserr                  : 1;
        uint64_t drwnng                  : 1;
        uint64_t rsverr                  : 1;
        uint64_t tpaovr                  : 1;
        uint64_t diperr                  : 1;
        uint64_t syncerr                 : 1;
        uint64_t calerr                  : 1;
        uint64_t reserved                : 52;
#endif
    } s;
} cvmx_spxx_int_sync_t;


/**
 * SPX_TPA_ACC - TPA watcher byte accumulator
 *  This field allows the user to access the TPA watcher accumulator counter.
 *  This register reflects the number of bytes sent to IMX once the port
 *  specified by SPX_TPA_SEL[PRTSEL] has lost its TPA.  The SPX_INT_REG[TPAOVR]
 *  bit is asserted when CNT >= SPX_TPA_MAX[MAX].  The CNT will continue to
 *  increment until the TPA for the port is asserted.  At that point the CNT
 *  value is frozen until software clears the interrupt bit.
 *
 * - Access using the CVMX_SPXX_TPA_ACC(0..) CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 32;      /**< Reserved */
        uint64_t cnt                     : 32;      /**< TPA watcher accumulate count */
#else
        uint64_t cnt                     : 32;
        uint64_t reserved                : 32;
#endif
    } s;
} cvmx_spxx_tpa_acc_t;


/**
 * SPX_TPA_MAX - TPA watcher assertion threashold
 *  The TPA watcher has the ability to notify the system with an interrupt when
 *  too much data has been received on loss of TPA.  The user sets the
 *  SPX_TPA_MAX[MAX] register and when the watcher has accumulated that many
 *  ticks, then the interrupt is conditionally raised (based on interrupt mask
 *  bits).  This feature will be disabled if the programmed count is zero.
 *
 * - Access using the CVMX_SPXX_TPA_MAX(0..) CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 32;      /**< Reserved */
        uint64_t max                     : 32;      /**< TPA watcher TPA threashold */
#else
        uint64_t max                     : 32;
        uint64_t reserved                : 32;
#endif
    } s;
} cvmx_spxx_tpa_max_t;


/**
 * SPX_TPA_SEL - TPA watcher port selector
 *  The TPA Watcher is primarily a debug vehicle used to help initial bringup
 *  of a system.  The TPA watcher counts bytes that roll in from the Spi
 *  interface.  The user programs the Spi port to watch using
 *  SPX_TPA_SEL[PRTSEL].  Once the TPA is deasserted for that port, the watcher
 *  begins to count the data ticks that have been delivered to the inbound
 *  datapath (and eventually to the IOB).  The result is that we can derive
 *  turn-around times of the other device by watching how much data was sent
 *  after a loss of TPA through the SPX_TPA_ACC[CNT] register.  An optional
 *  interrupt may be raised as well.  See SPX_TPA_MAX for further information.
 *  TPA's can be deasserted for a number of reasons...
 *  1) IPD indicates backpressure
 *  2) The GMX inbound FIFO is filling up and should BP
 *  3) User has out an override on the TPA wires
 *
 * - Access using the CVMX_SPXX_TPA_SEL(0..) CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 60;      /**< Reserved */
        uint64_t prtsel                  : 4;       /**< TPA watcher port select */
#else
        uint64_t prtsel                  : 4;
        uint64_t reserved                : 60;
#endif
    } s;
} cvmx_spxx_tpa_sel_t;


/**
 * These bits are controls for the Spi4 RX bit deskew logic.  See that Spec
 *  for further details.
 *  BOOT_BIT
 *    On the initial training synchronization sequence, the hardware has the
 *    BOOT_BIT set which means that it will continueously perform macro
 *    operations.  Once the BOOT_BIT is cleared, the macro machine will finish
 *    the macro operation is working on and then return to the idle state.
 *    Subsequent training sequences will only go through a single macro
 *    operation in order to do slight deskews.
 *  JITTER
 *    Minimum value is 1.  This parameter must be set for Spi4 mode using
 *    auto-bit deskew.  Regardless of the original intent, this field must be
 *    set non-zero for deskew to function correctly.
 *    The thought is the JITTER range is no longer required since the macro
 *    machine was enhanced to understand about edge direction.  Originally
 *    these bits were intended to compensate for clock jitter.
 *    dly:    this is the intrinsic delay of each delay element
 *               tap currently, it is 80ps-100ps (TBD).
 *    jitter: amount of jitter we expect in the system (~200ps)
 *    j:      number of taps to account for jitter
 *    j = ((jitter / dly) + 1)
 *  TRNTEST
 *    This mode is used to test systems to make sure that the bit deskew
 *    parameters have been correctly setup.  After configuration, software can
 *    set the TRNTEST mode bit.  This should be done before SRX_COM_CTL[ST_EN]
 *    is set such that we can be sure that the TX device is simply sending
 *    continuous training patterns.
 *    The test mode samples every incoming bit-time and makes sure that it is
 *    either a training control or a training data packet.  If any other data
 *    is observed, then SPX_DBG_DESKEW_STATE[TESTRES] will assert signaling a
 *    test failure.
 *    Software must clear TRNTEST before training is terminated.
 *  Example Spi4 RX init flow...
 *  1) set the CLKDLY lines (SPXX_CLK_CTL[CLKDLY])
 *     - these bits must be set before the DLL can successfully lock
 *  2) set the SRXDLCK (SPXX_CLK_CTL[SRXDLCK])
 *     - this is the DLL lock bit which also acts as a block reset
 *  3) wait for the DLLs lock
 *  4) set any desired fields in SPXX_DBG_DESKEW_CTL
 *     - This register has only one field that most users will care about.
 *       When set, DLLDIS will disable sending update pulses to the Spi4 RX
 *       DLLs.  This pulse allows the DLL to adjust to clock variations over
 *       time.  In general, it is desired behavior.
 *  5) set fields in SPXX_TRN4_CTL
 *     - These fields deal with the MUX training sequence
 *  MUX_EN
 *         This is the enable bit for the mux select.  The MUX select will
 *         run in the training sequence between the DLL and the Macro
 *         sequence when enabled.  Once the MUX selects are selected, the
 *         entire macro sequence must be rerun.  The expectation is that
 *         this is only run at boot time and this is bit cleared at/around
 *         step #8.
 *     - These fields deal with the Macro training sequence
 *  MACRO_EN
 *         This is the enable bit for the macro sequence.  Macro sequences
 *         will run after the DLL and MUX training sequences.  Each macro
 *         sequence can move the offset by one value.
 *  MAXDIST
 *         This is how far we will search for an edge.  Example...
 *            dly:    this is the intrinsic delay of each delay element
 *                    tap currently, it is 80ps-100ps (TBD).
 *            U:      bit time period in time units.
 *            MAXDIST = MIN(16, ((bit_time / 2) / dly)
 *            Each MAXDIST iteration consists of an edge detect in the early
 *            and late (+/-) directions in an attempt to center the data.  This
 *            requires two training transistions, the control/data and
 *            data/control transistions which comprise a training sequence.
 *            Therefore, the number of training sequences required for a single
 *            macro operation is simply MAXDIST.
 *  6) set the RCVTRN go bit (SPXX_CLK_CTL[RCVTRN])
 *     - this bit synchs on the first valid complete training cycle and
 *       starts to process the training packets
 *  6b) This is where software could manually set the controls as opposed to
 *      letting the hardware do it.  See the SPXX_DBG_DESKEW_CTL register
 *         description for more detail.
 *  7) the TX device must continue to send training packets for the initial
 *     time period.
 *     - this can be determined by...
 *       DLL: one training sequence for the DLL adjustment (regardless of enable/disable)
 *       MUX: one training sequence for the Flop MUX taps (regardless of enable/disable)
 *       INIT_SEQUENCES: max number of taps that we must move
 *          INIT_SEQUENCES = MIN(16, ((bit_time / 2) / dly))
 *          INIT_TRN = DLL + MUX + ROUNDUP((INIT_SEQUENCES * (MAXDIST + 2)))
 *     - software can either wait a fixed amount of time based on the clock
 *       frequencies or poll the SPXX_CLK_STAT[SRXTRN] register.  Each
 *       assertion of SRXTRN means that at least one training sequence has
 *       been received.  Software can poll, clear, and repeat on this bit to
 *       eventually count all required transistions.
 *      @code
 *       int cnt = 0;
 *       while (cnt < INIT_TRN) [
 *              if (SPXX_CLK_STAT[SRXTRN]) [
 *                 cnt++;
 *                 SPXX_CLK_STAT[SRXTRN] = 0;
 *              ]
 *       ]
 *      @endcode
 *     - subsequent training sequences will normally move the taps only
 *       one position, so the ALPHA equation becomes...
 *       MAC   = (MAXDIST == 0) ? 1 : ROUNDUP((1 * (MAXDIST + 2))) + 1
 *         ALPHA = DLL + MUX + MAC
 *       ergo, MAXDIST simplifies to...
 *         ALPHA = (MAXDIST == 0) ? 3 : MAXDIST + 5
 *         DLL and MUX and MAC will always require at least a training sequence
 *         each - even if disabled.  If the macro sequence is enabled, an
 *         additional training sequenece at the end is necessary.  The extra
 *         sequence allows for all training state to be cleared before resuming
 *         normal operation.
 *  8) after the recevier gets enough training sequences in order to achieve
 *     deskew lock, set SPXX_TRN4_CTL[CLR_BOOT]
 *     - this disables the continuous macro sequences and puts into into one
 *       macro sequnence per training operation
 *     - optionally, the machine can choose to fall out of training if
 *       enough NOPs follow the training operation (require at least 32 NOPs
 *       to follow the training sequence).
 *     There must be at least MAXDIST + 3 training sequences after the
 *     SPXX_TRN4_CTL[CLR_BOOT] is set or sufficient NOPs from the TX device.
 *  9) the TX device continues to send training sequences until the RX
 *     device sends a calendar transistion.  This is controlled by
 *     SRXX_COM_CTL[ST_EN].  Other restrictions require other Spi parameters
 *     (e.g. the calendar table) to be setup before this bit can be enabled.
 *     Once the entire interface is properly programmed, software writes
 *     SRXX_COM_CTL[INF_EN].  At this point, the Spi4 packets will begin to
 *     be sent into the N2K core and processed by the chip.
 *
 * - Access using the CVMX_SPXX_TRN4_CTL(0..) CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 51;      /**< Reserved */
        uint64_t trntest                 : 1;       /**< Training Test Mode
                                                         This bit is only for initial bringup
                                                         (spx_csr__spi4_trn_test_mode) */
        uint64_t jitter                  : 3;       /**< Accounts for jitter when the macro sequence is
                                                         locking.  The value is how many consecutive
                                                         transititions before declaring en edge.  Minimum
                                                         value is 1.  This parameter must be set for Spi4
                                                         mode using auto-bit deskew.
                                                         (spx_csr__spi4_mac_jitter) */
        uint64_t clr_boot                : 1;       /**< Clear the macro boot sequence mode bit
                                                         (spx_csr__spi4_mac_clr_boot) */
        uint64_t set_boot                : 1;       /**< Enable the macro boot sequence mode bit
                                                         (spx_csr__spi4_mac_set_boot) */
        uint64_t maxdist                 : 5;       /**< This field defines how far from center the
                                                         deskew logic will search in a single macro
                                                         sequence (spx_csr__spi4_mac_iters) */
        uint64_t macro_en                : 1;       /**< Allow the macro sequence to center the sample
                                                         point in the data window through hardware
                                                         (spx_csr__spi4_mac_trn_en) */
        uint64_t mux_en                  : 1;       /**< Enable the hardware machine that selects the
                                                         proper coarse FLOP selects
                                                         (spx_csr__spi4_mux_trn_en) */
#else
        uint64_t mux_en                  : 1;
        uint64_t macro_en                : 1;
        uint64_t maxdist                 : 5;
        uint64_t set_boot                : 1;
        uint64_t clr_boot                : 1;
        uint64_t jitter                  : 3;
        uint64_t trntest                 : 1;
        uint64_t reserved                : 51;
#endif
    } s;
} cvmx_spxx_trn4_ctl_t;


/**
 * SRX_COM_CTL - Spi receive common control
 *  Restrictions:
 *    Both the calendar table and the LEN and M parameters must be completely
 *    setup before writing the Interface enable (INF_EN) and Status channel
 *    enabled (ST_EN) asserted.
 *
 * - Access using the CVMX_SRXX_COM_CTL(0..) CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 56;      /**< Reserved */
        uint64_t prts                    : 4;       /**< Number of ports in the receiver (write: ports - 1)
                                                         - 0:  1 port
                                                         - 1:  2 ports
                                                         - 2:  3 ports
                                                         -
                                                         - 15: 16 ports */
        uint64_t st_en                   : 1;       /**< Status channel enabled
                                                         This is to allow configs without a status channel.
                                                         This bit should not be modified once the
                                                         interface is enabled. */
        uint64_t spare                   : 2;       /**< Spare bits */
        uint64_t inf_en                  : 1;       /**< Interface enable
                                                         The master switch that enables the entire
                                                         interface. SRX will not validiate any data until
                                                         this bit is set. This bit should not be modified
                                                         once the interface is enabled. */
#else
        uint64_t inf_en                  : 1;
        uint64_t spare                   : 2;
        uint64_t st_en                   : 1;
        uint64_t prts                    : 4;
        uint64_t reserved                : 56;
#endif
    } s;
} cvmx_srxx_com_ctl_t;


/**
 * SRX_IGN_RX_FULL - Ignore RX FIFO backpressure
 *  DROP
 *    If a device can not or should not assert backpressure, then setting DROP
 *    will force STARVING status on the status channel for all ports.  This
 *    eliminates any back pressure from N2.
 *    This implies that it's ok drop packets when the FIFOS fill up.
 *    A side effect of this mode is that the TPA Watcher will effectively be
 *    disabled.  Since the DROP mode forces all TPA lines asserted, the TPA
 *    Watcher will never find a cycle where the TPA for the selected port is
 *    deasserted in order to increment its count.
 *
 * - Access using the CVMX_SRXX_IGN_RX_FULL(0..) CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 48;      /**< Reserved */
        uint64_t ignore                  : 16;      /**< This port should ignore backpressure hints from
                                                         GMX when the RX FIFO fills up
                                                         0: Use GMX backpressure
                                                         1: Ignore GMX backpressure */
#else
        uint64_t ignore                  : 16;
        uint64_t reserved                : 48;
#endif
    } s;
} cvmx_srxx_ign_rx_full_t;


/**
 * specify the RSL base addresses for the block
 *  SRX_SPI4_CAL - Spi4 Calender table
 *  direct_calendar_write / direct_calendar_read
 *  Notes:
 *      There are 32 calendar table CSR's, each containing 4 entries for a
 *      total of 128 entries.  In the above definition...
 *            n = calendar table offset * 4
 *         Example, offset 0x00 contains the calendar table entries 0, 1, 2, 3
 *         (with n == 0).  Offset 0x10 is the 16th entry in the calendar table
 *         and would contain entries (16*4) = 64, 65, 66, and 67.
 *  Restrictions:
 *           Calendar table entry accesses (read or write) can only occur
 *           if the interface is disabled.  All other accesses will be
 *           unpredictable.
 *           Both the calendar table and the LEN and M parameters must be
 *           completely setup before writing the Interface enable (INF_EN) and
 *           Status channel enabled (ST_EN) asserted.
 *
 * - Access using the CVMX_SRXX_SPI4_CALX(0..31, 0..1) CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 47;      /**< Reserved */
        uint64_t oddpar                  : 1;       /**< Odd parity over SRX_SPI4_CAL[15:0]
                                                         (^SRX_SPI4_CAL[16:0] === 1'b1)                  |   $NS       NS */
        uint64_t prt3                    : 4;       /**< Status for port n+3 */
        uint64_t prt2                    : 4;       /**< Status for port n+2 */
        uint64_t prt1                    : 4;       /**< Status for port n+1 */
        uint64_t prt0                    : 4;       /**< Status for port n+0 */
#else
        uint64_t prt0                    : 4;
        uint64_t prt1                    : 4;
        uint64_t prt2                    : 4;
        uint64_t prt3                    : 4;
        uint64_t oddpar                  : 1;
        uint64_t reserved                : 47;
#endif
    } s;
} cvmx_srxx_spi4_calx_t;


/**
 * SRX_SPI4_STAT - Spi4 status channel control
 *  Restrictions:
 *           Both the calendar table and the LEN and M parameters must be
 *           completely setup before writing the Interface enable (INF_EN) and
 *           Status channel enabled (ST_EN) asserted.
 *        Current rev only supports LVTTL status IO
 *
 * - Access using the CVMX_SRXX_SPI4_STAT(0..) CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 48;      /**< Reserved */
        uint64_t m                       : 8;       /**< CALENDAR_M (from spi4.2 spec) */
        uint64_t spare                   : 1;       /**< Spare bits */
        uint64_t len                     : 7;       /**< CALENDAR_LEN (from spi4.2 spec) */
#else
        uint64_t len                     : 7;
        uint64_t spare                   : 1;
        uint64_t m                       : 8;
        uint64_t reserved                : 48;
#endif
    } s;
} cvmx_srxx_spi4_stat_t;


/**
 * STX_ARB_CTL - Spi transmit arbitration control
 *  Notes:
 *         If STX_ARB_CTL[MINTRN] is set in Spi4 mode, then the data_max_t
 *         parameter will have to be adjusted.  Please see the
 *         STX_SPI4_DAT[MAX_T] section for additional information.  In
 *         addition, the min_burst can only be guaranteed on the initial data
 *         burst of a given packet (i.e. the first data burst which contains
 *         the SOP tick).  All subsequent bursts could be truncated by training
 *         sequences at any point during transmission and could be arbitrarily
 *         small.  This mode is only for use in Spi4 mode.
 *
 * - Access using the CVMX_STXX_ARB_CTL(0..) CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 58;      /**< Reserved */
        uint64_t mintrn                  : 1;       /**< Hold off training cycles until min_burst is
                                                         satisfied */
        uint64_t reserved2               : 1;       /**< Reserved */
        uint64_t igntpa                  : 1;       /**< User switch to ignore any TPA information from the
                                                         Spi interface. This CSR forces all TPA terms to
                                                         be masked out.  It is only intended as backdoor
                                                         or debug feature. */
        uint64_t reserved3               : 3;       /**< Reserved */
#else
        uint64_t reserved3               : 3;
        uint64_t igntpa                  : 1;
        uint64_t reserved2               : 1;
        uint64_t mintrn                  : 1;
        uint64_t reserved                : 58;
#endif
    } s;
} cvmx_stxx_arb_ctl_t;


/**
 * This register reports the total number of cycles (STX data clks -
 *  stx_clk) in which the port defined in STX_STAT_CTL[BCKPRS] has lost TPA
 *  or is otherwise receiving backpressure.
 *  In Spi4 mode, this is defined as a loss of TPA which is indicated when
 *  the receiving device reports SATISFIED for the given port.  The calendar
 *  status is brought into N2 on the spi4_tx*_sclk and synchronized into the
 *  N2 Spi TX clock domain which is 1/2 the frequency of the spi4_tx*_dclk
 *  clock (internally, this the stx_clk).  The counter will update on the
 *  rising edge in which backpressure is reported.
 *  Since both the status and datapath pins operate on the same
 *  spi3_tx*_tfclk, the counter will simply update on the rising edge of
 *  every stx_clk in which backpressure is reported.
 *  This register will be cleared when software writes all '1's to
 *  the STX_BCKPRS_CNT.
 *
 * - Access using the CVMX_STXX_BCKPRS_CNT(0..) CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 32;      /**< Reserved */
        uint64_t cnt                     : 32;      /**< Number of cycles when back-pressure is received
                                                         for port defined in STX_STAT_CTL[BCKPRS] */
#else
        uint64_t cnt                     : 32;
        uint64_t reserved                : 32;
#endif
    } s;
} cvmx_stxx_bckprs_cnt_t;


/**
 * STX_COM_CTL - TX Common Control Register
 *  Restrictions:
 *      Both the calendar table and the LEN and M parameters must be
 *      completely setup before writing the Interface enable (INF_EN) and
 *      Status channel enabled (ST_EN) asserted.
 *
 * - Access using the CVMX_STXX_COM_CTL(0..) CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 60;      /**< Reserved */
        uint64_t st_en                   : 1;       /**< Status channel enabled */
        uint64_t spare                   : 2;       /**< Spare bits */
        uint64_t inf_en                  : 1;       /**< Interface enable */
#else
        uint64_t inf_en                  : 1;
        uint64_t spare                   : 2;
        uint64_t st_en                   : 1;
        uint64_t reserved                : 60;
#endif
    } s;
} cvmx_stxx_com_ctl_t;


/**
 * DIPMAX
 *    This counts the number of consecutive DIP2 states in which the the
 *    received DIP2 is bad.  The expected range is 1-15 cycles with the
 *    value of 0 meaning disabled.
 *  FRMMAX
 *    This counts the number of consecutive unexpected framing patterns (11)
 *    states.  The expected range is 1-15 cycles with the value of 0 meaning
 *    disabled.
 *
 * - Access using the CVMX_STXX_DIP_CNT(0..) CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 56;      /**< Reserved */
        uint64_t frmmax                  : 4;       /**< Number of consecutive unexpected framing patterns
                                                         before loss of sync */
        uint64_t dipmax                  : 4;       /**< Number of consecutive DIP2 error before loss
                                                         of sync */
#else
        uint64_t dipmax                  : 4;
        uint64_t frmmax                  : 4;
        uint64_t reserved                : 56;
#endif
    } s;
} cvmx_stxx_dip_cnt_t;


/**
 * STX_IGN_CAL - Ignore Calendar Status from Spi4 Status Channel
 *
 * - Access using the CVMX_STXX_IGN_CAL(0..) CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 48;      /**< Reserved */
        uint64_t igntpa                  : 16;      /**< Ignore Calendar Status from Spi4 Status Channel
                                                         per Spi4 port
                                                         0: Use the status channel info
                                                         1: Grant the given port MAX_BURST1 credits */
#else
        uint64_t igntpa                  : 16;
        uint64_t reserved                : 48;
#endif
    } s;
} cvmx_stxx_ign_cal_t;


/**
 * If the bit is enabled, then the coresponding exception condition will
 *  result in an interrupt to the system.
 *
 * - Access using the CVMX_STXX_INT_MSK(0..) CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 56;      /**< Reserved */
        uint64_t frmerr                  : 1;       /**< FRMCNT has exceeded STX_DIP_CNT[MAXFRM] */
        uint64_t unxfrm                  : 1;       /**< Unexpected framing sequence */
        uint64_t nosync                  : 1;       /**< ERRCNT has exceeded STX_DIP_CNT[MAXDIP] */
        uint64_t diperr                  : 1;       /**< DIP2 error on the Spi4 Status channel */
        uint64_t datovr                  : 1;       /**< Spi4 FIFO overflow error */
        uint64_t ovrbst                  : 1;       /**< Transmit packet burst too big */
        uint64_t calpar1                 : 1;       /**< STX Calendar Table Parity Error Bank1 */
        uint64_t calpar0                 : 1;       /**< STX Calendar Table Parity Error Bank0 */
#else
        uint64_t calpar0                 : 1;
        uint64_t calpar1                 : 1;
        uint64_t ovrbst                  : 1;
        uint64_t datovr                  : 1;
        uint64_t diperr                  : 1;
        uint64_t nosync                  : 1;
        uint64_t unxfrm                  : 1;
        uint64_t frmerr                  : 1;
        uint64_t reserved                : 56;
#endif
    } s;
} cvmx_stxx_int_msk_t;


/**
 * CALPAR0
 *    This bit indicates that the Spi4 calendar table encountered a parity
 *    error on bank0 of the calendar table memory.  This error bit is
 *    associated with the calendar table on the TX interface - the interface
 *    that drives the Spi databus.  The calendar table is used in Spi4 mode
 *    when using the status channel.  Parity errors can occur during normal
 *    operation when the calendar table is constantly being read for the port
 *    information, or during initialization time, when the user has access.
 *    This errors will force the the status channel to the reset state and
 *    begin driving training sequences.  The status channel will also reset.
 *    Software must follow the init sequence to resynch the interface.  This
 *    includes toggling INF_EN which will cancel all outstanding accumulated
 *    credits.
 *  CALPAR1
 *    Identical to CALPAR0 except that it indicates that the error occured
 *    on bank1 (instead of bank0).
 *  OVRBST
 *    STX can track upto a 512KB data burst.  Any packet larger than that is
 *    illegal and will cause confusion in the STX state machine.  BMI is
 *    responsible for throwing away these out of control packets from the
 *    input and the Execs should never generate them on the output.  This is
 *    a fatal error and should have STX_INT_SYNC[OVRBST] set.
 *  DATOVR
 *    FIFO where the Spi4 data ramps upto its transmit frequency has
 *    overflowed.  This is a fatal error and should have
 *    STX_INT_SYNC[DATOVR] set.
 *  DIPERR
 *    This bit will fire if any DIP2 error is caught by the Spi4 status
 *    channel.
 *  NOSYNC
 *    This bit indicates that the number of consecutive DIP2 errors exceeds
 *    STX_DIP_CNT[MAXDIP] and that the interface should be taken down.  The
 *    datapath will be notified and send continuous training sequences until
 *    software resynchronizes the interface.  This error condition should
 *    have STX_INT_SYNC[NOSYNC] set.
 *  UNXFRM
 *    Unexpected framing data was seen on the status channel.
 *  FRMERR
 *    This bit indicates that the number of consecutive unexpected framing
 *    sequences STX_DIP_CNT[MAXFRM] and that the interface should be taken
 *    down.  The datapath will be notified and send continuous training
 *    sequences until software resynchronizes the interface.  This error
 *    condition should have STX_INT_SYNC[FRMERR] set.
 *  SYNCERR
 *    Indicates that an exception marked in STX_INT_SYNC has occured and the
 *    TX datapath is disabled.  It is recommended that the OVRBST, DATOVR,
 *    NOSYNC, and FRMERR error conditions all have their bits set in the
 *    STX_INT_SYNC register.
 *
 * - Access using the CVMX_STXX_INT_REG(0..) CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 55;      /**< Reserved */
        uint64_t syncerr                 : 1;       /**< Interface encountered a fatal error */
        uint64_t frmerr                  : 1;       /**< FRMCNT has exceeded STX_DIP_CNT[MAXFRM] */
        uint64_t unxfrm                  : 1;       /**< Unexpected framing sequence */
        uint64_t nosync                  : 1;       /**< ERRCNT has exceeded STX_DIP_CNT[MAXDIP] */
        uint64_t diperr                  : 1;       /**< DIP2 error on the Spi4 Status channel */
        uint64_t datovr                  : 1;       /**< Spi4 FIFO overflow error */
        uint64_t ovrbst                  : 1;       /**< Transmit packet burst too big */
        uint64_t calpar1                 : 1;       /**< STX Calendar Table Parity Error Bank1 */
        uint64_t calpar0                 : 1;       /**< STX Calendar Table Parity Error Bank0 */
#else
        uint64_t calpar0                 : 1;
        uint64_t calpar1                 : 1;
        uint64_t ovrbst                  : 1;
        uint64_t datovr                  : 1;
        uint64_t diperr                  : 1;
        uint64_t nosync                  : 1;
        uint64_t unxfrm                  : 1;
        uint64_t frmerr                  : 1;
        uint64_t syncerr                 : 1;
        uint64_t reserved                : 55;
#endif
    } s;
} cvmx_stxx_int_reg_t;


/**
 * If the bit is enabled, then the coresponding exception condition is flagged
 *  to be fatal.  In Spi4 mode, the exception condition will result in a loss
 *  of sync condition on the Spi4 interface and the datapath will send
 *  continuous traing sequences.
 *  It is recommended that software set the OVRBST, DATOVR, NOSYNC, and
 *  FRMERR errors as synchronization events.  Software is free to
 *  synchronize the bus on other conditions, but this is the minimum
 *  recommended set.
 *
 * - Access using the CVMX_STXX_INT_SYNC(0..) CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 56;      /**< Reserved */
        uint64_t frmerr                  : 1;       /**< FRMCNT has exceeded STX_DIP_CNT[MAXFRM] */
        uint64_t unxfrm                  : 1;       /**< Unexpected framing sequence */
        uint64_t nosync                  : 1;       /**< ERRCNT has exceeded STX_DIP_CNT[MAXDIP] */
        uint64_t diperr                  : 1;       /**< DIP2 error on the Spi4 Status channel */
        uint64_t datovr                  : 1;       /**< Spi4 FIFO overflow error */
        uint64_t ovrbst                  : 1;       /**< Transmit packet burst too big */
        uint64_t calpar1                 : 1;       /**< STX Calendar Table Parity Error Bank1 */
        uint64_t calpar0                 : 1;       /**< STX Calendar Table Parity Error Bank0 */
#else
        uint64_t calpar0                 : 1;
        uint64_t calpar1                 : 1;
        uint64_t ovrbst                  : 1;
        uint64_t datovr                  : 1;
        uint64_t diperr                  : 1;
        uint64_t nosync                  : 1;
        uint64_t unxfrm                  : 1;
        uint64_t frmerr                  : 1;
        uint64_t reserved                : 56;
#endif
    } s;
} cvmx_stxx_int_sync_t;


/**
 * specify the RSL base addresses for the block
 *  STX_SPI4_CAL - Spi4 Calender table
 *  direct_calendar_write / direct_calendar_read
 *  Notes:
 *      There are 32 calendar table CSR's, each containing 4 entries for a
 *      total of 128 entries.  In the above definition...
 *            n = calendar table offset * 4
 *         Example, offset 0x00 contains the calendar table entries 0, 1, 2, 3
 *         (with n == 0).  Offset 0x10 is the 16th entry in the calendar table
 *         and would contain entries (16*4) = 64, 65, 66, and 67.
 *  Restrictions:
 *         Calendar table entry accesses (read or write) can only occur
 *         if the interface is disabled.  All other accesses will be
 *         unpredictable.
 *      Both the calendar table and the LEN and M parameters must be
 *      completely setup before writing the Interface enable (INF_EN) and
 *      Status channel enabled (ST_EN) asserted.
 *
 * - Access using the CVMX_STXX_SPI4_CALX(0..31, 0..1) CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 47;      /**< Reserved */
        uint64_t oddpar                  : 1;       /**< Odd parity over STX_SPI4_CAL[15:0]
                                                         (^STX_SPI4_CAL[16:0] === 1'b1)                  |   $NS       NS */
        uint64_t prt3                    : 4;       /**< Status for port n+3 */
        uint64_t prt2                    : 4;       /**< Status for port n+2 */
        uint64_t prt1                    : 4;       /**< Status for port n+1 */
        uint64_t prt0                    : 4;       /**< Status for port n+0 */
#else
        uint64_t prt0                    : 4;
        uint64_t prt1                    : 4;
        uint64_t prt2                    : 4;
        uint64_t prt3                    : 4;
        uint64_t oddpar                  : 1;
        uint64_t reserved                : 47;
#endif
    } s;
} cvmx_stxx_spi4_calx_t;


/**
 * STX_SPI4_DAT - Spi4 datapath channel control register
 *  Restrictions:
 *  DATA_MAX_T must be in MOD 4 cycles
 *  DATA_MAX_T must at least 0x20
 *  DATA_MAX_T == 0 or ALPHA == 0 will disable the training sequnce
 *  If STX_ARB_CTL[MINTRN] is set, then training cycles will stall
 *      waiting for min bursts to complete.  In the worst case, this will
 *      add the entire min burst transmission time to the interval between
 *      trainging sequence.  The observed MAX_T on the Spi4 bus will be...
 *                   STX_SPI4_DAT[MAX_T] + (STX_ARB_SLC[MINB] * 4)
 *         If STX_ARB_CTL[MINTRN] is set in Spi4 mode, then the data_max_t
 *         parameter will have to be adjusted.  Please see the
 *         STX_SPI4_DAT[MAX_T] section for additional information.  In
 *         addition, the min_burst can only be guaranteed on the initial data
 *         burst of a given packet (i.e. the first data burst which contains
 *         the SOP tick).  All subsequent bursts could be truncated by training
 *         sequences at any point during transmission and could be arbitrarily
 *         small.  This mode is only for use in Spi4 mode.
 *
 * - Access using the CVMX_STXX_SPI4_DAT(0..) CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 32;      /**< Reserved */
        uint64_t alpha                   : 16;      /**< alpha (from spi4.2 spec) */
        uint64_t max_t                   : 16;      /**< DATA_MAX_T (from spi4.2 spec) */
#else
        uint64_t max_t                   : 16;
        uint64_t alpha                   : 16;
        uint64_t reserved                : 32;
#endif
    } s;
} cvmx_stxx_spi4_dat_t;


/**
 * STX_SPI4_STAT - Spi4 status channel control register
 *  Restrictions:
 *      Both the calendar table and the LEN and M parameters must be
 *      completely setup before writing the Interface enable (INF_EN) and
 *      Status channel enabled (ST_EN) asserted.
 *      The calendar table will only be enabled when LEN > 0.
 *      Current rev will only support LVTTL status IO.
 *
 * - Access using the CVMX_STXX_SPI4_STAT(0..) CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 48;      /**< Reserved */
        uint64_t m                       : 8;       /**< CALENDAR_M (from spi4.2 spec) */
        uint64_t revrd                   : 1;       /**< Reserved */
        uint64_t len                     : 7;       /**< CALENDAR_LEN (from spi4.2 spec) */
#else
        uint64_t len                     : 7;
        uint64_t revrd                   : 1;
        uint64_t m                       : 8;
        uint64_t reserved                : 48;
#endif
    } s;
} cvmx_stxx_spi4_stat_t;


/**
 * - Access using the CVMX_STXX_STAT_BYTES_HI(0..) CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 32;      /**< Reserved */
        uint64_t cnt                     : 32;      /**< Number of bytes sent (CNT[63:32]) */
#else
        uint64_t cnt                     : 32;
        uint64_t reserved                : 32;
#endif
    } s;
} cvmx_stxx_stat_bytes_hi_t;


/**
 * - Access using the CVMX_STXX_STAT_BYTES_LO(0..) CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 32;      /**< Reserved */
        uint64_t cnt                     : 32;      /**< Number of bytes sent (CNT[31:0]) */
#else
        uint64_t cnt                     : 32;
        uint64_t reserved                : 32;
#endif
    } s;
} cvmx_stxx_stat_bytes_lo_t;


/**
 * - Access using the CVMX_STXX_STAT_CTL(0..) CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 58;      /**< Reserved */
        uint64_t clr                     : 1;       /**< Clear all statistics counters
                                                         - STX_STAT_PKT_XMT
                                                         - STX_STAT_BYTES_HI
                                                         - STX_STAT_BYTES_LO */
        uint64_t bckprs                  : 5;       /**< The selected port for STX_BCKPRS_CNT */
#else
        uint64_t bckprs                  : 5;
        uint64_t clr                     : 1;
        uint64_t reserved                : 58;
#endif
    } s;
} cvmx_stxx_stat_ctl_t;


/**
 * - Access using the CVMX_STXX_STAT_PKT_XMT(0..) CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 32;      /**< Reserved */
        uint64_t cnt                     : 32;      /**< Number of packets sent */
#else
        uint64_t cnt                     : 32;
        uint64_t reserved                : 32;
#endif
    } s;
} cvmx_stxx_stat_pkt_xmt_t;


/**
 * This structure controls the global run state of all timers.
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 61;      /**< Must be zero */
        uint64_t reset                   : 1;       /**< Reset oneshot pulse for free-running structures */
        uint64_t enable_dwb              : 1;       /**< Set to cause the timer to use down't write back pages when freeing chunks */
        uint64_t enable_timers           : 1;       /**< Set to enable timer processing */
#else
        uint64_t enable_timers           : 1;
        uint64_t enable_dwb              : 1;
        uint64_t reset                   : 1;
        uint64_t reserved                : 61;
#endif
    } s;
} cvmx_tim_control_t;


/**
 * CSIZE must be at least 16.  It is illegal to program CSIZE to a value that is less than 16.
 * This CSR is a memory of 16 entries, and thus, the TIM_REG_READ_IDX CSR must be written before any
 * CSR read operations to this address can be performed.
 *
 * - Access using the CVMX_TIM_MEM_DEBUG0 CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved1               : 16;      /**< MBZ */
        uint64_t ena                     : 1;       /**< Ring timer enable */
        uint64_t reserved2               : 1;       /**< MBZ */
        uint64_t count                   : 22;      /**< Current count */
        uint64_t reserved3               : 2;       /**< MBZ */
        uint64_t interval                : 22;      /**< Timer interval - 1 */
#else
        uint64_t interval                : 22;
        uint64_t reserved3               : 2;
        uint64_t count                   : 22;
        uint64_t reserved2               : 1;
        uint64_t ena                     : 1;
        uint64_t reserved1               : 16;
#endif
    } s;
} cvmx_tim_mem_debug0_t;


/**
 * Internal per-ring state intended for debug use only - tim.ctl[47:0]
 * This CSR is a memory of 16 entries, and thus, the TIM_REG_READ_IDX CSR must be written before any
 * CSR read operations to this address can be performed.
 *
 * - Access using the CVMX_TIM_MEM_DEBUG1 CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t bucket                  : 13;      /**< Current bucket[12:0] */
        uint64_t base                    : 31;      /**< Pointer[35:5] to bucket[0] */
        uint64_t bsize                   : 20;      /**< Number of buckets - 1 */
#else
        uint64_t bsize                   : 20;
        uint64_t base                    : 31;
        uint64_t bucket                  : 13;
#endif
    } s;
} cvmx_tim_mem_debug1_t;


/**
 * Internal per-ring state intended for debug use only - tim.sta[63:0]
 * This CSR is a memory of 16 entries, and thus, the TIM_REG_READ_IDX CSR must be written before any
 * CSR read operations to this address can be performed.
 *
 * - Access using the CVMX_TIM_MEM_DEBUG2 CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved1               : 32;      /**< MBZ */
        uint64_t reserved2               : 8;       /**< MBZ */
        uint64_t cpool                   : 3;       /**< Free list used to free chunks */
        uint64_t csize                   : 13;      /**< Number of words per chunk */
        uint64_t reserved3               : 1;       /**< MBZ */
        uint64_t bucket                  : 7;       /**< Current bucket[19:13] */
#else
        uint64_t bucket                  : 7;
        uint64_t reserved3               : 1;
        uint64_t csize                   : 13;
        uint64_t cpool                   : 3;
        uint64_t reserved2               : 8;
        uint64_t reserved1               : 32;
#endif
    } s;
} cvmx_tim_mem_debug2_t;


/**
 * This structure represents the bucket configuration per
 * timer.
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 9;       /**< Must be zero */
        uint64_t first_bucket            : 31;      /**< Pointer to the first bucket */
        uint64_t num_buckets             : 20;      /**< Number of buckets - 1 */
        uint64_t ring                    : 4;       /**< Ring to configure (0 - 15) */
#else
        uint64_t ring                    : 4;
        uint64_t num_buckets             : 20;
        uint64_t first_bucket            : 31;
        uint64_t reserved                : 9;
#endif
    } s;
} cvmx_tim_mem_ring0_t;


/**
 * This structure represents the memory pool and timer
 * interval.
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 21;      /**< Must be zero */
        uint64_t enable                  : 1;       /**< Set to enable this ring */
        uint64_t pool                    : 3;       /**< FPA pool to use (0 - 7) */
        uint64_t words_per_chunk         : 13;      /**< Number 64bit of words per chunk */
        uint64_t interval                : 22;      /**< Timer interval - 1, measured in 1024 cycle ticks */
        uint64_t ring                    : 4;       /**< Ring to configure (0 - 15) */
#else
        uint64_t ring                    : 4;
        uint64_t interval                : 22;
        uint64_t words_per_chunk         : 13;
        uint64_t pool                    : 3;
        uint64_t enable                  : 1;
        uint64_t reserved                : 21;
#endif
    } s;
} cvmx_tim_mem_ring1_t;


/**
 * Provides the read index during a CSR read operation to any of the CSRs that are physically stored
 * as memories.  The names of these CSRs begin with the prefix "TIM_MEM_".
 * IDX[7:0] is the read index.  INC[7:0] is an increment that is added to IDX[7:0] after any CSR read.
 * The intended use is to initially write this CSR such that IDX=0 and INC=1.  Then, the entire
 * contents of a CSR memory can be read with consecutive CSR read commands.
 *
 * - Access using the CVMX_TIM_REG_BIST_RESULT CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 60;      /**< MBZ */
        uint64_t sta                     : 2;       /**< BiST result of the STA memories (0=pass, !0=fail) */
        uint64_t ncb                     : 1;       /**< BiST result of the NCB memories (0=pass, !0=fail) */
        uint64_t ctl                     : 1;       /**< BiST result of the CTL memories (0=pass, !0=fail) */
#else
        uint64_t ctl                     : 1;
        uint64_t ncb                     : 1;
        uint64_t sta                     : 2;
        uint64_t reserved                : 60;
#endif
    } s;
} cvmx_tim_reg_bist_result_t;


/**
 * Access to the internal BiST results
 * Each bit is the BiST result of an individual memory (per bit, 0=pass and 1=fail).
 *
 * - Access using the CVMX_TIM_REG_ERROR CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 48;      /**< MBZ */
        uint64_t mask                    : 16;      /**< Bit mask indicating the rings in error */
#else
        uint64_t mask                    : 16;
        uint64_t reserved                : 48;
#endif
    } s;
} cvmx_tim_reg_error_t;


/**
 * When set, ENA_TIM places the TIM in normal operation.  When set, ENA_DWB enables the use of
 * DontWriteBacks during the buffer freeing operations.
 *
 * - Access using the CVMX_TIM_REG_READ_IDX CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 48;      /**< MBZ */
        uint64_t inc                     : 8;       /**< Increment to add to current index for next index */
        uint64_t index                   : 8;       /**< Index to use for next memory CSR read */
#else
        uint64_t index                   : 8;
        uint64_t inc                     : 8;
        uint64_t reserved                : 48;
#endif
    } s;
} cvmx_tim_reg_read_idx_t;


/**
 * During a CSR write to this register, the write data is used as a mask to clear the selected status
 * bits (status'[3:0] = status[3:0] & ~write_data[3:0]).
 *                   TRA_BIST_STATUS = Trace Buffer BiST Status
 *  Description:
 *
 * - Access using the CVMX_TRA_BIST_STATUS CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 61;      /**< RESERVED */
        uint64_t tcf                     : 1;       /**< Bist Results for TCF memory
                                                         0: GOOD (or bist in progress/never run)
                                                         1: BAD */
        uint64_t tdf1                    : 1;       /**< Bist Results for TDF memory 1
                                                         0: GOOD (or bist in progress/never run)
                                                         1: BAD */
        uint64_t tdf0                    : 1;       /**< Bist Results for TCF memory 0
                                                         0: GOOD (or bist in progress/never run)
                                                         1: BAD */
#else
        uint64_t tdf0                    : 1;
        uint64_t tdf1                    : 1;
        uint64_t tcf                     : 1;
        uint64_t reserved                : 61;
#endif
    } s;
} cvmx_tra_bist_status_t;


/**
 * TRA_CTL = Trace Buffer Control
 *
 * - Access using the CVMX_TRA_CTL CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 50;      /**< RESERVED */
        uint64_t mcd0_ena                : 1;       /**< MCD0 enable
                                                         If set and any PP sends the MCD0 signal, the
                                                         tracing is disabled. */
        uint64_t mcd0_thr                : 1;       /**< MCD0_threshold
                                                         At a fill threshold event, sends a signal to all
                                                         PPs that will cause them to enter Debug Mode if
                                                         interrupt is enabled. */
        uint64_t mcd0_trg                : 1;       /**< MCD0_trigger
                                                         At an end trigger event, sends a signal to all
                                                         PPs that will cause them to enter Debug Mode if
                                                         interrupt is enabled. */
        uint64_t ciu_thr                 : 1;       /**< CIU_threshold
                                                         At a fill threshold event, sends a signal to all
                                                         PPs that will cause them to enter Debug Mode if
                                                         interrupt is enabled. */
        uint64_t ciu_trg                 : 1;       /**< CIU_trigger
                                                         At an end trigger event, sends a signal to all
                                                         PPs that will cause them to enter Debug Mode if
                                                         interrupt is enabled. */
        uint64_t full_thr                : 2;       /**< Full Threshhold
                                                         0=none
                                                         1=1/2 full
                                                         2=3/4 full
                                                         3=4/4 full */
        uint64_t time_grn                : 3;       /**< Timestamp granularity
                                                         granularity=8^n cycles, n=0,1,2,3,4,5,6,7 */
        uint64_t trig_ctl                : 2;       /**< Trigger Control
                                                         0=no triggers
                                                         1=trigger0=start trigger, trigger1=stop trigger
                                                         2=(trigger0 || trigger1)=start trigger
                                                         3=(trigger0 || trigger1)=stop trigger */
        uint64_t wrap                    : 1;       /**< Wrap mode
                                                         0=do not wrap
                                                         1=wrap */
        uint64_t ena                     : 1;       /**< Enable Trace
                                                         0=disable
                                                         1=enable */
#else
        uint64_t ena                     : 1;
        uint64_t wrap                    : 1;
        uint64_t trig_ctl                : 2;
        uint64_t time_grn                : 3;
        uint64_t full_thr                : 2;
        uint64_t ciu_trg                 : 1;
        uint64_t ciu_thr                 : 1;
        uint64_t mcd0_trg                : 1;
        uint64_t mcd0_thr                : 1;
        uint64_t mcd0_ena                : 1;
        uint64_t reserved                : 50;
#endif
    } s;
} cvmx_tra_ctl_t;


/**
 * TRA_FILT_ADR_ADR = Trace Buffer Filter Address Address
 *  Description:
 *
 * - Access using the CVMX_TRA_FILT_ADR_ADR CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 28;      /**< RESERVED */
        uint64_t adr                     : 36;      /**< Unmasked Address
                                                         The combination of TRA_FILT_ADR_ADR and
                                                         TRA_FILT_ADR_MSK is a masked address to
                                                         enable tracing of only those commands whose
                                                         masked address matches */
#else
        uint64_t adr                     : 36;
        uint64_t reserved                : 28;
#endif
    } s;
} cvmx_tra_filt_adr_adr_t;


/**
 * TRA_FILT_ADR_MSK = Trace Buffer Filter Address Mask
 *  Description:
 *
 * - Access using the CVMX_TRA_FILT_ADR_MSK CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 28;      /**< RESERVED */
        uint64_t adr                     : 36;      /**< Address Mask
                                                         The combination of TRA_FILT_ADR_ADR and
                                                         TRA_FILT_ADR_MSK is a masked address to
                                                         enable tracing of only those commands whose
                                                         masked address matches */
#else
        uint64_t adr                     : 36;
        uint64_t reserved                : 28;
#endif
    } s;
} cvmx_tra_filt_adr_msk_t;


/**
 * TRA_FILT_CMD = Trace Buffer Filter Command Mask
 *
 * - Access using the CVMX_TRA_FILT_CMD, CVMX_TRA_TRIG0_CMD, CVMX_TRA_TRIG1_CMD CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 48;      /**< RESERVED */
        uint64_t iobdma                  : 1;       /**< Enable IOBDMA tracing
                                                         0=disable, 1=enable */
        uint64_t iobst                   : 1;       /**< Enable IOBST tracing
                                                         0=disable, 1=enable */
        uint64_t iobld64                 : 1;       /**< Enable IOBLD64 tracing
                                                         0=disable, 1=enable */
        uint64_t iobld32                 : 1;       /**< Enable IOBLD32 tracing
                                                         0=disable, 1=enable */
        uint64_t iobld16                 : 1;       /**< Enable IOBLD16 tracing
                                                         0=disable, 1=enable */
        uint64_t iobld8                  : 1;       /**< Enable IOBLD8 tracing
                                                         0=disable, 1=enable */
        uint64_t stt                     : 1;       /**< Enable STT tracing
                                                         0=disable, 1=enable */
        uint64_t stp                     : 1;       /**< Enable STP tracing
                                                         0=disable, 1=enable */
        uint64_t stc                     : 1;       /**< Enable STC tracing
                                                         0=disable, 1=enable */
        uint64_t stf                     : 1;       /**< Enable STF tracing
                                                         0=disable, 1=enable */
        uint64_t ldt                     : 1;       /**< Enable LDT tracing
                                                         0=disable, 1=enable */
        uint64_t ldi                     : 1;       /**< Enable LDI tracing
                                                         0=disable, 1=enable */
        uint64_t ldd                     : 1;       /**< Enable LDD tracing
                                                         0=disable, 1=enable */
        uint64_t psl1                    : 1;       /**< Enable PSL1 tracing
                                                         0=disable, 1=enable */
        uint64_t pl2                     : 1;       /**< Enable PL2 tracing
                                                         0=disable, 1=enable */
        uint64_t dwb                     : 1;       /**< Enable DWB tracing
                                                         0=disable, 1=enable */
#else
        uint64_t dwb                     : 1;
        uint64_t pl2                     : 1;
        uint64_t psl1                    : 1;
        uint64_t ldd                     : 1;
        uint64_t ldi                     : 1;
        uint64_t ldt                     : 1;
        uint64_t stf                     : 1;
        uint64_t stc                     : 1;
        uint64_t stp                     : 1;
        uint64_t stt                     : 1;
        uint64_t iobld8                  : 1;
        uint64_t iobld16                 : 1;
        uint64_t iobld32                 : 1;
        uint64_t iobld64                 : 1;
        uint64_t iobst                   : 1;
        uint64_t iobdma                  : 1;
        uint64_t reserved                : 48;
#endif
    } s;
} cvmx_tra_filt_cmd_t;


/**
 * TRA_FILT_DID = Trace Buffer Filter DestinationId Mask
 *  Description:
 *
 * - Access using the CVMX_TRA_FILT_DID CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 32;      /**< RESERVED */
        uint64_t iob                     : 32;      /**< Enable tracing to IOB[N] with matching DestID
                                                         0=disable, 1=enable, per bit N where 0<=N<=31
                                                         note that this field is used only for IOB*
                                                         commands and is ignored for non-IOB* commands */
#else
        uint64_t iob                     : 32;
        uint64_t reserved                : 32;
#endif
    } s;
} cvmx_tra_filt_did_t;


/**
 * TRA_FILT_SID = Trace Buffer Filter SourceId Mask
 *
 * - Access using the CVMX_TRA_FILT_SID, CVMX_TRA_TRIG0_SID, CVMX_TRA_TRIG1_SID CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 32;      /**< RESERVED */
        uint64_t iob                     : 16;      /**< Enable tracing from IOB[N] with matching SourceID
                                                         0=disable, 1=enable, per bit N where 16<=N<=31
                                                         bit 16 is IOB(Packet)
                                                         bit 17 is IOB(PKO)
                                                         bit 18 is IOB(ReqLoad, ReqStore)
                                                         bit 19 is IOB(DWB)
                                                         bit 20 through 30 are ignored
                                                         bit 31 is IOB(generic)
                                                         note that this field is used only for non-IOB*
                                                         command and is ignored for IOB* commands */
        uint64_t pp                      : 16;      /**< Enable tracing from PP[N] with matching SourceID
                                                         0=disable, 1=enableper bit N where  0<=N<=15 */
#else
        uint64_t pp                      : 16;
        uint64_t iob                     : 16;
        uint64_t reserved                : 32;
#endif
    } s;
} cvmx_tra_filt_sid_t;


/**
 * TRA_INT_STATUS = Trace Buffer Interrupt Status
 *
 * - Access using the CVMX_TRA_INT_STATUS CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 60;      /**< RESERVED */
        uint64_t mcd0_thr                : 1;       /**< MCD0 full threshold interrupt status
                                                         0=trace buffer did not generate interrupt
                                                         1=trace buffer did     generate interrupt */
        uint64_t mcd0_trg                : 1;       /**< MCD0 end trigger interrupt status
                                                         0=trace buffer did not generate interrupt
                                                         1=trace buffer did     generate interrupt */
        uint64_t ciu_thr                 : 1;       /**< CIU full threshold interrupt status
                                                         0=trace buffer did not generate interrupt
                                                         1=trace buffer did     generate interrupt */
        uint64_t ciu_trg                 : 1;       /**< CIU end trigger interrupt status
                                                         0=trace buffer did not generate interrupt
                                                         1=trace buffer did     generate interrupt */
#else
        uint64_t ciu_trg                 : 1;
        uint64_t ciu_thr                 : 1;
        uint64_t mcd0_trg                : 1;
        uint64_t mcd0_thr                : 1;
        uint64_t reserved                : 60;
#endif
    } s;
} cvmx_tra_int_status_t;


/**
 * TRA_READ_DAT = Trace Buffer Read Data
 *  Description:
 *
 * - Access using the CVMX_TRA_READ_DAT CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t data                    : 64;      /**< Trace buffer data for current entry */
#else
        uint64_t data                    : 64;
#endif
    } s;
} cvmx_tra_read_dat_t;


/**
 * TRA_TRIG0_ADR_ADR = Trace Buffer Filter Address Address
 *  Description:
 *
 * - Access using the CVMX_TRA_TRIG0_ADR_ADR CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 28;      /**< RESERVED */
        uint64_t adr                     : 36;      /**< Unmasked Address
                                                         The combination of TRA_TRIG0_ADR_ADR and
                                                         TRA_TRIG0_ADR_MSK is a masked address to
                                                         enable tracing of only those commands whose
                                                         masked address matches */
#else
        uint64_t adr                     : 36;
        uint64_t reserved                : 28;
#endif
    } s;
} cvmx_tra_trig0_adr_adr_t;


/**
 * TRA_TRIG0_ADR_MSK = Trace Buffer Filter Address Mask
 *  Description:
 *
 * - Access using the CVMX_TRA_TRIG0_ADR_MSK CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 28;      /**< RESERVED */
        uint64_t adr                     : 36;      /**< Address Mask
                                                         The combination of TRA_TRIG0_ADR_ADR and
                                                         TRA_TRIG0_ADR_MSK is a masked address to
                                                         enable tracing of only those commands whose
                                                         masked address matches */
#else
        uint64_t adr                     : 36;
        uint64_t reserved                : 28;
#endif
    } s;
} cvmx_tra_trig0_adr_msk_t;


/**
 * TRA_TRIG0_CMD = Trace Buffer Filter Command Mask
 *  Description:
 *
 * - Access using the CVMX_TRA_TRIG0_CMD CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 48;      /**< RESERVED */
        uint64_t iobdma                  : 1;       /**< Enable IOBDMA tracing
                                                         0=disable, 1=enable */
        uint64_t iobst                   : 1;       /**< Enable IOBST tracing
                                                         0=disable, 1=enable */
        uint64_t iobld64                 : 1;       /**< Enable IOBLD64 tracing
                                                         0=disable, 1=enable */
        uint64_t iobld32                 : 1;       /**< Enable IOBLD32 tracing
                                                         0=disable, 1=enable */
        uint64_t iobld16                 : 1;       /**< Enable IOBLD16 tracing
                                                         0=disable, 1=enable */
        uint64_t iobld8                  : 1;       /**< Enable IOBLD8 tracing
                                                         0=disable, 1=enable */
        uint64_t stt                     : 1;       /**< Enable STT tracing
                                                         0=disable, 1=enable */
        uint64_t stp                     : 1;       /**< Enable STP tracing
                                                         0=disable, 1=enable */
        uint64_t stc                     : 1;       /**< Enable STC tracing
                                                         0=disable, 1=enable */
        uint64_t stf                     : 1;       /**< Enable STF tracing
                                                         0=disable, 1=enable */
        uint64_t ldt                     : 1;       /**< Enable LDT tracing
                                                         0=disable, 1=enable */
        uint64_t ldi                     : 1;       /**< Enable LDI tracing
                                                         0=disable, 1=enable */
        uint64_t ldd                     : 1;       /**< Enable LDD tracing
                                                         0=disable, 1=enable */
        uint64_t psl1                    : 1;       /**< Enable PSL1 tracing
                                                         0=disable, 1=enable */
        uint64_t pl2                     : 1;       /**< Enable PL2 tracing
                                                         0=disable, 1=enable */
        uint64_t dwb                     : 1;       /**< Enable DWB tracing
                                                         0=disable, 1=enable */
#else
        uint64_t dwb                     : 1;
        uint64_t pl2                     : 1;
        uint64_t psl1                    : 1;
        uint64_t ldd                     : 1;
        uint64_t ldi                     : 1;
        uint64_t ldt                     : 1;
        uint64_t stf                     : 1;
        uint64_t stc                     : 1;
        uint64_t stp                     : 1;
        uint64_t stt                     : 1;
        uint64_t iobld8                  : 1;
        uint64_t iobld16                 : 1;
        uint64_t iobld32                 : 1;
        uint64_t iobld64                 : 1;
        uint64_t iobst                   : 1;
        uint64_t iobdma                  : 1;
        uint64_t reserved                : 48;
#endif
    } s;
} cvmx_tra_trig0_cmd_t;


/**
 * TRA_TRIG0_DID = Trace Buffer Filter DestinationId Mask
 *  Description:
 *
 * - Access using the CVMX_TRA_TRIG0_DID CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 32;      /**< RESERVED */
        uint64_t iob                     : 32;      /**< Enable tracing to IOB[N] with matching DestID
                                                         0=disable, 1=enable, per bit N where 0<=N<=31
                                                         note that this field is used only for IOB*
                                                         commands and is ignored for non-IOB* commands */
#else
        uint64_t iob                     : 32;
        uint64_t reserved                : 32;
#endif
    } s;
} cvmx_tra_trig0_did_t;


/**
 * TRA_TRIG0_SID = Trace Buffer Filter SourceId Mask
 *  Description:
 *
 * - Access using the CVMX_TRA_TRIG0_SID CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 32;      /**< RESERVED */
        uint64_t iob                     : 16;      /**< Enable tracing from IOB[N] with matching SourceID
                                                         0=disable, 1=enable, per bit N where 16<=N<=31
                                                         bit 16 is IOB(Packet)
                                                         bit 17 is IOB(PKO)
                                                         bit 18 is IOB(ReqLoad, ReqStore)
                                                         bit 19 is IOB(DWB)
                                                         bit 20 through 30 are ignored
                                                         bit 31 is IOB(generic)
                                                         note that this field is used only for non-IOB*
                                                         command and is ignored for IOB* commands */
        uint64_t pp                      : 16;      /**< Enable tracing from PP[N] with matching SourceID
                                                         0=disable, 1=enableper bit N where  0<=N<=15 */
#else
        uint64_t pp                      : 16;
        uint64_t iob                     : 16;
        uint64_t reserved                : 32;
#endif
    } s;
} cvmx_tra_trig0_sid_t;


/**
 * TRA_TRIG1_ADR_ADR = Trace Buffer Filter Address Address
 *  Description:
 *
 * - Access using the CVMX_TRA_TRIG1_ADR_ADR CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 28;      /**< RESERVED */
        uint64_t adr                     : 36;      /**< Unmasked Address
                                                         The combination of TRA_TRIG1_ADR_ADR and
                                                         TRA_TRIG1_ADR_MSK is a masked address to
                                                         enable tracing of only those commands whose
                                                         masked address matches */
#else
        uint64_t adr                     : 36;
        uint64_t reserved                : 28;
#endif
    } s;
} cvmx_tra_trig1_adr_adr_t;


/**
 * TRA_TRIG1_ADR_MSK = Trace Buffer Filter Address Mask
 *  Description:
 *
 * - Access using the CVMX_TRA_TRIG1_ADR_MSK CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 28;      /**< RESERVED */
        uint64_t adr                     : 36;      /**< Address Mask
                                                         The combination of TRA_TRIG1_ADR_ADR and
                                                         TRA_TRIG1_ADR_MSK is a masked address to
                                                         enable tracing of only those commands whose
                                                         masked address matches */
#else
        uint64_t adr                     : 36;
        uint64_t reserved                : 28;
#endif
    } s;
} cvmx_tra_trig1_adr_msk_t;


/**
 * TRA_TRIG1_CMD = Trace Buffer Filter Command Mask
 *  Description:
 *
 * - Access using the CVMX_TRA_TRIG1_CMD CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 48;      /**< RESERVED */
        uint64_t iobdma                  : 1;       /**< Enable IOBDMA tracing
                                                         0=disable, 1=enable */
        uint64_t iobst                   : 1;       /**< Enable IOBST tracing
                                                         0=disable, 1=enable */
        uint64_t iobld64                 : 1;       /**< Enable IOBLD64 tracing
                                                         0=disable, 1=enable */
        uint64_t iobld32                 : 1;       /**< Enable IOBLD32 tracing
                                                         0=disable, 1=enable */
        uint64_t iobld16                 : 1;       /**< Enable IOBLD16 tracing
                                                         0=disable, 1=enable */
        uint64_t iobld8                  : 1;       /**< Enable IOBLD8 tracing
                                                         0=disable, 1=enable */
        uint64_t stt                     : 1;       /**< Enable STT tracing
                                                         0=disable, 1=enable */
        uint64_t stp                     : 1;       /**< Enable STP tracing
                                                         0=disable, 1=enable */
        uint64_t stc                     : 1;       /**< Enable STC tracing
                                                         0=disable, 1=enable */
        uint64_t stf                     : 1;       /**< Enable STF tracing
                                                         0=disable, 1=enable */
        uint64_t ldt                     : 1;       /**< Enable LDT tracing
                                                         0=disable, 1=enable */
        uint64_t ldi                     : 1;       /**< Enable LDI tracing
                                                         0=disable, 1=enable */
        uint64_t ldd                     : 1;       /**< Enable LDD tracing
                                                         0=disable, 1=enable */
        uint64_t psl1                    : 1;       /**< Enable PSL1 tracing
                                                         0=disable, 1=enable */
        uint64_t pl2                     : 1;       /**< Enable PL2 tracing
                                                         0=disable, 1=enable */
        uint64_t dwb                     : 1;       /**< Enable DWB tracing
                                                         0=disable, 1=enable */
#else
        uint64_t dwb                     : 1;
        uint64_t pl2                     : 1;
        uint64_t psl1                    : 1;
        uint64_t ldd                     : 1;
        uint64_t ldi                     : 1;
        uint64_t ldt                     : 1;
        uint64_t stf                     : 1;
        uint64_t stc                     : 1;
        uint64_t stp                     : 1;
        uint64_t stt                     : 1;
        uint64_t iobld8                  : 1;
        uint64_t iobld16                 : 1;
        uint64_t iobld32                 : 1;
        uint64_t iobld64                 : 1;
        uint64_t iobst                   : 1;
        uint64_t iobdma                  : 1;
        uint64_t reserved                : 48;
#endif
    } s;
} cvmx_tra_trig1_cmd_t;


/**
 * TRA_TRIG1_DID = Trace Buffer Filter DestinationId Mask
 *  Description:
 *
 * - Access using the CVMX_TRA_TRIG1_DID CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 32;      /**< RESERVED */
        uint64_t iob                     : 32;      /**< Enable tracing to IOB[N] with matching DestID
                                                         0=disable, 1=enable, per bit N where 0<=N<=31
                                                         note that this field is used only for IOB*
                                                         commands and is ignored for non-IOB* commands */
#else
        uint64_t iob                     : 32;
        uint64_t reserved                : 32;
#endif
    } s;
} cvmx_tra_trig1_did_t;


/**
 * TRA_TRIG1_SID = Trace Buffer Filter SourceId Mask
 *  Description:
 *
 * - Access using the CVMX_TRA_TRIG1_SID CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 32;      /**< RESERVED */
        uint64_t iob                     : 16;      /**< Enable tracing from IOB[N] with matching SourceID
                                                         0=disable, 1=enable, per bit N where 16<=N<=31
                                                         bit 16 is IOB(Packet)
                                                         bit 17 is IOB(PKO)
                                                         bit 18 is IOB(ReqLoad, ReqStore)
                                                         bit 19 is IOB(DWB)
                                                         bit 20 through 30 are ignored
                                                         bit 31 is IOB(generic)
                                                         note that this field is used only for non-IOB*
                                                         command and is ignored for IOB* commands */
        uint64_t pp                      : 16;      /**< Enable tracing from PP[N] with matching SourceID
                                                         0=disable, 1=enableper bit N where  0<=N<=15 */
#else
        uint64_t pp                      : 16;
        uint64_t iob                     : 16;
        uint64_t reserved                : 32;
#endif
    } s;
} cvmx_tra_trig1_sid_t;


/**
 * CVMX_MIO_UARTX_DLH(0..1) = MIO UART Divisor Latch High Register
 *
 * The DLH (Divisor Latch High) register in conjunction with DLL (Divisor Latch Low) register form a
 * 16-bit, read/write, Divisor Latch register that contains the baud rate divisor for the UART. It is
 * accessed by first setting the DLAB bit (bit 7) in the Line Control Register (LCR). The output baud
 * rate is equal to eclk frequency divided by sixteen times the value of the baud rate divisor, as
 * follows: baud rate = eclk / (16 * divisor).
 *
 * Note that once both Divisor Latch Registers are set, at least (2 * divisor * 16) eclk cycles should
 * be allowed to pass before transmitting or receiving data.
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 56;      /**< Reserved */
        uint64_t dlh                     : 8;       /**< Divisor Latch High Register */
#else
        uint64_t dlh                     : 8;
        uint64_t reserved                : 56;
#endif
    } s;
} cvmx_uart_dlh_t;


/**
 * CVMX_MIO_UARTX_DLL(0..1) = MIO UART Divisor Latch Low Register
 *
 * The DLH (Divisor Latch High) register in conjunction with DLL (Divisor Latch Low) register form a
 * 16-bit, read/write, Divisor Latch register that contains the baud rate divisor for the UART. It is
 * accessed by first setting the DLAB bit (bit 7) in the Line Control Register (LCR). The output baud
 * rate is equal to eclk frequency divided by sixteen times the value of the baud rate divisor, as
 * follows: baud rate = eclk / (16 * divisor).
 *
 * Note that once both Divisor Latch Registers are set, at least (2 * divisor * 16) eclk cycles should
 * be allowed to pass before transmitting or receiving data.
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 56;      /**< Reserved */
        uint64_t dll                     : 8;       /**< Divisor Latch Low Register */
#else
        uint64_t dll                     : 8;
        uint64_t reserved                : 56;
#endif
    } s;
} cvmx_uart_dll_t;


/**
 * MIO_UART(0..1)_FAR = MIO UART(0..1) FIFO Access Register
 *  The FIFO Access Register (FAR) is used to enable a FIFO access mode for testing, so that the receive
 *  FIFO can be written by software and the transmit FIFO can be read by software when the FIFOs are
 *  enabled. When FIFOs are not enabled it allows the RBR to be written by software and the THR to be read
 *  by software. Note, that when the FIFO access mode is enabled/disabled, the control portion of the
 *  receive FIFO and transmit FIFO is reset and the FIFOs are treated as empty.
 *
 * - Access using the CVMX_MIO_UARTX_FAR(0..1) CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 63;      /**< Reserved */
        uint64_t far                     : 1;       /**< FIFO Access Register */
#else
        uint64_t far                     : 1;
        uint64_t reserved                : 63;
#endif
    } s;
} cvmx_uart_far_t;


/**
 * CVMX_MIO_UARTX_FCR(0..1) = MIO UART FIFO Control Register
 *
 * The FIFO Control Register (FCR) is a write-only register that controls the read and write data FIFO
 * operation. When FIFOs and Programmable THRE Interrupt mode are enabled, this register also controls
 * the THRE Interrupt empty threshold level.
 *
 * Setting bit 0 of the FCR enables the transmit and receive FIFOs.
 *
 * Writing a '1' to bit 1 of the FCR resets and flushes data in the receive FIFO. Note that this bit is
 * self-clearing and it is not necessary to clear this bit.
 *
 * Writing a '1' to bit 2 of the FCR resets and flushes data in the transmit FIFO. Note that this bit is
 * self-clearing and it is not necessary to clear this bit.
 *
 * The FIFOs are also reset anytime bit 0 of the FCR changes value.
 *
 * If the FIFOs and Programmable THRE Interrupt mode are enabled, bits 4 and 5 control the empty
 * threshold level at which THRE Interrupts are generated when the mode is active.  See the following
 * table for encodings:
 *
 * TX Trigger
 * - 00 = empty FIFO
 * - 01 = 2 chars in FIFO
 * - 10 = FIFO 1/4 full
 * - 11 = FIFO 1/2 full
 *
 * If the FIFO mode is enabled (bit 0 of the FCR is set to '1') bits 6 and 7 are active. Bit 6 and bit 7
 * set the trigger level in the receiver FIFO for the Enable Received Data Available Interrupt (ERBFI).
 * See the following table for encodings:
 *
 * RX Trigger
 * - 00 = 1 char in FIFO
 * - 01 = FIFO 1/4 full
 * - 10 = FIFO 1/2 full
 * - 11 = FIFO 2 chars less than full
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved1               : 56;      /**< Reserved */
        uint64_t rxtrig                  : 2;       /**< RX Trigger */
        uint64_t txtrig                  : 2;       /**< TX Trigger */
        uint64_t reserved0               : 1;       /**< Reserved */
        uint64_t txfr                    : 1;       /**< TX FIFO reset */
        uint64_t rxfr                    : 1;       /**< RX FIFO reset */
        uint64_t en                      : 1;       /**< FIFO enable */
#else
        uint64_t en                      : 1;
        uint64_t rxfr                    : 1;
        uint64_t txfr                    : 1;
        uint64_t reserved0               : 1;
        uint64_t txtrig                  : 2;
        uint64_t rxtrig                  : 2;
        uint64_t reserved1               : 56;
#endif
    } s;
} cvmx_uart_fcr_t;


/**
 * MIO_UART(0..1)_HTX = MIO UART(0..1) Halt TX Register
 *  The Halt TX Register (HTX) is used to halt transmissions for testing, so that the transmit FIFO can be
 *  filled by software when FIFOs are enabled. If FIFOs are not enabled, setting the HTX register will
 *  have no effect.
 *
 * - Access using the CVMX_MIO_UARTX_HTX(0..1) CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 63;      /**< Reserved */
        uint64_t htx                     : 1;       /**< Halt TX */
#else
        uint64_t htx                     : 1;
        uint64_t reserved                : 63;
#endif
    } s;
} cvmx_uart_htx_t;


/**
 * CVMX_MIO_UARTX_IER(0..1) = MIO UART Interrupt Enable Register
 *
 * Interrupt Enable Register (IER) is a read/write register that contains four bits that enable
 * the generation of interrupts. These four bits are the Enable Received Data Available Interrupt
 * (ERBFI), the Enable Transmitter Holding Register Empty Interrupt (ETBEI), the Enable Receiver Line
 * Status Interrupt (ELSI), and the Enable Modem Status Interrupt (EDSSI).
 *
 * The IER also contains an enable bit (PTIME) for the Programmable THRE Interrupt mode.
 *
 * Note: The Divisor Latch Address Bit (DLAB) of the Line Control Register (LCR) must be clear to access
 * this register.
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved1               : 56;      /**< Reserved */
        uint64_t ptime                   : 1;       /**< Programmable THRE Interrupt mode enable */
        uint64_t reserved0               : 3;       /**< Reserved */
        uint64_t edssi                   : 1;       /**< Enable Modem Status Interrupt */
        uint64_t elsi                    : 1;       /**< Enable Receiver Line Status Interrupt */
        uint64_t etbei                   : 1;       /**< Enable Transmitter Holding Register Empty Interrupt */
        uint64_t erbfi                   : 1;       /**< Enable Received Data Available Interrupt */
#else
        uint64_t erbfi                   : 1;
        uint64_t etbei                   : 1;
        uint64_t elsi                    : 1;
        uint64_t edssi                   : 1;
        uint64_t reserved0               : 3;
        uint64_t ptime                   : 1;
        uint64_t reserved1               : 56;
#endif
    } s;
} cvmx_uart_ier_t;


/**
 * CVMX_MIO_UARTX_IIR(0..1) = MIO UART Interrupt Identity Register
 *
 * The Interrupt Identity Register (IIR) is a read-only register that identifies the source of an
 * interrupt. The upper two bits of the register are FIFO-enabled bits. These bits are '00' if the FIFOs
 * are disabled, and '11' if they are enabled. The lower four bits identify the highest priority pending
 * interrupt. The following table defines interrupt source decoding, interrupt priority, and interrupt
 * reset control:
 *
 * See cvmx_uart_iid_t for interrupt encoding
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved1               : 56;      /**< Reserved */
        uint64_t fen                     : 2;       /**< FIFO-enabled bits */
        uint64_t reserved0               : 2;       /**< Reserved */
        cvmx_uart_iid_t iid              : 4;       /**< Interrupt ID */
#else
        cvmx_uart_iid_t iid              : 4;
        uint64_t reserved0               : 2;
        uint64_t fen                     : 2;
        uint64_t reserved1               : 56;
#endif
    } s;
} cvmx_uart_iir_t;


/**
 * CVMX_MIO_UARTX_LCR(0..1) = MIO UART Line Control Register
 *
 * The Line Control Register (LCR) controls the format of the data that is transmitted and received by
 * the UART.
 *
 * LCR bits 0 and 1 control the number of bits per character. See the following table for encodings:
 *
 * CLS
 * - 00 = 5 bits (bits 0-4 sent)
 * - 01 = 6 bits (bits 0-5 sent)
 * - 10 = 7 bits (bits 0-6 sent)
 * - 11 = 8 bits (all bits sent)
 *
 * LCR bit 2 controls the number of stop bits transmitted. If bit 2 is a '0', one stop bit is transmitted
 * in the serial data. If bit 2 is a '1' and the data bits are set to '00', one and a half stop bits are
 * generated. Otherwise, two stop bits are generated and transmitted in the serial data out.
 *
 * LCR bit 3 is the Parity Enable bit. Parity is enabled when this bit is set.
 *
 * LCR bit 4 is the Parity Select bit. If parity is enabled, bit 4 selects between even and odd parity.
 * If bit 4 is a '1', an even number of ones is transmitted or checked. If bit 4 is a '0', an odd number
 * of ones is transmitted or checked.
 *
 * LCR bit 6 is the Break Control bit. Setting the Break bit sends a break signal by holding the sout
 * line low (when not in Loopback mode, as determined by Modem Control Register bit 4). When in Loopback
 * mode, the break condition is internally looped back to the receiver.
 *
 * LCR bit 7 is the Divisor Latch Address bit. Setting this bit enables reading and writing of the
 * Divisor Latch register (DLL and DLH) to set the baud rate of the UART. This bit must be cleared after
 * initial baud rate setup in order to access other registers.
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved1               : 56;      /**< Reserved */
        uint64_t dlab                    : 1;       /**< Divisor Latch Address bit */
        uint64_t brk                     : 1;       /**< Break Control bit */
        uint64_t reserved0               : 1;       /**< Reserved */
        uint64_t eps                     : 1;       /**< Parity Select bit */
        uint64_t pen                     : 1;       /**< Parity Enable bit */
        uint64_t stop                    : 1;       /**< Stop Control bit */
        cvmx_uart_bits_t cls             : 2;       /**< Data bits per character */
#else
        cvmx_uart_bits_t cls             : 2;
        uint64_t stop                    : 1;
        uint64_t pen                     : 1;
        uint64_t eps                     : 1;
        uint64_t reserved0               : 1;
        uint64_t brk                     : 1;
        uint64_t dlab                    : 1;
        uint64_t reserved1               : 56;
#endif
    } s;
} cvmx_uart_lcr_t;


/**
 * CVMX_MIO_UARTX_LSR(0..1) = MIO UART Line Status Register
 *
 * The Line Status Register (LSR) contains status of the receiver and transmitter data transfers. This
 * status can be read by the user at anytime.
 *
 * LSR bit 0 is the Data Ready (DR) bit. When set, this bit indicates the receiver contains at least one
 * character in the RBR or the receiver FIFO. This bit is cleared when the RBR is read in the non-FIFO
 * mode, or when the receiver FIFO is empty, in the FIFO mode.
 *
 * LSR bit 1 is the Overrun Error (OE) bit. When set, this bit indicates an overrun error has occurred
 * because a new data character was received before the previous data was read. In the non-FIFO mode, the
 * OE bit is set when a new character arrives in the receiver before the previous character was read from
 * the RBR. When this happens, the data in the RBR is overwritten. In the FIFO mode, an overrun error
 * occurs when the FIFO is full and a new character arrives at the receiver. The data in the FIFO is
 * retained and the data in the receive shift register is lost.
 *
 * LSR bit 2 is the Parity Error (PE) bit. This bit is set whenever there is a parity error in the
 * receiver if the Parity Enable (PEN) bit in the LCR is set. In the FIFO mode, since the parity error is
 * associated with a character received, it is revealed when the character with the parity error arrives
 * at the top of the FIFO.
 *
 * LSR bit 3 is the Framing Error (FE) bit. This bit is set whenever there is a framing error in the
 * receiver. A framing error occurs when the receiver does not detect a valid STOP bit in the received
 * data. In the FIFO mode, since the framing error is associated with a character received, it is
 * revealed when the character with the framing error is at the top of the FIFO.
 *
 * Note: The OE, PE, and FE bits are reset when a read of the LSR is performed.
 *
 * LSR bit 4 is the Break Interrupt (BI) bit. This bit is set whenever the serial input (sin) is held in
 * a 0 state for longer than the sum of start time + data bits + parity + stop bits. A break condition on
 * sin causes one and only one character, consisting of all zeros, to be received by the UART. In the
 * FIFO mode, the character associated with the break condition is carried through the FIFO and is
 * revealed when the character is at the top of the FIFO. Reading the LSR clears the BI bit. In the non-
 * FIFO mode, the BI indication occurs immediately and persists until the LSR is read.
 *
 * LSR bit 5 is the Transmitter Holding Register Empty (THRE) bit. When Programmable THRE Interrupt mode
 * is disabled, this bit indicates that the UART can accept a new character for transmission. This bit is
 * set whenever data is transferred from the THR to the transmitter shift register and no new data has
 * been written to the THR. This also causes a THRE Interrupt to occur, if the THRE Interrupt is enabled.
 * When FIFOs and Programmable THRE Interrupt mode are enabled, LSR bit 5 functionality is switched to
 * indicate the transmitter FIFO is full, and no longer controls THRE Interrupts, which are then
 * controlled by the FCR[5:4] threshold setting.
 *
 * LSR bit 6 is the Transmitter Empty (TEMT) bit. In the FIFO mode, this bit is set whenever the
 * Transmitter Shift Register and the FIFO are both empty. In the non-FIFO mode, this bit is set whenever
 * the Transmitter Holding Register and the Transmitter Shift Register are both empty. This bit is
 * typically used to make sure it is safe to change control registers. Changing control registers while
 * the transmitter is busy can result in corrupt data being transmitted.
 *
 * LSR bit 7 is the Error in Receiver FIFO (FERR) bit. This bit is active only when FIFOs are enabled. It
 * is set when there is at least one parity error, framing error, or break indication in the FIFO. This
 * bit is cleared when the LSR is read and the character with the error is at the top of the receiver
 * FIFO and there are no subsequent errors in the FIFO.
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 56;      /**< Reserved */
        uint64_t ferr                    : 1;       /**< Error in Receiver FIFO bit */
        uint64_t temt                    : 1;       /**< Transmitter Empty bit */
        uint64_t thre                    : 1;       /**< Transmitter Holding Register Empty bit */
        uint64_t bi                      : 1;       /**< Break Interrupt bit */
        uint64_t fe                      : 1;       /**< Framing Error bit */
        uint64_t pe                      : 1;       /**< Parity Error bit */
        uint64_t oe                      : 1;       /**< Overrun Error bit */
        uint64_t dr                      : 1;       /**< Data Ready bit */
#else
        uint64_t dr                      : 1;
        uint64_t oe                      : 1;
        uint64_t pe                      : 1;
        uint64_t fe                      : 1;
        uint64_t bi                      : 1;
        uint64_t thre                    : 1;
        uint64_t temt                    : 1;
        uint64_t ferr                    : 1;
        uint64_t reserved                : 56;
#endif
    } s;
} cvmx_uart_lsr_t;


/**
 * CVMX_MIO_UARTX_MCR(0..1) = MIO UART Modem Control Register
 *
 * The lower four bits of the Modem Control Register (MCR) directly manipulate the outputs of the UART.
 * The DTR (bit 0), RTS (bit 1), OUT1 (bit 2), and OUT2 (bit 3) bits are inverted and then drive the
 * corresponding UART outputs, dtr_n, rts_n, out1_n, and out2_n.
 *
 * Note: The dtr_n, out1_n, and out2_n outputs are not present on the pins of the chip, but the DTR,
 * OUT1, and OUT2 bits still function in Loopback mode.
 *
 * MCR bit 4 is the Loopback bit. When set, data on the sout line is held high, while serial data output
 * is looped back to the sin line, internally. In this mode all the interrupts are fully functional. This
 * feature is used for diagnostic purposes. Also, in loopback mode, the modem control inputs (dsr_n,
 * cts_n, ri_n, dcd_n) are disconnected and the four modem control outputs (dtr_n, rts_n, out1_n, out1_n)
 * are looped back to the inputs, internally.
 *
 * MCR bit 5 is the Auto Flow Control Enable (AFCE) bit. When FIFOs are enabled and this bit is set,
 * 16750-compatible Auto RTS and Auto CTS serial data flow control features are enabled.
 *
 * Auto RTS becomes active when the following occurs:
 * - 1. MCR bit 1 is set
 * - 2. FIFOs are enabled by setting FIFO Control Register (FCR) bit 0
 * - 3. MCR bit 5 is set (must be set after FCR bit 0)
 *
 * When active, the rts_n output is forced inactive-high when the receiver FIFO level reaches the
 * threshold set by FCR[7:6]. When rts_n is connected to the cts_n input of another UART device, the
 * other UART stops sending serial data until the receiver FIFO has available space.
 *
 * The selectable receiver FIFO threshold values are: 1, 1/4, 1/2, and 2 less than full. Since one
 * additional character may be transmitted to the UART after rts_n has become inactive (due to data
 * already having entered the transmitter block in the other UART), setting the threshold to 2 less
 * than full allows maximum use of the FIFO with a safety zone of one character.
 *
 * Once the receiver FIFO becomes completely empty by reading the Receiver Buffer Register (RBR), rts_n
 * again becomes active-low, signalling the other UART to continue sending data. It is important to note
 * that, even if everything else is set to Enabled and the correct MCR bits are set, if the FIFOs are
 * disabled through FCR[0], Auto Flow Control is also disabled. When Auto RTS is disabled or inactive,
 * rts_n is controlled solely by MCR[1].
 *
 * Auto CTS becomes active when the following occurs:
 * - 1. FIFOs are enabled by setting FIFO Control Register (FCR) bit 0
 * - 2. MCR bit 5 is set (must be set after FCR bit 0)
 *
 * When active, the UART transmitter is disabled whenever the cts_n input becomes inactive-high. This
 * prevents overflowing the FIFO of the receiving UART.
 *
 * Note that, if the cts_n input is not inactivated before the middle of the last stop bit, another
 * character is transmitted before the transmitter is disabled. While the transmitter is disabled, the
 * transmitter FIFO can still be written to, and even overflowed. Therefore, when using this mode, either
 * the true FIFO depth (64 characters) must be known to software, or the Programmable THRE Interrupt mode
 * must be enabled to access the FIFO full status through the Line Status Register. When using the FIFO
 * full status, software can poll this before each write to the Transmitter FIFO.
 *
 * When the cts_n input becomes active-low again, transmission resumes. It is important to note that,
 * even if everything else is set to Enabled, Auto Flow Control is also disabled if the FIFOs are
 * disabled through FCR[0]. When Auto CTS is disabled or inactive, the transmitter is unaffected by
 * cts_n.
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved1               : 56;      /**< Reserved */
        uint64_t reserved0               : 2;       /**< Reserved */
        uint64_t afce                    : 1;       /**< Auto Flow Control Enable bit */
        uint64_t loop                    : 1;       /**< Loopback bit */
        uint64_t out2                    : 1;       /**< OUT2 output bit */
        uint64_t out1                    : 1;       /**< OUT1 output bit */
        uint64_t rts                     : 1;       /**< RTS output bit */
        uint64_t dtr                     : 1;       /**< DTR output bit */
#else
        uint64_t dtr                     : 1;
        uint64_t rts                     : 1;
        uint64_t out1                    : 1;
        uint64_t out2                    : 1;
        uint64_t loop                    : 1;
        uint64_t afce                    : 1;
        uint64_t reserved0               : 2;
        uint64_t reserved1               : 56;
#endif
    } s;
} cvmx_uart_mcr_t;


/**
 * CVMX_MIO_UARTX_MSR(0..1) = MIO UART Modem Status Register
 *
 * The Modem Status Register (MSR) contains the current status of the modem control input lines and if
 * they changed.
 *
 * DCTS (bit 0), DDSR (bit 1), and DDCD (bit 3) bits record whether the modem control lines (cts_n,
 * dsr_n, and dcd_n) have changed since the last time the user read the MSR. TERI (bit 2) indicates ri_n
 * has changed from an active-low, to an inactive-high state since the last time the MSR was read. In
 * Loopback mode, DCTS reflects changes on MCR bit 1 (RTS), DDSR reflects changes on MCR bit 0 (DTR), and
 * DDCD reflects changes on MCR bit 3 (Out2), while TERI reflects when MCR bit 2 (Out1) has changed state
 * from a high to a low.
 *
 * The CTS, DSR, RI, and DCD Modem Status bits contain information on the current state of the modem
 * control lines. CTS (bit 4) is the compliment of cts_n, DSR (bit 5) is the compliment of dsr_n, RI
 * (bit 6) is the compliment of ri_n, and DCD (bit 7) is the compliment of dcd_n. In Loopback mode, CTS
 * is the same as MCR bit 1 (RTS), DSR is the same as MCR bit 0 (DTR), RI is the same as MCR bit 2
 * (Out1), and DCD is the same as MCR bit 3 (Out2).
 *
 * Note: The dsr_n, ri_n, and dcd_n inputs are internally tied to power and not present on the pins of
 * chip. Thus the DSR, RI, and DCD bits will be '0' when not in Loopback mode.
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 56;      /**< Reserved */
        uint64_t dcd                     : 1;       /**< DCD input bit */
        uint64_t ri                      : 1;       /**< RI input bit */
        uint64_t dsr                     : 1;       /**< DSR input bit */
        uint64_t cts                     : 1;       /**< CTS input bit */
        uint64_t ddcd                    : 1;       /**< DCD change bit */
        uint64_t teri                    : 1;       /**< RI change bit */
        uint64_t ddsr                    : 1;       /**< DSR change bit */
        uint64_t dcts                    : 1;       /**< CTS change bit */
#else
        uint64_t dcts                    : 1;
        uint64_t ddsr                    : 1;
        uint64_t teri                    : 1;
        uint64_t ddcd                    : 1;
        uint64_t cts                     : 1;
        uint64_t dsr                     : 1;
        uint64_t ri                      : 1;
        uint64_t dcd                     : 1;
        uint64_t reserved                : 56;
#endif
    } s;
} cvmx_uart_msr_t;


/**
 * CVMX_MIO_UARTX_RBR(0..1) = MIO UART Receive Buffer Register
 *
 * The Receive Buffer Register (RBR) is a read-only register that contains the data byte received on the
 * serial input port (sin). The data in this register is valid only if the Data Ready (DR) bit in the
 * Line status Register (LSR) is set. When the FIFOs are programmed OFF, the data in the RBR must be
 * read before the next data arrives, otherwise it is overwritten, resulting in an overrun error. When
 * the FIFOs are programmed ON, this register accesses the head of the receive FIFO. If the receive FIFO
 * is full (64 characters) and this register is not read before the next data character arrives, then the
 * data already in the FIFO is preserved, but any incoming data is lost. An overrun error also occurs.
 *
 * Note: The Divisor Latch Address Bit (DLAB) of the Line Control Register (LCR) must be clear to access
 * this register.
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 56;      /**< Reserved */
        uint64_t rbr                     : 8;       /**< Receive Buffer Register */
#else
        uint64_t rbr                     : 8;
        uint64_t reserved                : 56;
#endif
    } s;
} cvmx_uart_rbr_t;


/**
 * MIO_UART(0..1)_RFL = MIO UART(0..1) Receive FIFO Level Register
 *  The Receive FIFO Level Register (RFL) indicates the number of data entries in the receive FIFO.
 *
 * - Access using the CVMX_MIO_UARTX_RFL(0..1) CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 57;      /**< Reserved */
        uint64_t rfl                     : 7;       /**< Receive FIFO Level Register */
#else
        uint64_t rfl                     : 7;
        uint64_t reserved                : 57;
#endif
    } s;
} cvmx_uart_rfl_t;


/**
 * MIO_UART(0..1)_RFW = MIO UART(0..1) Receive FIFO Write Register
 *  The Receive FIFO Write Register (RFW) is only valid when FIFO access mode is enabled (FAR bit 0 is
 *  set). When FIFOs are enabled, this register is used to write data to the receive FIFO. Each
 *  consecutive write pushes the new data to the next write location in the receive FIFO. When FIFOs are
 *  not enabled, this register is used to write data to the RBR.
 *
 * - Access using the CVMX_MIO_UARTX_RFW(0..1) CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 54;      /**< Reserved */
        uint64_t rffe                    : 1;       /**< Receive FIFO Framing Error */
        uint64_t rfpe                    : 1;       /**< Receive FIFO Parity Error */
        uint64_t rfwd                    : 8;       /**< Receive FIFO Write Data */
#else
        uint64_t rfwd                    : 8;
        uint64_t rfpe                    : 1;
        uint64_t rffe                    : 1;
        uint64_t reserved                : 54;
#endif
    } s;
} cvmx_uart_rfw_t;


/**
 * MIO_UART(0..1)_SBCR = MIO UART(0..1) Shadow Break Control Register
 *  The Shadow Break Control Register (SBCR) is a shadow register for the BREAK bit (LCR bit 6) that can
 *  be used to remove the burden of having to perform a read-modify-write on the LCR.
 *
 * - Access using the CVMX_MIO_UARTX_SBCR(0..1) CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 63;      /**< Reserved */
        uint64_t sbcr                    : 1;       /**< Shadow Break Control */
#else
        uint64_t sbcr                    : 1;
        uint64_t reserved                : 63;
#endif
    } s;
} cvmx_uart_sbcr_t;


/**
 * CVMX_MIO_UARTX_SCR(0..1) = MIO UART Scratchpad Register
 *
 * The Scratchpad Register (SCR) is an 8-bit read/write register for programmers to use as a temporary
 * storage space.
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 56;      /**< Reserved */
        uint64_t scr                     : 8;       /**< Scratchpad Register */
#else
        uint64_t scr                     : 8;
        uint64_t reserved                : 56;
#endif
    } s;
} cvmx_uart_scr_t;


/**
 * MIO_UART(0..1)_SFE = MIO UART(0..1) Shadow FIFO Enable Register
 *  The Shadow FIFO Enable Register (SFE) is a shadow register for the FIFO enable bit (FCR bit 0) that
 *  can be used to remove the burden of having to store the previously written value to the FCR in memory
 *  and having to mask this value so that only the FIFO enable bit gets updated.
 *
 * - Access using the CVMX_MIO_UARTX_SFE(0..1) CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 63;      /**< Reserved */
        uint64_t sfe                     : 1;       /**< Shadow FIFO Enable */
#else
        uint64_t sfe                     : 1;
        uint64_t reserved                : 63;
#endif
    } s;
} cvmx_uart_sfe_t;


/**
 * MIO_UART(0..1)_SRR = MIO UART(0..1) Software Reset Register
 *  The Software Reset Register (SRR) is a write-only register that resets the UART and/or the receive
 *  FIFO and/or the transmit FIFO.
 *  Bit 0 of the SRR is the UART Soft Reset (USR) bit.  Setting this bit resets the UART.
 *  Bit 1 of the SRR is a shadow copy of the RX FIFO Reset bit (FCR bit 1). This can be used to remove
 *  the burden on software having to store previously written FCR values (which are pretty static) just
 *  to reset the receive FIFO.
 *  Bit 2 of the SRR is a shadow copy of the TX FIFO Reset bit (FCR bit 2). This can be used to remove
 *  the burden on software having to store previously written FCR values (which are pretty static) just
 *  to reset the transmit FIFO.
 *
 * - Access using the CVMX_MIO_UARTX_SRR(0..1) CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 61;      /**< Reserved */
        uint64_t stfr                    : 1;       /**< Shadow TX FIFO Reset */
        uint64_t srfr                    : 1;       /**< Shadow RX FIFO Reset */
        uint64_t usr                     : 1;       /**< UART Soft Reset */
#else
        uint64_t usr                     : 1;
        uint64_t srfr                    : 1;
        uint64_t stfr                    : 1;
        uint64_t reserved                : 61;
#endif
    } s;
} cvmx_uart_srr_t;


/**
 * MIO_UART(0..1)_SRT = MIO UART(0..1) Shadow RX Trigger Register
 *  The Shadow RX Trigger Register (SRT) is a shadow register for the RX Trigger bits (FCR bits 7:6) that
 *  can be used to remove the burden of having to store the previously written value to the FCR in memory
 *  and having to mask this value so that only the RX Trigger bits get updated.
 *
 * - Access using the CVMX_MIO_UARTX_SRT(0..1) CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 62;      /**< Reserved */
        uint64_t srt                     : 2;       /**< Shadow RX Trigger */
#else
        uint64_t srt                     : 2;
        uint64_t reserved                : 62;
#endif
    } s;
} cvmx_uart_srt_t;


/**
 * MIO_UART(0..1)_SRTS = MIO UART(0..1) Shadow Request To Send Register
 *  The Shadow Request To Send Register (SRTS) is a shadow register for the RTS bit (MCR bit 1) that can
 *  be used to remove the burden of having to perform a read-modify-write on the MCR.
 *
 * - Access using the CVMX_MIO_UARTX_SRTS(0..1) CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 63;      /**< Reserved */
        uint64_t srts                    : 1;       /**< Shadow Request To Send */
#else
        uint64_t srts                    : 1;
        uint64_t reserved                : 63;
#endif
    } s;
} cvmx_uart_srts_t;


/**
 * MIO_UART(0..1)_STT = MIO UART(0..1) Shadow TX Trigger Register
 *  The Shadow TX Trigger Register (STT) is a shadow register for the TX Trigger bits (FCR bits 5:4) that
 *  can be used to remove the burden of having to store the previously written value to the FCR in memory
 *  and having to mask this value so that only the TX Trigger bits get updated.
 *
 * - Access using the CVMX_MIO_UARTX_STT(0..1) CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 62;      /**< Reserved */
        uint64_t stt                     : 2;       /**< Shadow TX Trigger */
#else
        uint64_t stt                     : 2;
        uint64_t reserved                : 62;
#endif
    } s;
} cvmx_uart_stt_t;


/**
 * MIO_UART(0..1)_TFL = MIO UART(0..1) Transmit FIFO Level Register
 *  The Transmit FIFO Level Register (TFL) indicates the number of data entries in the transmit FIFO.
 *
 * - Access using the CVMX_MIO_UARTX_TFL(0..1) CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 57;      /**< Reserved */
        uint64_t tfl                     : 7;       /**< Transmit FIFO Level Register */
#else
        uint64_t tfl                     : 7;
        uint64_t reserved                : 57;
#endif
    } s;
} cvmx_uart_tfl_t;


/**
 * MIO_UART(0..1)_TFR = MIO UART(0..1) Transmit FIFO Read Register
 *  The Transmit FIFO Read Register (TFR) is only valid when FIFO access mode is enabled (FAR bit 0 is
 *  set). When FIFOs are enabled, reading this register gives the data at the top of the transmit FIFO.
 *  Each consecutive read pops the transmit FIFO and gives the next data value that is currently at the
 *  top of the FIFO. When FIFOs are not enabled, reading this register gives the data in the THR.
 *
 * - Access using the CVMX_MIO_UARTX_TFR(0..1) CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 56;      /**< Reserved */
        uint64_t tfr                     : 8;       /**< Transmit FIFO Read Register */
#else
        uint64_t tfr                     : 8;
        uint64_t reserved                : 56;
#endif
    } s;
} cvmx_uart_tfr_t;


/**
 * CVMX_MIO_UARTX_THR(0..1) = MIO UART Transmit Holding Register
 *
 * Transmit Holding Register (THR) is a write-only register that contains data to be transmitted on the
 * serial output port (sout). Data can be written to the THR any time that the THR Empty (THRE) bit of
 * the Line Status Register (LSR) is set.
 *
 * If FIFOs are not enabled and THRE is set, writing a single character to the THR clears the THRE. Any
 * additional writes to the THR before the THRE is set again causes the THR data to be overwritten.
 *
 * If FIFOs are enabled and THRE is set (and Programmable THRE mode disabled), 64 characters of data may
 * be written to the THR before the FIFO is full. Any attempt to write data when the FIFO is full results
 * in the write data being lost.
 *
 * Note: The Divisor Latch Address Bit (DLAB) of the Line Control Register (LCR) must be clear to access
 * this register.
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 56;      /**< Reserved */
        uint64_t thr                     : 8;       /**< Transmit Holding Register */
#else
        uint64_t thr                     : 8;
        uint64_t reserved                : 56;
#endif
    } s;
} cvmx_uart_thr_t;


/**
 * MIO_UART(0..1)_USR = MIO UART(0..1) UART Status Register
 *  The UART Status Register (USR) contains UART status information.
 *  USR bit 0 is the BUSY bit.  When set this bit indicates that a serial transfer is in progress, when
 *  clear it indicates that the UART is idle or inactive.
 *  USR bits 1-4 indicate the following FIFO status: TX FIFO Not Full (TFNF), TX FIFO Empty (TFE), RX
 *  FIFO Not Empty (RFNE), and RX FIFO Full (RFF).
 *
 * - Access using the CVMX_MIO_UARTX_USR(0..1) CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 59;      /**< Reserved */
        uint64_t rff                     : 1;       /**< RX FIFO Full */
        uint64_t rfne                    : 1;       /**< RX FIFO Not Empty */
        uint64_t tfe                     : 1;       /**< TX FIFO Empty */
        uint64_t tfnf                    : 1;       /**< TX FIFO Not Full */
        uint64_t busy                    : 1;       /**< Busy bit */
#else
        uint64_t busy                    : 1;
        uint64_t tfnf                    : 1;
        uint64_t tfe                     : 1;
        uint64_t rfne                    : 1;
        uint64_t rff                     : 1;
        uint64_t reserved                : 59;
#endif
    } s;
} cvmx_uart_usr_t;


/**
 * Sets the command buffer parameters
 * The size of the command buffer segments is measured in uint64s.  The pool specifies (1 of 8 free
 * lists to be used when freeing command buffer segments.
 *
 * - Access using the CVMX_ZIP_CMD_BIST_RESULT CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 34;      /**< MBZ */
        uint64_t zip_core                : 26;      /**< BiST result of the ZIP_CORE memories */
        uint64_t zip_ctl                 : 4;       /**< BiST result of the ZIP_CTL memories */
#else
        uint64_t zip_ctl                 : 4;
        uint64_t zip_core                : 26;
        uint64_t reserved                : 34;
#endif
    } s;
} cvmx_zip_cmd_bist_result_t;


/**
 * - Access using the CVMX_ZIP_CMD_BUF CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 6;       /**< MBZ */
        uint64_t dwb                     : 9;       /**< Number of DontWriteBacks in Cache lines */
        uint64_t pool                    : 3;       /**< Free list used to free command buffer segments */
        uint64_t size                    : 13;      /**< Number of uint64s per command buffer segment */
        uint64_t ptr                     : 33;      /**< Initial command buffer pointer[39:7] (128B-aligned) */
#else
        uint64_t ptr                     : 33;
        uint64_t size                    : 13;
        uint64_t pool                    : 3;
        uint64_t dwb                     : 9;
        uint64_t reserved                : 6;
#endif
    } s;
} cvmx_zip_cmd_buf_t;


/**
 * - Access using the CVMX_ZIP_CMD_CTL CSR
 */
typedef union
{
    uint64_t u64;
    struct
    {
#if __BYTE_ORDER == __BIG_ENDIAN
        uint64_t reserved                : 62;      /**< MBZ */
        uint64_t forceclk                : 1;       /**< Force zip_ctl__clock_on_b == 1 when set */
        uint64_t reset                   : 1;       /**< Reset oneshot pulse for zip core */
#else
        uint64_t reset                   : 1;
        uint64_t forceclk                : 1;
        uint64_t reserved                : 62;
#endif
    } s;
} cvmx_zip_cmd_ctl_t;

/* End of Control and Status Register (CSR) definitions */

#endif /* __CVMX_CSR_PASS1_H__ */

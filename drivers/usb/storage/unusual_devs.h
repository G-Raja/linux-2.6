/* Driver for USB Mass Storage compliant devices
 * Ununsual Devices File
 *
 * $Id: unusual_devs.h,v 1.32 2002/02/25 02:41:24 mdharm Exp $
 *
 * Current development and maintenance by:
 *   (c) 2000-2002 Matthew Dharm (mdharm-usb@one-eyed-alien.net)
 *
 * Initial work by:
 *   (c) 2000 Adam J. Richter (adam@yggdrasil.com), Yggdrasil Computing, Inc.
 *
 * Please see http://www.one-eyed-alien.net/~mdharm/linux-usb for more
 * information about this driver.
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation; either version 2, or (at your option) any
 * later version.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program; if not, write to the Free Software Foundation, Inc.,
 * 675 Mass Ave, Cambridge, MA 02139, USA.
 */

/* IMPORTANT NOTE: This file must be included in another file which does
 * the following thing for it to work:
 * The macro UNUSUAL_DEV() must be defined before this file is included
 */
#include <linux/config.h>

/* If you edit this file, please try to keep it sorted first by VendorID,
 * then by ProductID.
 *
 * If you want to add an entry for this file, be sure to include the
 * following information:
 *	- a patch that adds the entry for your device, including your
 *	  email address right above the entry (plus maybe a brief
 *	  explanation of the reason for the entry),
 *	- a copy of /proc/bus/usb/devices with your device plugged in
 *	  running with this patch.
 * Send your submission to either Phil Dibowitz <phil@ipom.com> or
 * Alan Stern <stern@rowland.harvard.edu>, and don't forget to CC: the
 * USB development list <linux-usb-devel@lists.sourceforge.net>.
 */

UNUSUAL_DEV(  0x03ee, 0x6901, 0x0000, 0x0100,
		"Mitsumi",
		"USB FDD",
		US_SC_DEVICE, US_PR_DEVICE, NULL,
		US_FL_SINGLE_LUN ),

UNUSUAL_DEV(  0x03f0, 0x0107, 0x0200, 0x0200, 
		"HP",
		"CD-Writer+",
		US_SC_8070, US_PR_CB, NULL, 0), 

#ifdef CONFIG_USB_STORAGE_HP8200e
UNUSUAL_DEV(  0x03f0, 0x0207, 0x0001, 0x0001, 
		"HP",
		"CD-Writer+ 8200e",
		US_SC_8070, US_PR_SCM_ATAPI, init_8200e, 0), 

UNUSUAL_DEV(  0x03f0, 0x0307, 0x0001, 0x0001, 
		"HP",
		"CD-Writer+ CD-4e",
		US_SC_8070, US_PR_SCM_ATAPI, init_8200e, 0), 
#endif

/* Deduced by Jonathan Woithe <jwoithe@physics.adelaide.edu.au>
 * Entry needed for flags: US_FL_FIX_INQUIRY because initial inquiry message
 * always fails and confuses drive.
 */
UNUSUAL_DEV(  0x0411, 0x001c, 0x0113, 0x0113,
		"Buffalo",
		"DUB-P40G HDD",
		US_SC_DEVICE, US_PR_DEVICE, NULL,
		US_FL_FIX_INQUIRY ),

#ifdef CONFIG_USB_STORAGE_DPCM
UNUSUAL_DEV(  0x0436, 0x0005, 0x0100, 0x0100,
		"Microtech",
		"CameraMate (DPCM_USB)",
 		US_SC_SCSI, US_PR_DPCM_USB, NULL, 0 ),
#endif

/* Patch submitted by Philipp Friedrich <philipp@void.at> */
UNUSUAL_DEV(  0x0482, 0x0100, 0x0100, 0x0100,
		"Kyocera",
		"Finecam S3x",
		US_SC_8070, US_PR_CB, NULL, US_FL_FIX_INQUIRY),

/* Patch submitted by Philipp Friedrich <philipp@void.at> */
UNUSUAL_DEV(  0x0482, 0x0101, 0x0100, 0x0100,
		"Kyocera",
		"Finecam S4",
		US_SC_8070, US_PR_CB, NULL, US_FL_FIX_INQUIRY),

/* Patch submitted by Stephane Galles <stephane.galles@free.fr> */
UNUSUAL_DEV(  0x0482, 0x0103, 0x0100, 0x0100,
		"Kyocera",
		"Finecam S5",
		US_SC_DEVICE, US_PR_DEVICE, NULL, US_FL_FIX_INQUIRY),

/* Patch for Kyocera Finecam L3
 * Submitted by Michael Krauth <michael.krauth@web.de>
 * and Alessandro Fracchetti <al.fracchetti@tin.it>
 */
UNUSUAL_DEV(  0x0482, 0x0105, 0x0100, 0x0100,
		"Kyocera",
		"Finecam L3",
		US_SC_SCSI, US_PR_BULK, NULL,
		US_FL_FIX_INQUIRY),

/* Reported by Paul Stewart <stewart@wetlogic.net>
 * This entry is needed because the device reports Sub=ff */
UNUSUAL_DEV(  0x04a4, 0x0004, 0x0001, 0x0001,
		"Hitachi",
		"DVD-CAM DZ-MV100A Camcorder",
		US_SC_SCSI, US_PR_CB, NULL, US_FL_SINGLE_LUN),

/* Reported by Simon Levitt <simon@whattf.com>
 * This entry needs Sub and Proto fields */
UNUSUAL_DEV(  0x04b8, 0x0601, 0x0100, 0x0100,
		"Epson",
		"875DC Storage",
		US_SC_SCSI, US_PR_CB, NULL, US_FL_FIX_INQUIRY),

/* Reported by Khalid Aziz <khalid@gonehiking.org>
 * This entry is needed because the device reports Sub=ff */
UNUSUAL_DEV(  0x04b8, 0x0602, 0x0110, 0x0110,
		"Epson",
		"785EPX Storage",
		US_SC_SCSI, US_PR_BULK, NULL, US_FL_SINGLE_LUN),

/* Not sure who reported this originally but
 * Pavel Machek <pavel@ucw.cz> reported that the extra US_FL_SINGLE_LUN
 * flag be added */
UNUSUAL_DEV(  0x04cb, 0x0100, 0x0000, 0x2210,
		"Fujifilm",
		"FinePix 1400Zoom",
		US_SC_UFI, US_PR_DEVICE, NULL, US_FL_FIX_INQUIRY | US_FL_SINGLE_LUN),

/* Reported by Peter W�chtler <pwaechtler@loewe-komp.de>
 * The device needs the flags only.
 */
UNUSUAL_DEV(  0x04ce, 0x0002, 0x0074, 0x0074,
		"ScanLogic",
		"SL11R-IDE",
		US_SC_DEVICE, US_PR_DEVICE, NULL,
		US_FL_FIX_INQUIRY),

/* Reported by Kriston Fincher <kriston@airmail.net>
 * Patch submitted by Sean Millichamp <sean@bruenor.org>
 * This is to support the Panasonic PalmCam PV-SD4090
 * This entry is needed because the device reports Sub=ff 
 */
UNUSUAL_DEV(  0x04da, 0x0901, 0x0100, 0x0200,
		"Panasonic",
		"LS-120 Camera",
		US_SC_UFI, US_PR_DEVICE, NULL, 0),

/* From Yukihiro Nakai, via zaitcev@yahoo.com.
 * This is needed for CB instead of CBI */
UNUSUAL_DEV(  0x04da, 0x0d05, 0x0000, 0x0000,
		"Sharp CE-CW05",
		"CD-R/RW Drive",
		US_SC_8070, US_PR_CB, NULL, 0),

/* Reported by Adriaan Penning <a.penning@luon.net>
 * Note that these cameras report "Medium not present" after
 * ALLOW_MEDIUM_REMOVAL, so they also need to be marked
 * NOT_LOCKABLE in the SCSI blacklist (and the vendor is MATSHITA). */
UNUSUAL_DEV(  0x04da, 0x2372, 0x0000, 0x9999,
		"Panasonic",
		"DMC-LCx Camera",
		US_SC_DEVICE, US_PR_DEVICE, NULL,
		US_FL_FIX_CAPACITY ),

/* Most of the following entries were developed with the help of
 * Shuttle/SCM directly.
 */
UNUSUAL_DEV(  0x04e6, 0x0001, 0x0200, 0x0200, 
		"Matshita",
		"LS-120",
		US_SC_8020, US_PR_CB, NULL, 0),

UNUSUAL_DEV(  0x04e6, 0x0002, 0x0100, 0x0100, 
		"Shuttle",
		"eUSCSI Bridge",
		US_SC_DEVICE, US_PR_DEVICE, usb_stor_euscsi_init, 
		US_FL_SCM_MULT_TARG ), 

#ifdef CONFIG_USB_STORAGE_SDDR09
UNUSUAL_DEV(  0x04e6, 0x0003, 0x0000, 0x9999, 
		"Sandisk",
		"ImageMate SDDR09",
		US_SC_SCSI, US_PR_EUSB_SDDR09, NULL,
		US_FL_SINGLE_LUN ),

/* This entry is from Andries.Brouwer@cwi.nl */
UNUSUAL_DEV(  0x04e6, 0x0005, 0x0100, 0x0208,
		"SCM Microsystems",
		"eUSB SmartMedia / CompactFlash Adapter",
		US_SC_SCSI, US_PR_DPCM_USB, sddr09_init, 
		0), 
#endif

UNUSUAL_DEV(  0x04e6, 0x0006, 0x0100, 0x0205, 
		"Shuttle",
		"eUSB MMC Adapter",
		US_SC_SCSI, US_PR_DEVICE, NULL, 
		US_FL_SINGLE_LUN), 

UNUSUAL_DEV(  0x04e6, 0x0007, 0x0100, 0x0200, 
		"Sony",
		"Hifd",
		US_SC_SCSI, US_PR_CB, NULL, 
		US_FL_SINGLE_LUN), 

UNUSUAL_DEV(  0x04e6, 0x0009, 0x0200, 0x0200, 
		"Shuttle",
		"eUSB ATA/ATAPI Adapter",
		US_SC_8020, US_PR_CB, NULL, 0),

UNUSUAL_DEV(  0x04e6, 0x000a, 0x0200, 0x0200, 
		"Shuttle",
		"eUSB CompactFlash Adapter",
		US_SC_8020, US_PR_CB, NULL, 0),

UNUSUAL_DEV(  0x04e6, 0x000B, 0x0100, 0x0100, 
		"Shuttle",
		"eUSCSI Bridge",
		US_SC_SCSI, US_PR_BULK, usb_stor_euscsi_init, 
		US_FL_SCM_MULT_TARG ), 

UNUSUAL_DEV(  0x04e6, 0x000C, 0x0100, 0x0100, 
		"Shuttle",
		"eUSCSI Bridge",
		US_SC_SCSI, US_PR_BULK, usb_stor_euscsi_init, 
		US_FL_SCM_MULT_TARG ), 

UNUSUAL_DEV(  0x04e6, 0x0101, 0x0200, 0x0200, 
		"Shuttle",
		"CD-RW Device",
		US_SC_8020, US_PR_CB, NULL, 0),

/* Entry and supporting patch by Theodore Kilgore <kilgota@auburn.edu>.
 * Device uses standards-violating 32-byte Bulk Command Block Wrappers and
 * reports itself as "Proprietary SCSI Bulk." Cf. device entry 0x084d:0x0011.
 */

UNUSUAL_DEV(  0x04fc, 0x80c2, 0x0100, 0x0100,
		"Kobian Mercury",
		"Binocam DCB-132",
		US_SC_DEVICE, US_PR_DEVICE, NULL,
		US_FL_BULK32),

/* Reported by Bob Sass <rls@vectordb.com> -- only rev 1.33 tested */
UNUSUAL_DEV(  0x050d, 0x0115, 0x0133, 0x0133,
		"Belkin",
		"USB SCSI Adaptor",
		US_SC_SCSI, US_PR_BULK, usb_stor_euscsi_init,
		US_FL_SCM_MULT_TARG ),

/* Iomega Clik! Drive 
 * Reported by David Chatenay <dchatenay@hotmail.com>
 * The reason this is needed is not fully known.
 */
UNUSUAL_DEV(  0x0525, 0xa140, 0x0100, 0x0100,
		"Iomega",
		"USB Clik! 40",
		US_SC_8070, US_PR_BULK, NULL,
		US_FL_FIX_INQUIRY ),

/* Yakumo Mega Image 37
 * Submitted by Stephan Fuhrmann <atomenergie@t-online.de> */
UNUSUAL_DEV(  0x052b, 0x1801, 0x0100, 0x0100,
		"Tekom Technologies, Inc",
		"300_CAMERA",
		US_SC_DEVICE, US_PR_DEVICE, NULL,
		US_FL_IGNORE_RESIDUE ),

/* Another Yakumo camera.
 * Reported by Michele Alzetta <michele.alzetta@aliceposta.it> */
UNUSUAL_DEV(  0x052b, 0x1804, 0x0100, 0x0100,
		"Tekom Technologies, Inc",
		"300_CAMERA",
		US_SC_DEVICE, US_PR_DEVICE, NULL,
		US_FL_IGNORE_RESIDUE ),

/* Reported by Iacopo Spalletti <avvisi@spalletti.it> */
UNUSUAL_DEV(  0x052b, 0x1807, 0x0100, 0x0100,
		"Tekom Technologies, Inc",
		"300_CAMERA",
		US_SC_DEVICE, US_PR_DEVICE, NULL,
		US_FL_IGNORE_RESIDUE ),

/* Yakumo Mega Image 47
 * Reported by Bjoern Paetzel <kolrabi@kolrabi.de> */
UNUSUAL_DEV(  0x052b, 0x1905, 0x0100, 0x0100,
		"Tekom Technologies, Inc",
		"400_CAMERA",
		US_SC_DEVICE, US_PR_DEVICE, NULL,
		US_FL_IGNORE_RESIDUE ),

/* Reported by Paul Ortyl <ortylp@3miasto.net>
 * Note that it's similar to the device above, only different prodID */
UNUSUAL_DEV(  0x052b, 0x1911, 0x0100, 0x0100,
		"Tekom Technologies, Inc",
		"400_CAMERA",
		US_SC_DEVICE, US_PR_DEVICE, NULL,
		US_FL_IGNORE_RESIDUE ),

/* This entry is needed because the device reports Sub=ff */
UNUSUAL_DEV(  0x054c, 0x0010, 0x0106, 0x0450, 
		"Sony",
		"DSC-S30/S70/S75/505V/F505/F707/F717/P8", 
		US_SC_SCSI, US_PR_DEVICE, NULL,
		US_FL_SINGLE_LUN ),

/* This entry is needed because the device reports Sub=ff */
UNUSUAL_DEV(  0x054c, 0x0010, 0x0500, 0x0500, 
               "Sony",
               "DSC-T1", 
               US_SC_8070, US_PR_DEVICE, NULL,
               US_FL_SINGLE_LUN ),


/* Reported by wim@geeks.nl */
UNUSUAL_DEV(  0x054c, 0x0025, 0x0100, 0x0100, 
		"Sony",
		"Memorystick NW-MS7",
		US_SC_DEVICE, US_PR_DEVICE, NULL,
		US_FL_SINGLE_LUN ),

#ifdef CONFIG_USB_STORAGE_ISD200
UNUSUAL_DEV(  0x054c, 0x002b, 0x0100, 0x0110,
		"Sony",
		"Portable USB Harddrive V2",
		US_SC_ISD200, US_PR_BULK, isd200_Initialization,
		0 ),
#endif

UNUSUAL_DEV(  0x054c, 0x002d, 0x0100, 0x0100, 
		"Sony",
		"Memorystick MSAC-US1",
		US_SC_DEVICE, US_PR_DEVICE, NULL,
		US_FL_SINGLE_LUN ),

/* Submitted by Klaus Mueller <k.mueller@intershop.de> */
UNUSUAL_DEV(  0x054c, 0x002e, 0x0106, 0x0310, 
		"Sony",
		"Handycam",
		US_SC_SCSI, US_PR_DEVICE, NULL,
		US_FL_SINGLE_LUN ),

/* Submitted by Rajesh Kumble Nayak <nayak@obs-nice.fr> */
UNUSUAL_DEV(  0x054c, 0x002e, 0x0500, 0x0500, 
		"Sony",
		"Handycam HC-85",
		US_SC_UFI, US_PR_DEVICE, NULL,
		US_FL_SINGLE_LUN ),

UNUSUAL_DEV(  0x054c, 0x0032, 0x0000, 0x9999,
		"Sony",
		"Memorystick MSC-U01N",
		US_SC_DEVICE, US_PR_DEVICE, NULL,
		US_FL_SINGLE_LUN ),

/* Submitted by Michal Mlotek <mlotek@foobar.pl> */
UNUSUAL_DEV(  0x054c, 0x0058, 0x0000, 0x9999,
		"Sony",
		"PEG N760c Memorystick",
		US_SC_DEVICE, US_PR_DEVICE, NULL,
		US_FL_FIX_INQUIRY ),
		
UNUSUAL_DEV(  0x054c, 0x0069, 0x0000, 0x9999,
		"Sony",
		"Memorystick MSC-U03",
		US_SC_UFI, US_PR_CB, NULL,
		US_FL_SINGLE_LUN ),

/* Submitted by Nathan Babb <nathan@lexi.com> */
UNUSUAL_DEV(  0x054c, 0x006d, 0x0000, 0x9999,
		"Sony",
		"PEG Mass Storage",
		US_SC_DEVICE, US_PR_DEVICE, NULL,
		US_FL_FIX_INQUIRY ),

/* Submitted by Mike Alborn <malborn@deandra.homeip.net> */
UNUSUAL_DEV(  0x054c, 0x016a, 0x0000, 0x9999,
		"Sony",
		"PEG Mass Storage",
		US_SC_DEVICE, US_PR_DEVICE, NULL,
		US_FL_FIX_INQUIRY ),
		
/* Submitted by Frank Engel <frankie@cse.unsw.edu.au> */
UNUSUAL_DEV(  0x054c, 0x0099, 0x0000, 0x9999,
                "Sony",
                "PEG Mass Storage",
                US_SC_DEVICE, US_PR_DEVICE, NULL,
                US_FL_FIX_INQUIRY ),

		
UNUSUAL_DEV(  0x057b, 0x0000, 0x0000, 0x0299, 
		"Y-E Data",
		"Flashbuster-U",
		US_SC_DEVICE,  US_PR_CB, NULL,
		US_FL_SINGLE_LUN),

UNUSUAL_DEV(  0x057b, 0x0000, 0x0300, 0x9999, 
		"Y-E Data",
		"Flashbuster-U",
		US_SC_DEVICE,  US_PR_DEVICE, NULL,
		US_FL_SINGLE_LUN),

/* Reported by Johann Cardon <johann.cardon@free.fr>
 * This entry is needed only because the device reports
 * bInterfaceClass = 0xff (vendor-specific)
 */
UNUSUAL_DEV(  0x057b, 0x0022, 0x0000, 0x9999, 
		"Y-E Data",
		"Silicon Media R/W",
		US_SC_DEVICE, US_PR_DEVICE, NULL, 0),

/* Fabrizio Fellini <fello@libero.it> */
UNUSUAL_DEV(  0x0595, 0x4343, 0x0000, 0x2210,
		"Fujifilm",
		"Digital Camera EX-20 DSC",
		US_SC_8070, US_PR_DEVICE, NULL, 0 ),

/* The entry was here before I took over, and had US_SC_RBC. It turns
 * out that isn't needed. Additionally, Torsten Eriksson
 * <Torsten.Eriksson@bergianska.se> is able to use his device fine
 * without this entry at all - but I don't suspect that will be true
 * for all users (the protocol is likely needed), so is staying at
 * this time. - Phil Dibowitz <phil@ipom.com>
 */
UNUSUAL_DEV(  0x059f, 0xa601, 0x0200, 0x0200, 
		"LaCie",
		"USB Hard Disk",
		US_SC_DEVICE, US_PR_CB, NULL, 0 ),

/* Submitted by Joel Bourquard <numlock@freesurf.ch>
 * Some versions of this device need the SubClass and Protocol overrides
 * while others don't.
 */
UNUSUAL_DEV(  0x05ab, 0x0060, 0x1104, 0x1110,
		"In-System",
		"PyroGate External CD-ROM Enclosure (FCD-523)",
		US_SC_SCSI, US_PR_BULK, NULL,
		US_FL_NEED_OVERRIDE ),

#ifdef CONFIG_USB_STORAGE_ISD200
UNUSUAL_DEV(  0x05ab, 0x0031, 0x0100, 0x0110,
		"In-System",
		"USB/IDE Bridge (ATA/ATAPI)",
		US_SC_ISD200, US_PR_BULK, isd200_Initialization,
		0 ),

UNUSUAL_DEV(  0x05ab, 0x0301, 0x0100, 0x0110,
		"In-System",
		"Portable USB Harddrive V2",
		US_SC_ISD200, US_PR_BULK, isd200_Initialization,
		0 ),

UNUSUAL_DEV(  0x05ab, 0x0351, 0x0100, 0x0110,
		"In-System",
		"Portable USB Harddrive V2",
		US_SC_ISD200, US_PR_BULK, isd200_Initialization,
		0 ),

UNUSUAL_DEV(  0x05ab, 0x5701, 0x0100, 0x0110,
		"In-System",
		"USB Storage Adapter V2",
		US_SC_ISD200, US_PR_BULK, isd200_Initialization,
		0 ),
#endif

/* Reported by Avi Kivity <avi@argo.co.il> */
UNUSUAL_DEV( 0x05ac, 0x1203, 0x0001, 0x0001,
		"Apple",
		"iPod",
		US_SC_DEVICE, US_PR_DEVICE, NULL,
		US_FL_FIX_CAPACITY ),

#ifdef CONFIG_USB_STORAGE_JUMPSHOT
UNUSUAL_DEV(  0x05dc, 0x0001, 0x0000, 0x0001,
		"Lexar",
		"Jumpshot USB CF Reader",
		US_SC_SCSI, US_PR_JUMPSHOT, NULL,
		US_FL_NEED_OVERRIDE ),
#endif

/* Reported by Blake Matheny <bmatheny@purdue.edu> */
UNUSUAL_DEV(  0x05dc, 0xb002, 0x0000, 0x0113,
		"Lexar",
		"USB CF Reader",
		US_SC_DEVICE, US_PR_DEVICE, NULL,
		US_FL_FIX_INQUIRY ),

/* Reported by Hanno Boeck <hanno@gmx.de>
 * Taken from the Lycoris Kernel */
UNUSUAL_DEV(  0x0636, 0x0003, 0x0000, 0x9999,
		"Vivitar",
		"Vivicam 35Xx",
		US_SC_SCSI, US_PR_BULK, NULL,
		US_FL_FIX_INQUIRY ),

UNUSUAL_DEV(  0x0644, 0x0000, 0x0100, 0x0100, 
		"TEAC",
		"Floppy Drive",
		US_SC_UFI, US_PR_CB, NULL, 0 ), 

#ifdef CONFIG_USB_STORAGE_SDDR09
UNUSUAL_DEV(  0x066b, 0x0105, 0x0100, 0x0100, 
		"Olympus",
		"Camedia MAUSB-2",
		US_SC_SCSI, US_PR_EUSB_SDDR09, NULL,
		US_FL_SINGLE_LUN ),
#endif

/* Reported by Darsen Lu <darsen@micro.ee.nthu.edu.tw> */
UNUSUAL_DEV( 0x066f, 0x8000, 0x0001, 0x0001,
		"SigmaTel",
		"USBMSC Audio Player",
		US_SC_DEVICE, US_PR_DEVICE, NULL,
		US_FL_FIX_CAPACITY ),

/* Submitted by Benny Sjostrand <benny@hostmobility.com> */
UNUSUAL_DEV( 0x0686, 0x4011, 0x0001, 0x0001,
		"Minolta",
		"Dimage F300",
		US_SC_SCSI, US_PR_BULK, NULL, 0 ),

/* Reported by Miguel A. Fosas <amn3s1a@ono.com> */
UNUSUAL_DEV(  0x0686, 0x4017, 0x0001, 0x0001,
                "Minolta",
                "DIMAGE E223",
                US_SC_SCSI, US_PR_DEVICE, NULL, 0 ),

UNUSUAL_DEV(  0x0693, 0x0002, 0x0100, 0x0100, 
		"Hagiwara",
		"FlashGate SmartMedia",
		US_SC_SCSI, US_PR_BULK, NULL, 0 ),

UNUSUAL_DEV(  0x0693, 0x0005, 0x0100, 0x0100,
		"Hagiwara",
		"Flashgate",
		US_SC_SCSI, US_PR_BULK, NULL, 0 ), 

UNUSUAL_DEV(  0x0781, 0x0001, 0x0200, 0x0200, 
		"Sandisk",
		"ImageMate SDDR-05a",
		US_SC_SCSI, US_PR_CB, NULL,
		US_FL_SINGLE_LUN ),

#if !defined(CONFIG_BLK_DEV_UB) && !defined(CONFIG_BLK_DEV_UB_MODULE)
UNUSUAL_DEV(  0x0781, 0x0002, 0x0009, 0x0009, 
		"Sandisk",
		"ImageMate SDDR-31",
		US_SC_DEVICE, US_PR_DEVICE, NULL,
		US_FL_IGNORE_SER ),
#endif

UNUSUAL_DEV(  0x0781, 0x0100, 0x0100, 0x0100,
		"Sandisk",
		"ImageMate SDDR-12",
		US_SC_SCSI, US_PR_CB, NULL,
		US_FL_SINGLE_LUN ),

#ifdef CONFIG_USB_STORAGE_SDDR09
UNUSUAL_DEV(  0x0781, 0x0200, 0x0000, 0x9999, 
		"Sandisk",
		"ImageMate SDDR-09",
		US_SC_SCSI, US_PR_EUSB_SDDR09, NULL,
		US_FL_SINGLE_LUN ),
#endif

#ifdef CONFIG_USB_STORAGE_FREECOM
UNUSUAL_DEV(  0x07ab, 0xfc01, 0x0000, 0x9999,
		"Freecom",
		"USB-IDE",
		US_SC_QIC, US_PR_FREECOM, freecom_init, 0),
#endif

/* Reported by Eero Volotinen <eero@ping-viini.org> */
UNUSUAL_DEV(  0x07ab, 0xfccd, 0x0406, 0x0406,
		"Freecom Technologies",
		"FHD-Classic",
		US_SC_DEVICE, US_PR_DEVICE, NULL,
		US_FL_FIX_CAPACITY),

UNUSUAL_DEV(  0x07af, 0x0004, 0x0100, 0x0133, 
		"Microtech",
		"USB-SCSI-DB25",
		US_SC_SCSI, US_PR_BULK, usb_stor_euscsi_init,
		US_FL_SCM_MULT_TARG ), 

UNUSUAL_DEV(  0x07af, 0x0005, 0x0100, 0x0100, 
		"Microtech",
		"USB-SCSI-HD50",
		US_SC_SCSI, US_PR_BULK, usb_stor_euscsi_init,
		US_FL_SCM_MULT_TARG ), 

#ifdef CONFIG_USB_STORAGE_DPCM
UNUSUAL_DEV(  0x07af, 0x0006, 0x0100, 0x0100,
		"Microtech",
		"CameraMate (DPCM_USB)",
 		US_SC_SCSI, US_PR_DPCM_USB, NULL, 0 ),
#endif

#ifdef CONFIG_USB_STORAGE_DATAFAB
UNUSUAL_DEV(  0x07c4, 0xa000, 0x0000, 0x0015,
		"Datafab",
		"MDCFE-B USB CF Reader",
		US_SC_SCSI, US_PR_DATAFAB, NULL,
		0 ),

/*
 * The following Datafab-based devices may or may not work
 * using the current driver...the 0xffff is arbitrary since I
 * don't know what device versions exist for these guys.
 *
 * The 0xa003 and 0xa004 devices in particular I'm curious about.
 * I'm told they exist but so far nobody has come forward to say that
 * they work with this driver.  Given the success we've had getting
 * other Datafab-based cards operational with this driver, I've decided
 * to leave these two devices in the list.
 */
UNUSUAL_DEV( 0x07c4, 0xa001, 0x0000, 0xffff,
		"SIIG/Datafab",
		"SIIG/Datafab Memory Stick+CF Reader/Writer",
		US_SC_SCSI, US_PR_DATAFAB, NULL,
		0 ),

UNUSUAL_DEV( 0x07c4, 0xa003, 0x0000, 0xffff,
		"Datafab/Unknown",
		"Datafab-based Reader",
		US_SC_SCSI, US_PR_DATAFAB, NULL,
		0 ),

UNUSUAL_DEV( 0x07c4, 0xa004, 0x0000, 0xffff,
		"Datafab/Unknown",
		"Datafab-based Reader",
		US_SC_SCSI, US_PR_DATAFAB, NULL,
		0 ),

UNUSUAL_DEV( 0x07c4, 0xa005, 0x0000, 0xffff,
		"PNY/Datafab",
		"PNY/Datafab CF+SM Reader",
		US_SC_SCSI, US_PR_DATAFAB, NULL,
		0 ),

UNUSUAL_DEV( 0x07c4, 0xa006, 0x0000, 0xffff,
		"Simple Tech/Datafab",
		"Simple Tech/Datafab CF+SM Reader",
		US_SC_SCSI, US_PR_DATAFAB, NULL,
		0 ),
#endif
		
#ifdef CONFIG_USB_STORAGE_SDDR55
/* Contributed by Peter Waechtler */
UNUSUAL_DEV( 0x07c4, 0xa103, 0x0000, 0x9999,
		"Datafab",
		"MDSM-B reader",
		US_SC_SCSI, US_PR_SDDR55, NULL,
		US_FL_FIX_INQUIRY ),
#endif

#ifdef CONFIG_USB_STORAGE_DATAFAB
/* Submitted by Olaf Hering <olh@suse.de> */
UNUSUAL_DEV(  0x07c4, 0xa109, 0x0000, 0xffff,
		"Datafab Systems, Inc.",
		"USB to CF + SM Combo (LC1)",
		US_SC_SCSI, US_PR_DATAFAB, NULL,
		0 ),
#endif
#ifdef CONFIG_USB_STORAGE_SDDR55
/* SM part - aeb <Andries.Brouwer@cwi.nl> */
UNUSUAL_DEV(  0x07c4, 0xa109, 0x0000, 0xffff,
		"Datafab Systems, Inc.",
		"USB to CF + SM Combo (LC1)",
		US_SC_SCSI, US_PR_SDDR55, NULL,
		US_FL_SINGLE_LUN ),
#endif

/* Datafab KECF-USB / Sagatek DCS-CF / Simpletech Flashlink UCF-100
 * Only revision 1.13 tested (same for all of the above devices,
 * based on the Datafab DF-UG-07 chip).  Needed for US_FL_FIX_INQUIRY.
 * Submitted by Marek Michalkiewicz <marekm@amelek.gda.pl>.
 * See also http://martin.wilck.bei.t-online.de/#kecf .
 */
UNUSUAL_DEV(  0x07c4, 0xa400, 0x0000, 0xffff,
		"Datafab",
		"KECF-USB",
		US_SC_DEVICE, US_PR_DEVICE, NULL,
		US_FL_FIX_INQUIRY ),

/* Casio QV 2x00/3x00/4000/8000 digital still cameras are not conformant
 * to the USB storage specification in two ways:
 * - They tell us they are using transport protocol CBI. In reality they
 *   are using transport protocol CB.
 * - They don't like the INQUIRY command. So we must handle this command
 *   of the SCSI layer ourselves.
 * - Some cameras with idProduct=0x1001 and bcdDevice=0x1000 have
 *   bInterfaceProtocol=0x00 (US_PR_CBI) while others have 0x01 (US_PR_CB).
 *   So don't remove the US_PR_CB override!
 * - Cameras with bcdDevice=0x9009 require the US_SC_8070 override.
 */
UNUSUAL_DEV( 0x07cf, 0x1001, 0x1000, 0x9999,
		"Casio",
		"QV DigitalCamera",
		US_SC_8070, US_PR_CB, NULL,
		US_FL_NEED_OVERRIDE | US_FL_FIX_INQUIRY ),

/* Submitted by Hartmut Wahl <hwahl@hwahl.de>*/
UNUSUAL_DEV( 0x0839, 0x000a, 0x0001, 0x0001,
		"Samsung",
		"Digimax 410",
		US_SC_DEVICE, US_PR_DEVICE, NULL,
		US_FL_FIX_INQUIRY),

/* Entry and supporting patch by Theodore Kilgore <kilgota@auburn.edu>.
 * Flag will support Bulk devices which use a standards-violating 32-byte
 * Command Block Wrapper. Here, the "DC2MEGA" cameras (several brands) with
 * Grandtech GT892x chip, which request "Proprietary SCSI Bulk" support.
 */

UNUSUAL_DEV(  0x084d, 0x0011, 0x0110, 0x0110,
		"Grandtech",
		"DC2MEGA",
		US_SC_DEVICE, US_PR_DEVICE, NULL,
		US_FL_BULK32),


/* Entry needed for flags. Moreover, all devices with this ID use
 * bulk-only transport, but _some_ falsely report Control/Bulk instead.
 * One example is "Trumpion Digital Research MYMP3".
 * Submitted by Bjoern Brill <brill(at)fs.math.uni-frankfurt.de>
 */
UNUSUAL_DEV(  0x090a, 0x1001, 0x0100, 0x0100,
		"Trumpion",
		"t33520 USB Flash Card Controller",
		US_SC_DEVICE, US_PR_BULK, NULL,
		US_FL_NEED_OVERRIDE ),

/* Trumpion Microelectronics MP3 player (felipe_alfaro@linuxmail.org) */
UNUSUAL_DEV( 0x090a, 0x1200, 0x0000, 0x9999,
		"Trumpion",
		"MP3 player",
		US_SC_RBC, US_PR_BULK, NULL,
		0 ),

/* aeb */
UNUSUAL_DEV( 0x090c, 0x1132, 0x0000, 0xffff,
		"Feiya",
		"5-in-1 Card Reader",
		US_SC_DEVICE, US_PR_DEVICE, NULL,
		US_FL_FIX_CAPACITY ),

/* This Pentax still camera is not conformant
 * to the USB storage specification: -
 * - It does not like the INQUIRY command. So we must handle this command
 *   of the SCSI layer ourselves.
 * Tested on Rev. 10.00 (0x1000)
 * Submitted by James Courtier-Dutton <James@superbug.demon.co.uk>
 */
UNUSUAL_DEV( 0x0a17, 0x0004, 0x1000, 0x1000,
                "Pentax",
                "Optio 2/3/400",
                US_SC_DEVICE, US_PR_DEVICE, NULL,
                US_FL_FIX_INQUIRY ),


/* Submitted by Per Winkvist <per.winkvist@uk.com> */
UNUSUAL_DEV( 0x0a17, 0x006, 0x0000, 0xffff,
                "Pentax",
                "Optio S/S4",
                US_SC_DEVICE, US_PR_DEVICE, NULL,
                US_FL_FIX_INQUIRY ),
		
#ifdef CONFIG_USB_STORAGE_ISD200
UNUSUAL_DEV(  0x0bf6, 0xa001, 0x0100, 0x0110,
		"ATI",
		"USB Cable 205",
		US_SC_ISD200, US_PR_BULK, isd200_Initialization,
		0 ),
#endif

#ifdef CONFIG_USB_STORAGE_DATAFAB
UNUSUAL_DEV( 0x0c0b, 0xa109, 0x0000, 0xffff,
	       "Acomdata",
	       "CF",
	       US_SC_SCSI, US_PR_DATAFAB, NULL,
	       US_FL_SINGLE_LUN ),
#endif
#ifdef CONFIG_USB_STORAGE_SDDR55
UNUSUAL_DEV( 0x0c0b, 0xa109, 0x0000, 0xffff,
	       "Acomdata",
	       "SM",
	       US_SC_SCSI, US_PR_SDDR55, NULL,
	       US_FL_SINGLE_LUN ),
#endif

/* Submitted by: Nick Sillik <n.sillik@temple.edu>
 * Needed for OneTouch extension to usb-storage
 *
 */
#ifdef CONFIG_USB_STORAGE_ONETOUCH
	UNUSUAL_DEV(  0x0d49, 0x7010, 0x0000, 0x9999,
			"Maxtor",
			"OneTouch External Harddrive",
			US_SC_DEVICE, US_PR_DEVICE, onetouch_connect_input,
			0),
#endif

/* Submitted by Joris Struyve <joris@struyve.be> */
UNUSUAL_DEV( 0x0d96, 0x410a, 0x0001, 0xffff,
		"Medion",
		"MD 7425",
		US_SC_DEVICE, US_PR_DEVICE, NULL,
		US_FL_FIX_INQUIRY),

/*
 * Entry for Jenoptik JD 5200z3
 *
 * email: car.busse@gmx.de
 */
UNUSUAL_DEV(  0x0d96, 0x5200, 0x0001, 0x0200,
		"Jenoptik",
		"JD 5200 z3",
		US_SC_DEVICE, US_PR_DEVICE, NULL, US_FL_FIX_INQUIRY),

/* Reported by Lubomir Blaha <tritol@trilogic.cz>
 * I _REALLY_ don't know what 3rd, 4th number and all defines mean, but this
 * works for me. Can anybody correct these values? (I able to test corrected
 * version.)
 */
UNUSUAL_DEV( 0x0dd8, 0x1060, 0x0000, 0xffff,
		"Netac",
		"USB-CF-Card",
		US_SC_DEVICE, US_PR_DEVICE, NULL,
		US_FL_FIX_INQUIRY ),

/* Patch by Stephan Walter <stephan.walter@epfl.ch>
 * I don't know why, but it works... */
UNUSUAL_DEV( 0x0dda, 0x0001, 0x0012, 0x0012,
		"WINWARD",
		"Music Disk",
		US_SC_DEVICE, US_PR_DEVICE, NULL,
		US_FL_IGNORE_RESIDUE ),

/* Submitted by Antoine Mairesse <antoine.mairesse@free.fr> */
UNUSUAL_DEV( 0x0ed1, 0x6660, 0x0100, 0x0300,
		"USB",
		"Solid state disk",
		US_SC_DEVICE, US_PR_DEVICE, NULL,
		US_FL_FIX_INQUIRY ),

/* Reported by Rastislav Stanik <rs_kernel@yahoo.com> */
UNUSUAL_DEV(  0x0ea0, 0x6828, 0x0110, 0x0110,
		"USB",
		"Flash Disk",
		US_SC_DEVICE, US_PR_DEVICE, NULL,
		US_FL_IGNORE_RESIDUE ),

/* Reported by Kevin Cernekee <kpc-usbdev@gelato.uiuc.edu>
 * Tested on hardware version 1.10.
 * Entry is needed only for the initializer function override.
 */
UNUSUAL_DEV(  0x1019, 0x0c55, 0x0000, 0x9999,
		"Desknote",
		"UCR-61S2B",
		US_SC_DEVICE, US_PR_DEVICE, usb_stor_ucr61s2b_init,
		0 ),

/* Reported by Kotrla Vitezslav <kotrla@ceb.cz> */
UNUSUAL_DEV(  0x1370, 0x6828, 0x0110, 0x0110,
		"SWISSBIT",
		"Black Silver",
		US_SC_DEVICE, US_PR_DEVICE, NULL,
		US_FL_IGNORE_RESIDUE ),

#ifdef CONFIG_USB_STORAGE_SDDR55
UNUSUAL_DEV(  0x55aa, 0xa103, 0x0000, 0x9999, 
		"Sandisk",
		"ImageMate SDDR55",
		US_SC_SCSI, US_PR_SDDR55, NULL,
		US_FL_SINGLE_LUN),
#endif

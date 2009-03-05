#ifndef _I8042_IO_H
#define _I8042_IO_H

/*
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License version 2 as published by 
 * the Free Software Foundation.
 */

/*
 * Names.
 */

#define I8042_KBD_PHYS_DESC "isa0060/serio0"
#define I8042_AUX_PHYS_DESC "isa0060/serio1"
#define I8042_MUX_PHYS_DESC "isa0060/serio%d"

/*
 * IRQs.
 */

#ifdef __alpha__
# define I8042_KBD_IRQ	1
# define I8042_AUX_IRQ	(RTC_PORT(0) == 0x170 ? 9 : 12)	/* Jensen is special */
#elif defined(__ia64__)
# define I8042_KBD_IRQ isa_irq_to_vector(1)
# define I8042_AUX_IRQ isa_irq_to_vector(12)
#elif defined(__arm__)
/* defined in include/asm-arm/arch-xxx/irqs.h */
#include <asm/irq.h>
#elif defined(CONFIG_SUPERH64)
#include <asm/irq.h>
#elif defined(CONFIG_NEC_CMBVR4133) && defined(CONFIG_ROCKHOPPER)
#include <asm/vr41xx/cmbvr4133.h>
# define I8042_KBD_IRQ KEYBOARD_IRQ
# define I8042_AUX_IRQ AUX_IRQ
#else
# define I8042_KBD_IRQ	1
# define I8042_AUX_IRQ	12
#endif


/*
 * Register numbers.
 */

#define I8042_COMMAND_REG	0x64	
#define I8042_STATUS_REG	0x64	
#define I8042_DATA_REG		0x60

static inline int i8042_read_data(void)
{
	return inb(I8042_DATA_REG);
}

static inline int i8042_read_status(void)
{
	return inb(I8042_STATUS_REG);
}

static inline void i8042_write_data(int val)
{
	outb(val, I8042_DATA_REG);
	return;
}

static inline void i8042_write_command(int val)
{
	outb(val, I8042_COMMAND_REG);
	return;
}

#if defined(__i386__)

#include <linux/dmi.h>

static struct dmi_system_id __initdata i8042_dmi_table[] = {
	{
		.ident = "Compaq Proliant 8500",
		.matches = {
			DMI_MATCH(DMI_SYS_VENDOR, "Compaq"),
			DMI_MATCH(DMI_PRODUCT_NAME , "ProLiant"),
			DMI_MATCH(DMI_PRODUCT_VERSION, "8500"),
		},
	},
	{
		.ident = "Compaq Proliant DL760",
		.matches = {
			DMI_MATCH(DMI_SYS_VENDOR, "Compaq"),
			DMI_MATCH(DMI_PRODUCT_NAME , "ProLiant"),
			DMI_MATCH(DMI_PRODUCT_VERSION, "DL760"),
		},
	},
	{ }
};
#endif

static inline int i8042_platform_init(void)
{
/*
 * On ix86 platforms touching the i8042 data register region can do really
 * bad things. Because of this the region is always reserved on ix86 boxes.
 */
#if !defined(__i386__) && !defined(__sh__) && !defined(__alpha__) && !defined(__x86_64__) && !defined(__mips__) && !defined (CONFIG_PPC64)
	if (!request_region(I8042_DATA_REG, 16, "i8042"))
		return -1;
#endif

#if !defined(__i386__) && !defined(__x86_64__)
        i8042_reset = 1;
#endif

#if defined(__i386__)
	if (dmi_check_system(i8042_dmi_table))
		i8042_noloop = 1;
#endif

#if defined(CONFIG_PPC64)
	if (check_legacy_ioport(I8042_DATA_REG))
		return -1;
	if (!request_region(I8042_DATA_REG, 16, "i8042"))
		return -1;
#endif
	return 0;
}

static inline void i8042_platform_exit(void)
{
#if !defined(__i386__) && !defined(__sh__) && !defined(__alpha__) && !defined(__x86_64__) && !defined(CONFIG_PPC64)
	release_region(I8042_DATA_REG, 16);
#endif
}

#endif /* _I8042_IO_H */

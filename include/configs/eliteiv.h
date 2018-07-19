/*
 * Copyright (C) 2018 C.E. Electronics, Inc.
 *
 * Configuration settings for the C.E. Electronics, Inc EliteIV board.
 *
 * SPDX-License-Identifier:	GPL-2.0+
 */

/* This was initially built based on https://elinux.org/images/2/2a/Schulz-how-to-support-new-board-u-boot-linux.pdf */

#ifndef __ELITEIV_CONFIG_H
#define __ELITEIV_CONFIG_H

#define CONFIG_MXC_UART_BASE	UART1_BASE     /* from mx6sabresd.h */

#include "mx6_common.h" /* from mx6sabre_common.h */

/* Physical Memory Map */
#define CONFIG_NR_DRAM_BANKS           1    /* from mx6sabre_common.h */
#define PHYS_SDRAM                     MMDC0_ARB_BASE_ADDR  /* from mx6sabre_common.h */

#define CONFIG_SYS_SDRAM_BASE          PHYS_SDRAM   /* from mx6sabre_common.h */
#define CONFIG_SYS_INIT_RAM_ADDR       IRAM_BASE_ADDR   /* from mx6sabre_common.h */
#define CONFIG_SYS_INIT_RAM_SIZE       IRAM_SIZE    /* from mx6sabre_common.h */

/* from mx6sabre_common.h */
#define CONFIG_SYS_INIT_SP_OFFSET \
	(CONFIG_SYS_INIT_RAM_SIZE - GENERATED_GBL_DATA_SIZE)
#define CONFIG_SYS_INIT_SP_ADDR \
	(CONFIG_SYS_INIT_RAM_ADDR + CONFIG_SYS_INIT_SP_OFFSET)

#define CONFIG_SYS_MAX_FLASH_BANKS 1    /* max number of memory banks */    /* from mx6sabre_common.h */
#define CONFIG_SYS_MALLOC_LEN		(16 * SZ_1M) /* from mx6sabre_common.h */
#define CONFIG_SYS_FSL_ESDHC_ADDR      0    /* from mx6sabre_common.h */

#endif                         /* __ELITEIV_CONFIG_H */

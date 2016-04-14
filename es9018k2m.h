/*
 * es9018k2m.h  --  es9018k2m Soc Audio driver
 *
 * Copyright 2005 Openedhand Ltd.
 *
 * Author: Richard Purdie <richard@openedhand.com>
 *
 * Based on es9018k2m.h
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */

#ifndef _ES9018K2M_H
#define _ES9018K2M_H

#include <linux/regmap.h>
#include <linux/regulator/consumer.h>
#include <linux/of_device.h>
#include <sound/soc.h>
#include <linux/mutex.h>

/* ES9018K2M register space */

#define ES9018K2M_SYSTEM_SETTING    			0x00
#define ES9018K2M_INPUT_CONFIG   			0x01
#define ES9018K2M_AUTOMUTE_TIME   			0x04
#define ES9018K2M_AUTOMUTE_LEVEL   			0x05
#define ES9018K2M_DEEMPHASIS    			0x06
#define ES9018K2M_GENERAL_SET   			0x07
#define ES9018K2M_GPIO_CONFIG      			0x08
#define ES9018K2M_W_MODE_CONTROL    			0x09
#define ES9018K2M_V_MODE_CONTROL    			0x0A
#define ES9018K2M_CHANNEL_MAP    			0x0B
#define ES9018K2M_DPLL   				0x0C
#define ES9018K2M_THD_COMPENSATION   			0x0D
#define ES9018K2M_SOFT_START	   			0x0E
#define ES9018K2M_VOLUME1	   			0x0F
#define ES9018K2M_VOLUME2	   			0x10
#define ES9018K2M_MASTERTRIM0	   			0x11
#define ES9018K2M_MASTERTRIM1	   			0x12
#define ES9018K2M_MASTERTRIM2	  			0x13
#define ES9018K2M_MASTERTRIM3	   			0x14
#define ES9018K2M_INPUT_SELECT	   			0x15
#define ES9018K2M_2_HARMONIC_COMPENSATION_0	    	0x16
#define ES9018K2M_2_HARMONIC_COMPENSATION_1	    	0x17
#define ES9018K2M_3_HARMONIC_COMPENSATION_0	    	0x18
#define ES9018K2M_3_HARMONIC_COMPENSATION_1	    	0x19
//#for V version
#define ES9018K2M_program_FIR_ADDR	      		0x1A
#define ES9018K2M_program_FIR_DATA1	   		0x1B
#define ES9018K2M_program_FIR_DATA2	   		0x1C
#define ES9018K2M_program_FIR_DATAC	   		0x1D
#define ES9018K2M_program_FIR_CONTROL	   		0x1E

#define ES9018K2M_CACHEREGNUM 	0x1E

#define ES9018K2M_SYSCLK_MCLK 1

#endif

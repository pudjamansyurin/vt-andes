/*
 * afe.h
 *
 *  Created on: Jun 13, 2022
 *      Author: pujak
 */

#ifndef AFE_AFE_H_
#define AFE_AFE_H_

#include "i2c.h"

typedef enum {
	AFE_CMD_WAKEUP = 0x10,
	AFE_CMD_OFF = 0x11,

	AFE_CMD_SCAN_NOISE_START = 0x20,
	AFE_CMD_GET_NOISE_1ST_DATA = 0x21,
	AFE_CMD_GET_NOISE_LAST_DATA = 0x22,

	AFE_CMD_SCAN_TX_START = 0x30,
	AFE_CMD_GET_TX_DATA = 0x31,

	AFE_CMD_SCAN_RX_START = 0x40,
	AFE_CMD_GET_RX_DATA = 0x41,

	AFE_CMD_SCAN_MUTUAL_START = 0x50,
	AFE_CMD_GET_MUTUAL_1ST_DATA = 0x51,
	AFE_CMD_GET_MUTUAL_2ND_DATA = 0x52,
	AFE_CMD_GET_MUTUAL_3RD_DATA = 0x53,
	AFE_CMD_GET_MUTUAL_4TH_DATA = 0x54,
	AFE_CMD_GET_MUTUAL_5TH_DATA = 0x55,
	AFE_CMD_GET_MUTUAL_6TH_DATA = 0x56,
	AFE_CMD_GET_MUTUAL_LAST_DATA = 0x57,

	AFE_CMD_HEADER = 0xA5,
	AFE_CMD_STOP = 0xB5,

	AFE_CMD_RESET = 0xFD,
	AFE_CMD_RESTART = 0xFE,
	AFE_CMD_UNKNOWN = 0xFF,
} eAFE_CMD;


#endif /* AFE_AFE_H_ */

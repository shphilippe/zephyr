/*
 * Copyright (c) 2019 Philippe Retornaz <philippe@shapescale.com>
 *
 * SPDX-License-Identifier: Apache-2.0
 */

/**
 * Header file for the STM32 UART
 */

#ifndef ZEPHYR_DRIVERS_SERIAL_UART_STM32_DRVCMD_H_
#define ZEPHYR_DRIVERS_SERIAL_UART_STM32_DRVCMD_H_
#ifdef CONFIG_UART_STM32_DRV_CMD

struct uart_stm32_rs485 {
/* negative time means feature disabled */
/* Driver activation time, 0-31 */
	int deat;
/* Driver deactivation time, 0-31 */
	int dedt;
/* Polarity of the pin: 0 active low, 1 active high */
	int polarity;
};

#define UART_STM32_SET_RS485 0


#endif
#endif /* ZEPHYR_DRIVERS_SERIAL_UART_STM32_DRVCMD_H_ */

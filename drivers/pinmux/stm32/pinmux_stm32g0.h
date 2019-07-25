/*
 * Copyright (c) 2019 Philippe Retornaz <philippe@shapescale.com>
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#ifndef ZEPHYR_DRIVERS_PINMUX_STM32_PINMUX_STM32G0_H_
#define ZEPHYR_DRIVERS_PINMUX_STM32_PINMUX_STM32G0_H_

/**
 * @file Header for STM32G0 pin multiplexing helper
 */
#define STM32G0_PINMUX_FUNC_PA2_USART2_TX \
	(STM32_PINMUX_ALT_FUNC_1 | STM32_PUSHPULL_NOPULL)
#define STM32G0_PINMUX_FUNC_PA3_USART2_RX \
	(STM32_PINMUX_ALT_FUNC_1 | STM32_PUPDR_NO_PULL)
#define STM32G0_PINMUX_FUNC_PA1_USART2_RTS \
	(STM32_PINMUX_ALT_FUNC_1 | STM32_PUSHPULL_NOPULL)

#define STM32G0_PINMUX_FUNC_PA11_I2C2_SCL \
	(STM32_PINMUX_ALT_FUNC_6 | STM32_OPENDRAIN_PULLUP)

#define STM32G0_PINMUX_FUNC_PA12_I2C2_SDA \
	(STM32_PINMUX_ALT_FUNC_6 | STM32_OPENDRAIN_PULLUP)

#define STM32G0_PINMUX_FUNC_PB6_USART1_TX \
	(STM32_PINMUX_ALT_FUNC_0 | STM32_PUSHPULL_NOPULL)
#define STM32G0_PINMUX_FUNC_PB7_USART1_RX \
	(STM32_PINMUX_ALT_FUNC_0 | STM32_PUPDR_NO_PULL)
#define STM32G0_PINMUX_FUNC_PB6_USART1_TX_RX \
	(STM32_PINMUX_ALT_FUNC_0 | STM32_OPENDRAIN_PULLUP)

#define STM32G0_PINMUX_FUNC_PA7_TIM3_CH2 \
	(STM32_PINMUX_ALT_FUNC_1 | STM32_PUSHPULL_NOPULL)

#define STM32G0_PINMUX_FUNC_PB10_USART3_TX \
	(STM32_PINMUX_ALT_FUNC_4 | STM32_PUSHPULL_NOPULL)
#define STM32G0_PINMUX_FUNC_PB11_USART3_RX \
	(STM32_PINMUX_ALT_FUNC_4 | STM32_PUPDR_NO_PULL)

#define STM32G0_PINMUX_FUNC_PA4_ADC_IN4 \
	STM32_MODER_ANALOG_MODE
#define STM32G0_PINMUX_FUNC_PA6_ADC_IN6 \
	STM32_MODER_ANALOG_MODE

#define STM32G0_PINMUX_FUNC_PB0_ADC_IN8 \
	STM32_MODER_ANALOG_MODE
#define STM32G0_PINMUX_FUNC_PB2_ADC_IN10 \
	STM32_MODER_ANALOG_MODE

#define STM32G0_PINMUX_FUNC_PA8_TIM1_CH1 \
	(STM32_PINMUX_ALT_FUNC_2 | STM32_PUSHPULL_NOPULL)
#define STM32G0_PINMUX_FUNC_PA9_TIM1_CH2 \
	(STM32_PINMUX_ALT_FUNC_2 | STM32_PUSHPULL_NOPULL)
#define STM32G0_PINMUX_FUNC_PA10_TIM1_CH3 \
	(STM32_PINMUX_ALT_FUNC_2 | STM32_PUSHPULL_NOPULL)


#endif /* ZEPHYR_DRIVERS_PINMUX_STM32_PINMUX_STM32G0_H_ */

#pragma once

#include_next <mcuconf.h>

#undef STM32_PWM_USE_TIM16
#define STM32_PWM_USE_TIM16 TRUE
#define WS2812_PWM_CHANNEL 1
#define WS2812_PWM_DRIVER PWMD16

#define STM32_TIM16_SUPPRESS_ISR

//#undef STM32_GPT_TIM16_IRQ_PRIORITY
//#define STM32_GPT_TIM16_IRQ_PRIORITY 2

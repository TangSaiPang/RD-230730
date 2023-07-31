#ifndef __BSP_5516_H__
#define __BSP_5516_H__

#include "stm32f1xx.h"

// LDR PA12
#define LDR_Pin GPIO_PIN_12
#define LDR_GPIO_Port GPIOA
#define LDR_GPIO_CLK_ENABLE()      __HAL_RCC_GPIOA_CLK_ENABLE()

void LDR_GPIO_Init(void);

#endif

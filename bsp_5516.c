#include "../5516/bsp_5516.h"


void LDR_GPIO_Init(void)
{
    GPIO_InitTypeDef LDR_GPIO_Init;

    LDR_GPIO_CLK_ENABLE();

    LDR_GPIO_Init.Pin = LDR_Pin;
    LDR_GPIO_Init.Mode = GPIO_MODE_IT_RISING;
    LDR_GPIO_Init.Pull = GPIO_PULLDOWN;
    HAL_GPIO_Init(LDR_GPIO_Port, &LDR_GPIO_Init);

    /* EXTI interrupt init*/
//    HAL_NVIC_SetPriority(EXTI15_10_IRQn, 2, 0);
//    HAL_NVIC_EnableIRQ(EXTI15_10_IRQn);
}

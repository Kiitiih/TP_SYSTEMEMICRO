/*
 * TimeBase.c
 *
 *  Created on: Mar 14, 2024
 *      Author: Antoine
 */

#include "tim.h"

void TimeBaseStartIT(void){
	LL_TIM_EnableCounter(TIM21);
	LL_TIM_EnableIT_UPDATE(TIM21);
}

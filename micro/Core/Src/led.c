/*
 * led.c
 *
 *  Created on: Mar 14, 2024
 *      Author: Antoine
 */
#include "tim.h"

// Démarre le timer
void LedStart(void){
	// Démarrer le timer
	LL_TIM_EnableCounter(TIM2);
	// Activer la sortie PWM
	LL_TIM_CC_EnableChannel(TIM2, LL_TIM_CHANNEL_CH1);

}
// Configure le rapport cyclique de la PWM entre 0 et 255
void LedSetValue(uint8_t val)
{
	// Modifier le rapport cyclique
	LL_TIM_OC_SetCompareCH1(TIM2, val);
}
// À chaque appel, cette fonction incrémente la luminosité de la LED
// Arrivé à la valeur maximale, chaque appel décrémente la LED
void LedPulse(void)
{
	static int val = 0;
	static int sens = 0;

	if (val == 0)
	{
		sens = 1;
	}

	if (sens == 1)
		val++;

	if(val == 255)
		sens = 0;

	if(sens == 0)
		val--;

	LedSetValue(val);

}




#include "ntc.h"

float NTC_Get_Temperature_To_Kelvin(uint16_t adc_value)
{
	float U  = ((float)adc_value / NTC_ADC_MAX_VAL) * NTC_U_REF;
	float R  = NTC_SERIAL_R * (U / (NTC_U_GEN - U));
	
	float lnR = log(R);
	
	return 1.0 / (NTC_A_COEF + (NTC_B_COEF * lnR) + (NTC_C_COEF * (lnR * lnR * lnR)));
}



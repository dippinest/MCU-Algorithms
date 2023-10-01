
#define F_CPU 16000000UL
#include <util/delay.h>

#include "itoa.h"
#include "adc.h"
#include "ntc.h"
#include "uart.h"

static char str_buf[16];

int main(void)
{
	ADC_Initialize(0, ADC_PRESCALER_128, ADC_VREF_SOURCE_EXTERNAL_AVCC, true);
	
	UART_Initialize(9600, true, false);
	
	ITOA_Set_String_Buffer(str_buf);
	
	
	float temp_to_kelvin, temp_to_celsius, temp_to_fahrenheit;
	
	while (1)
	{
		temp_to_kelvin     = NTC_Get_Temperature_To_Kelvin(ADC_Get_Value_10bit());
		temp_to_celsius    = NTC_Convert_Temperature_Kelvin_To_Celsius(temp_to_kelvin);
		temp_to_fahrenheit = NTC_Convert_Temperature_Kelvin_To_Fahrenheit(temp_to_kelvin);
		
		UART_String_Transmit("Temp (*K) "); UART_StringLn_Transmit(ITOA_Float_To_String(temp_to_kelvin,     3, 1));
		UART_String_Transmit("Temp (*C) "); UART_StringLn_Transmit(ITOA_Float_To_String(temp_to_celsius,    3, 1));
		UART_String_Transmit("Temp (*F) "); UART_StringLn_Transmit(ITOA_Float_To_String(temp_to_fahrenheit, 3, 1));
		
		UART_NEW_LINE;
		
		_delay_ms(1000);
	}
}



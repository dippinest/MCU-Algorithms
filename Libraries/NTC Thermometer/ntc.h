

// ===============================================================================
//
//  Библиотека для работы с NTC терморезистором. С помощью уравнения
//  Стейнхарта-Харта позволяет вычислять температуру в градусах Кельвина
//
//
//  Температура вычисляется согласно уравнению Стейнхарта-Харта:
//
//  T = 1 / (A + B*ln(R) + C*[ln(R)]^3), где:
//
//  T       - температура в Кельвинах;
//  R       - сопротивление постоянного резистора в Омах
//  A, B, C - Коэффициенты уравнения Стейнхарта-Харта для конкретного термирезистора
//
//  Вы можете рассчитать коэффициенты A, B и C, используя решение системы
//  линейных уравнений (https://ru.wikipedia.org/wiki/Уравнение_Стейнхарта_—_Харта)
//  или же использую специальный калькулятор. Значения коэффициентов задаются
//  в файле ntc_configuration.h
//
//
//	Пожалуйста, используйте резистор и терморезистор с минимальной погрешностью параметров.
//
//	Схема подключения:
//
//	+Vcc o----[постоянный резистор]---(точка подключения АЦП)---[NTC терморезистор]----o GND
//
//	В точке АЦП подключения происходит измерение значения АЦП, результат которого передаётся
//  в функцию NTC_Get_Temperature_To_Kelvin(uint16_t adc_value)
//
// -------------------------------------------------------------------------------
//
//  Library for working with an NTC thermistor. Using the Steinhart-Hart equation,
//  it allows you to calculate the temperature in degrees Kelvin
//
//
//  The temperature is calculated using the Steinhart-Hart equation:
//
//  T = 1 / (A + B*ln(R) + C*[ln(R)]^3), where:
//
//  T       - temperature in Kelvin;
//  R       - resistance of a constant resistor in Ohms
//  A, B, C - coefficients of the Steinhart-Hart equation for a specific thermistor
//
//  You can can calculate the coefficients A, B and C using the system of
//  linear equations solution (https://en.wikipedia.org/wiki/Steinhart-Hart_equation)
//  or using a special calculator. The values of the coefficients are set
//  in the file ntc_configuration.h
//
//
//	Please use a resistor and a thermistor with minimal parameter error.
//
//	Switching scheme:
//
//	+Vcc o----[serial resistor]---(ADC point)---[NTC thermistor]----o GND
//
//	At the ADC connection point, the ADC value is measured, the result
//  of which is passed to the NTC_Get_Temperature_To_Kelvin(uint16_t adc_value) function
//
// ===============================================================================


#ifndef NTC_H_
#define NTC_H_

#include "ntc_configuration.h"


float NTC_Get_Temperature_To_Kelvin(uint16_t adc_value);

inline float NTC_Convert_Temperature_Kelvin_To_Celsius(float temp_to_kelvin)
{
  return temp_to_kelvin - 273.15f;
}

inline float NTC_Convert_Temperature_Kelvin_To_Fahrenheit(float temp_to_kelvin)
{
  return (1.8f * (temp_to_kelvin - 273.15f)) + 32.0f;
}


#endif



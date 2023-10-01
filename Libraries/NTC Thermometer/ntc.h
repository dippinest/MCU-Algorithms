

// ===============================================================================
//
//  ���������� ��� ������ � NTC ���������������. � ������� ���������
//  ����������-����� ��������� ��������� ����������� � �������� ��������
//
//
//  ����������� ����������� �������� ��������� ����������-�����:
//
//  T = 1 / (A + B*ln(R) + C*[ln(R)]^3), ���:
//
//  T       - ����������� � ���������;
//  R       - ������������� ����������� ��������� � ����
//  A, B, C - ������������ ��������� ����������-����� ��� ����������� ��������������
//
//  �� ������ ���������� ������������ A, B � C, ��������� ������� �������
//  �������� ��������� (https://ru.wikipedia.org/wiki/���������_����������_�_�����)
//  ��� �� ��������� ����������� �����������. �������� ������������� ��������
//  � ����� ntc_configuration.h
//
//
//	����������, ����������� �������� � ������������� � ����������� ������������ ����������.
//
//	����� �����������:
//
//	+Vcc o----[���������� ��������]---(����� ����������� ���)---[NTC �������������]----o GND
//
//	� ����� ��� ����������� ���������� ��������� �������� ���, ��������� �������� ���������
//  � ������� NTC_Get_Temperature_To_Kelvin(uint16_t adc_value)
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



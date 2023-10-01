
#ifndef NTC_CONFIGURATION_H_
#define NTC_CONFIGURATION_H_

#include <math.h>
#include <stdint.h>

// �� ��������� ������������ � ���� ����� ���������� ���
// �������������� MF52 NTC-MF52AT 100 ���
// -------------------------------------------------------------------------------
// By default, the coefficients in this file are calculated
// for the MF52 NTC-MF52AT 100 kOhm thermistor




// ����������� A
// -------------------------------------------------------------------------------
// coefficient A

#define NTC_A_COEF       0.0006660824105f


// ����������� B
// -------------------------------------------------------------------------------
// coefficient B
#define NTC_B_COEF       0.0002239282041f


// ����������� C
// -------------------------------------------------------------------------------
// coefficient C
#define NTC_C_COEF       0.0000000719951882f


// ������������� ����������� ��������� � ���� (���������� ������������)
// -------------------------------------------------------------------------------
// resistance of a constant resistor in Ohms (measured by a multimeter)
#define NTC_SERIAL_R     68700


// ���������� ������� ������������� ���� (� �������)
// -------------------------------------------------------------------------------
// supply voltage of the measuring circuit (in Volts)
#define NTC_U_GEN        4.81f


// ������� ���������� ��� (� �������)
// -------------------------------------------------------------------------------
// ADC reference voltage (in Volts)
#define NTC_U_REF        4.81f


// ������������ �������� �������� ���
// -------------------------------------------------------------------------------
// maximum digital value of the ADC
#define NTC_ADC_MAX_VAL  1023 // max value 10-bit ADC for AVR

#endif



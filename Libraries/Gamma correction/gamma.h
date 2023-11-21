
// ===============================================================================
//
// ����������, ����������� ������� CRT ��������� �����, ���������� �������������
// ����������� (��������� ����������, ������������ ����� � �.�.).
//
// ������������� ��������� ����� ����������� ������������� ����������
// ������������� ����� ������������ ������
// (��. ����� ������-������� - https://ru.wikipedia.org/wiki/�����_������_�_�������).
//
// ����������������� ���� (� ������� Scilab) ���� �������� �������,
// �������� ������ ����������� ����������� ����������� ����������
// ������������� ����� S �� ��������� ������ ����������� R:
//
// 1. S(R) = k * R^n   - ��������� �����������,
//                       ��� k � n - const (k = 16.04 � n = 0.(3))
//
// 2. S(R) = k * ln(R) - ��������������� �����������,
//                       ��� k - const = 18.02
//
// �������� ���� ������� ��� 8-�� ������� ��������� ���� �������� � �������,
// �� ������� � ���������� CRT ���������
//
// -------------------------------------------------------------------------------
//
// Library that implements the functions of CRT color
// correction emitted by LED sources (individual LEDs, LED strips, etc.).
//
// The need for color correction is due to the nonlinearity of the
// perception of light intensity by the human eye
// (see the Wehler-Fechner law - https://en.wikipedia.org/wiki/Weber�Fechner_law).
//
// Experimentally (using Scilab), functions were identified that most
// closely describe the dependence of visual perception of color
// intensity S on the luminous flux of LEDs R:
//
// 1. S(R) = k * R^n   - power dependence,
//                       where k and n - const (k = 16.04 � n = 0.(3))
//
// 2. S(R) = k * ln(R) - logarithmic dependence,
//                       where k - const = 18.02
//
// The values of these functions for the 8-bit argument were output
// to tables, according to which the CRT correction takes place
//
// ===============================================================================


#ifndef GAMMA_H_
#define GAMMA_H_

#include <avr/pgmspace.h>

#include <stdint.h>


uint8_t Gamma_Correction_Get_Power_Approximation_Value(uint8_t value);

uint8_t Gamma_Correction_Get_Logarithmic_Approximation_Value(uint8_t value);


#endif


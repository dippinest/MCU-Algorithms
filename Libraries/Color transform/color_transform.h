
// ===============================================================================
//
// ���������� ��� �������������� �������� ����������� RGB � HSV � �������.
//
// ���������� ������������� ��� ������������� � ��������, ��� ���������
// ���������� ������������� ������������� �������, ������� � ��.
// (��������, ��� ���������, � ��������� � ��.).
//
// �������� ������������ HSV ������������ � ���� ���������:
// 1. � ��������� ������ (���������� h ���������� �� 0 �� 360,
//    s � v - �� 0 �� 1.0)
// 2. � � ������������� ����������
//    (���������� h, s � v ���������� �� 0 �� 255).
//
// -------------------------------------------------------------------------------
//
// Library for converting RGB color spaces to HSV and conversely.
//
// The library is intended for use in projects where management
// of multi-colored LED strips, rails, etc. is required
// (for example, for illumination, in garlands, etc.).
//
// The HSV color space is represented in two variations:
// 1. floating point (component h varies from 0 to 360,
//    s and v - from 0 to 1.0)
// 2. and integer (components h, s and v varies from 0 to 255).
//
// ===============================================================================


#ifndef COLOR_TRANSFORM_H_
#define COLOR_TRANSFORM_H_

#include <stdint.h>


typedef struct
{
	uint8_t r;
	uint8_t g;
	uint8_t b;
	
} RGB_t;


typedef struct
{
	uint8_t h;
	uint8_t s;
	uint8_t v;
	
} HSV_t;


typedef struct
{
	float h;
	float s;
	float v;

} HSV_Float_t;


// ===============================================================================


HSV_t Color_Transform_RGB_To_HSV(RGB_t rgb);

RGB_t Color_Transform_HSV_To_RGB(HSV_t hsv);

HSV_Float_t Color_Transform_RGB_To_HSV_Float(RGB_t rgb);

RGB_t Color_Transform_HSV_Float_To_RGB(HSV_Float_t hsv_f);


#endif


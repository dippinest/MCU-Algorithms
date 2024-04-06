

// ===============================================================================
//
// ���������� ���������� ��������������� �����. �������� �������������
// ��������������� ����� ������� ����, ��� � ����������� ������� rand(),
// ������ �������� ������ ������ ����������������, ��� ����� ����
// �������� � ��������� �����������.
//
// ������� ��������� ������ �������� ��������������� ����� � ���������,
// ����������� � ����������.
//
// �������� ��������� �������:
//
// 1. void FASTRandom_Set_Seed(uint16_t seed) - ��������� ���������� ��������
//         rand(). �������� ������ �������� ������� srand(uint16_t seed)
//
// 2. FASTRandom_Get_Bool_Value() - ���������� ��������� ������ ��������
//
// 3. FASTRandom_Get_UInt15_Value(uint16_t min, uint16_t max) �
//    FASTRandom_Get_Int15_Value(int16_t min, int16_t max) - ����������
//    15-�� ������ ��������� �������� �� min �� (max - 1)
//
// 4. FASTRandom_Get_UInt16_Value(uint16_t min, uint16_t max) �
//    FASTRandom_Get_Int16_Value(int16_t min, int16_t max) - ����������
//    16-�� ������ ��������� �������� �� min �� (max - 1)
//
// 5. FASTRandom_Get_UInt32_Value(uint32_t min, uint32_t max) �
//    FASTRandom_Get_Int32_Value(int32_t min, int32_t max) - ����������
//    16-�� ������ ��������� �������� �� min �� (max - 1)
//
// 6. float FASTRandom_Get_Float_Value() - ���������� ��������� ��������
//    ���� float �� 0.0 �� 1.0 (������������)
//
// -------------------------------------------------------------------------------
//
// Library of the pseudorandom number generator. The quality of the
// pseudo-random number distribution is slightly worse than that of the
// standard rand() function, but it takes up less memory of the
// microcontroller, which can be critical in some applications.
//
// The functions make it convenient to get pseudo-random numbers in the
// range specified in the parameters.
//
// The following functions are available:
//
// 1. void FASTRandom_Set_Seed(uint16_t seed) - setting the
//    initial value of rand(). It is a complete analogue of
//    the srand(uint16_t seed) function
//
// 2. FASTRandom_Get_Bool_Value() - returns a random boolean value
//
// 3. FASTRandom_Get_UInt15_Value(uint16_t min, uint16_t max) and
//    FASTRandom_Get_Int15_Value(int16_t min, int16_t max) - returns
//    a 15-bit random value from min to (max - 1)
//
// 4. FASTRandom_Get_UInt16_Value(uint16_t min, uint16_t max) and
//    FASTRandom_Get_Int16_Value(int16_t min, int16_t max) - returns
//    a 16-bit random value from min to (max - 1)
//
// 5. FASTRandom_Get_UInt32_Value(uint32_t min, uint32_t max) and
//    FASTRandom_Get_Int32_Value(int32_t min, int32_t max) - returns
//    a 32-bit random value from min to (max - 1)
//
// 6. float FASTRandom_Get_Float_Value() - returns a random float
//    value from 0.0 to 1.0 (inclusive)
//
// ===============================================================================


#ifndef FRANDOM_H_
#define FRANDOM_H_


#include <stdint.h>
#include <stdlib.h>
#include <stdbool.h>

#define _FASTRANDOM_RAND_MAX    65535
#define _FASTRANDOM_MAGIC_VALUE 0x3707

#define _FASTRANDOM_ROTR(val, pos, val_type) (val >> pos) | (val << (sizeof(val_type) * 8 - pos))


// ===============================================================================

void FASTRandom_Set_Seed(uint16_t seed);

// ===============================================================================

bool FASTRandom_Get_Bool_Value();

uint16_t FASTRandom_Get_UInt16_Value(uint16_t min, uint16_t max);

int16_t FASTRandom_Get_Int16_Value(int16_t min, int16_t max);

uint32_t FASTRandom_Get_UInt32_Value(uint32_t min, uint32_t max);

int32_t FASTRandom_Get_Int32_Value(int32_t min, int32_t max);

float FASTRandom_Get_Float_Value();


#endif



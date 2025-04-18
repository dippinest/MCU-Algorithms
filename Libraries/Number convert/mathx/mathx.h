

// ===============================================================================
//
// Библиотека с полезными математическими функциями
//
// На данный момент библиотека содержит следующие функции:
//
//
//      MATHX_Get_Min_X   : возвращает меньшее из двух чисел
//
//      MATHX_Get_Max_X   : возвращает большее из двух чисел
//
//      MATHX_Get_Abs_X   : возвращает модуль числа
//
//      MATHX_Constrain_X : возвращает число с учётом области допустимых значений
//
//      MATHX_Scaling_X   : возвращает линейно-масштабированное значение
//
//
// -------------------------------------------------------------------------------
//
// Library with useful mathematical functions
//
// At the moment, the library contains the following functions:
//
//      MATHX_Get_Min_X   : returns a smaller of the two numbers
//
//      MATHX_Get_Max_X   : returns a larger of two numbers
//
//      MATHX_Get_Abs_X   : returns a absolute value
//
//      MATHX_Constrain_X : returns a number taking into account the range of acceptable values
//
//      MATHX_Scaling_X   : returns a linearly scaled value
//
//
// ===============================================================================


#ifndef MATHX_H_
#define MATHX_H_

#include <stdint.h>



int8_t MATHX_Get_Min_Int8(int8_t x1, int8_t x2);

uint8_t MATHX_Get_Min_UInt8(uint8_t x1, uint8_t x2);

int16_t MATHX_Get_Min_Int16(int16_t x1, int16_t x2);

uint16_t MATHX_Get_Min_UInt16(uint16_t x1, uint16_t x2);

int32_t MATHX_Get_Min_Int32(int32_t x1, int32_t x2);

uint32_t MATHX_Get_Min_UInt32(uint32_t x1, uint32_t x2);


#ifdef NUM_64BIT_SUPPORT

int64_t MATHX_Get_Min_Int64(int64_t x1, int64_t x2);

uint64_t MATHX_Get_Min_UInt64(uint64_t x1, uint64_t x2);

#endif


float MATHX_Get_Min_Float(float x1, float x2);



// ===============================================================================


int8_t MATHX_Get_Max_Int8(int8_t x1, int8_t x2);

uint8_t MATHX_Get_Max_UInt8(uint8_t x1, uint8_t x2);

int16_t MATHX_Get_Max_Int16(int16_t x1, int16_t x2);

uint16_t MATHX_Get_Max_UInt16(uint16_t x1, uint16_t x2);

int32_t MATHX_Get_Max_Int32(int32_t x1, int32_t x2);

uint32_t MATHX_Get_Max_UInt32(uint32_t x1, uint32_t x2);


#ifdef NUM_64BIT_SUPPORT

int64_t MATHX_Get_Max_Int64(int64_t x1, int64_t x2);

uint64_t MATHX_Get_Max_UInt64(uint64_t x1, uint64_t x2);

#endif


float MATHX_Get_Max_Float(float x1, float x2);



// ===============================================================================


int8_t MATHX_Get_Abs_Int8(int8_t num);

int16_t MATHX_Get_Abs_Int16(int16_t num);

int32_t MATHX_Get_Abs_Int32(int32_t num);


#ifdef NUM_64BIT_SUPPORT

int64_t MATHX_Get_Abs_Int64(int64_t num);

#endif


float MATHX_Get_Abs_Float(float num);



// ===============================================================================


int8_t MATHX_Constrain_Int8(int8_t val, int8_t min, int8_t max);

uint8_t MATHX_Constrain_UInt8(uint8_t val, uint8_t min, uint8_t max);

int16_t MATHX_Constrain_Int16(int16_t val, int16_t min, int16_t max);

uint16_t MATHX_Constrain_UInt16(uint16_t val, uint16_t min, uint16_t max);

int32_t MATHX_Constrain_Int32(int32_t val, int32_t min, int32_t max);

uint32_t MATHX_Constrain_UInt32(uint32_t val, uint32_t min, uint32_t max);


#ifdef NUM_64BIT_SUPPORT

int64_t MATHX_Constrain_Int64(int64_t val, int64_t min, int64_t max);

uint64_t MATHX_Constrain_UInt64(uint64_t val, uint64_t min, uint64_t max);

#endif


float MATHX_Constrain_Float(float val, float min, float max);



// ===============================================================================


int32_t MATHX_Scaling_Int32(int32_t val, int32_t input_min_val, int32_t input_max_val, int32_t output_min_val, int32_t output_max_val);

uint32_t MATHX_Scaling_UInt32(uint32_t val, uint32_t input_min_val, uint32_t input_max_val, uint32_t output_min_val, uint32_t output_max_val);


#ifdef NUM_64BIT_SUPPORT

int64_t MATHX_Scaling_Int64(int64_t val, int64_t input_min_val, int64_t input_max_val, int64_t output_min_val, int64_t output_max_val);

uint64_t MATHX_Scaling_UInt64(uint64_t val, uint64_t input_min_val, uint64_t input_max_val, uint64_t output_min_val, uint64_t output_max_val);

#endif


float MATHX_Scaling_Float(float val, float input_min_val, float input_max_val, float output_min_val, float output_max_val);



#endif



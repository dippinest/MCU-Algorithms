

// ===============================================================================
//
// Библиотека с полезными математическими функциями, которых нет в стандартной библиотеке math.h
//
// На данный момент библиотека содержит следующие функции:
//
//		MATHX_Constrain_X : возвращает число с учётом области допустимых значений
//
//		MATHX_Scaling_X   : возвращает линейно-масштабированное значение
//
//
// -------------------------------------------------------------------------------
//
// A library with useful mathematical functions that are not available in the standard math.h library
//
// At the moment, the library contains the following functions:
//
//		MATHX_Constrain_X : returns a number taking into account the range of acceptable values
//
//		MATHX_Scaling_X   : returns a linearly scaled value
//
//
// ===============================================================================


#ifndef MATHX_H_
#define MATHX_H_

#include <stdint.h>

int16_t MATHX_Constraint_Int16(int16_t val, int16_t min, int16_t max);

uint16_t MATHX_Constraint_UInt16(uint16_t val, uint16_t min, uint16_t max);

int32_t MATHX_Constraint_Int32(int32_t val, int32_t min, int32_t max);

uint32_t MATHX_Constraint_UInt32(uint32_t val, uint32_t min, uint32_t max);


#ifdef NUM_64BIT_SUPPORT

int64_t MATHX_Constraint_Int64(int64_t val, int64_t min, int64_t max);

uint64_t MATHX_Constraint_UInt64(uint64_t val, uint64_t min, uint64_t max);

#endif


float MATHX_Constraint_Float(float val, float min, float max);


// ===============================================================================

int32_t MATHX_Scaling_Int32(int32_t val, int32_t input_min_val, int32_t input_max_val, int32_t output_min_val, int32_t output_max_val);

uint32_t MATHX_Scaling_UInt32(uint32_t val, uint32_t input_min_val, uint32_t input_max_val, uint32_t output_min_val, uint32_t output_max_val);


#ifdef NUM_64BIT_SUPPORT

int64_t MATHX_Scaling_Int64(int64_t val, int64_t input_min_val, int64_t input_max_val, int64_t output_min_val, int64_t output_max_val);

uint64_t MATHX_Scaling_UInt64(uint64_t val, uint64_t input_min_val, uint64_t input_max_val, uint64_t output_min_val, uint64_t output_max_val);

#endif


float MATHX_Scaling_Float(float val, float input_min_val, float input_max_val, float output_min_val, float output_max_val);



#endif



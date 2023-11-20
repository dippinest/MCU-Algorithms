

// ===============================================================================
//
// Библиотека, облегчающая работу со стандартной функцией ГПСЧ rand().
//
// Функции позволяют удобно получать псевдослучайные числа в диапазоне,
// указываемом в параметрах.
//
// Доступны следующие функции:
//
// 1. void Random_LCG_Set_Seed(uint16_t seed) - установка начального значения
//         rand(). Является полным аналогом функции srand(uint16_t seed)
//
// 2. Random_LCG_Get_Bool_Value() - возвращает случайное булево значение
//
// 3. Random_LCG_Get_UInt15_Value(uint16_t min, uint16_t max) и
//    Random_LCG_Get_Int15_Value(int16_t min, int16_t max) - возвращает
//    15-ти битное случайное значение от min до (max - 1)
//
// 4. Random_LCG_Get_UInt16_Value(uint16_t min, uint16_t max) и
//    Random_LCG_Get_Int16_Value(int16_t min, int16_t max) - возвращает
//    16-ти битное случайное значение от min до (max - 1)
//
// 5. Random_LCG_Get_UInt32_Value(uint32_t min, uint32_t max) и
//    Random_LCG_Get_Int32_Value(int32_t min, int32_t max) - возвращает
//    16-ти битное случайное значение от min до (max - 1)
//
// 6. float Random_LCG_Get_Float_Value() - возвращают случайное значение
//    типа float от 0.0 до 1.0 (включительно)
//
// -------------------------------------------------------------------------------
//
// Library that facilitates working with the standard PRNG function rand().
//
// The functions make it convenient to get pseudo-random numbers in the
// range specified in the parameters.
//
// The following functions are available:
//
// 1. void Random_LCG_Set_Seed(uint16_t seed) - setting the
//    initial value of rand(). It is a complete analogue of
//    the srand(uint16_t seed) function
//
// 2. Random_LCG_Get_Bool_Value() - returns a random boolean value
//
// 3. Random_LCG_Get_UInt15_Value(uint16_t min, uint16_t max) and
//    Random_LCG_Get_Int15_Value(int16_t min, int16_t max) - returns
//    a 15-bit random value from min to (max - 1)
//
// 4. Random_LCG_Get_UInt16_Value(uint16_t min, uint16_t max) and
//    Random_LCG_Get_Int16_Value(int16_t min, int16_t max) - returns
//    a 16-bit random value from min to (max - 1)
//
// 5. Random_LCG_Get_UInt32_Value(uint32_t min, uint32_t max) and
//    Random_LCG_Get_Int32_Value(int32_t min, int32_t max) - returns
//    a 32-bit random value from min to (max - 1)
//
// 6. float Random_LCG_Get_Float_Value() - returns a random float
//    value from 0.0 to 1.0 (inclusive)
//
// ===============================================================================


#ifndef RANDOM_H_
#define RANDOM_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdbool.h>


void Random_LCG_Set_Seed(uint16_t seed);

// ===============================================================================

bool Random_LCG_Get_Bool_Value();

uint16_t Random_LCG_Get_UInt15_Value(uint16_t min, uint16_t max);

int16_t Random_LCG_Get_Int15_Value(int16_t min, int16_t max);

uint16_t Random_LCG_Get_UInt16_Value(uint16_t min, uint16_t max);

int16_t Random_LCG_Get_Int16_Value(int16_t min, int16_t max);

uint32_t Random_LCG_Get_UInt32_Value(uint32_t min, uint32_t max);

int32_t Random_LCG_Get_Int32_Value(int32_t min, int32_t max);

float Random_LCG_Get_Float_Value();


#endif


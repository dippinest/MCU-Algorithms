
#include <iostream>

#include "fastrandom.h"


const size_t NUM_OF_VALUES = 10000;


int main()
{
	FASTRandom_Set_Seed(0x0000);

	// генерирация 10.000 чисел в диапазоне от 0 до 256
	// -------------------------------------------------------------------------------
	// generating 10,000 numbers in the range from 0 to 256
	for (size_t i = 0; i < NUM_OF_VALUES; i++)
	{
		std::cout << FASTRandom_Get_UInt16_Value(0, 256) << ", ";
	}
}



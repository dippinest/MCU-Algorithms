
#include "fastrandom.h"

static uint16_t Seed = 0x0000;

// ===============================================================================

void FASTRandom_Set_Seed(uint16_t seed)
{
	Seed = seed;
}

uint16_t _FASTRandom_Get_Value()
{
	Seed += _FASTRANDOM_MAGIC_VALUE;

	Seed = _FASTRANDOM_ROTR(Seed, (Seed & 0b111), uint16_t);

	return Seed;
}

// ===============================================================================

bool FASTRandom_Get_Bool_Value()
{
	return (bool)(_FASTRandom_Get_Value() & 0x0001);
}

uint16_t FASTRandom_Get_UInt16_Value(uint16_t min, uint16_t max)
{
	return (uint16_t)(min + (_FASTRandom_Get_Value() % (max - min)));
}

int16_t FASTRandom_Get_Int16_Value(int16_t min, int16_t max)
{
	uint16_t r = FASTRandom_Get_UInt16_Value((uint16_t)min, (uint16_t)max);

	return (int16_t)r;
}

uint32_t FASTRandom_Get_UInt32_Value(uint32_t min, uint32_t max)
{
	uint32_t r = (uint32_t)FASTRandom_Get_UInt16_Value(0, 65535);

	r <<= 16;
	
	r |= FASTRandom_Get_UInt16_Value(0, 65535);

	return (uint32_t)(min + (r % (max - min)));
}

int32_t FASTRandom_Get_Int32_Value(int32_t min, int32_t max)
{
	uint32_t r = FASTRandom_Get_UInt32_Value((uint32_t)min, (uint32_t)max);

	return (int32_t)r;
}

float FASTRandom_Get_Float_Value()
{
	return (float)rand() / _FASTRANDOM_RAND_MAX;
}






#include "mathx.h"


int8_t MATHX_Get_Min_Int8(int8_t x1, int8_t x2)
{
	if (x1 <= x2)
	{
		return x1;
	}
	else
	{
		return x2;
	}
}

uint8_t MATHX_Get_Min_UInt8(uint8_t x1, uint8_t x2)
{
	if (x1 <= x2)
	{
		return x1;
	}
	else
	{
		return x2;
	}
}

int16_t MATHX_Get_Min_Int16(int16_t x1, int16_t x2)
{
	if (x1 <= x2)
	{
		return x1;
	}
	else
	{
		return x2;
	}
}

uint16_t MATHX_Get_Min_UInt16(uint16_t x1, uint16_t x2)
{
	if (x1 <= x2)
	{
		return x1;
	}
	else
	{
		return x2;
	}
}

int32_t MATHX_Get_Min_Int32(int32_t x1, int32_t x2)
{
	if (x1 <= x2)
	{
		return x1;
	}
	else
	{
		return x2;
	}
}

uint32_t MATHX_Get_Min_UInt32(uint32_t x1, uint32_t x2)
{
	if (x1 <= x2)
	{
		return x1;
	}
	else
	{
		return x2;
	}
}


#ifdef NUM_64BIT_SUPPORT

int64_t MATHX_Get_Min_Int64(int64_t x1, int64_t x2)
{
	if (x1 <= x2)
	{
		return x1;
	}
	else
	{
		return x2;
	}
}

uint64_t MATHX_Get_Min_UInt64(uint64_t x1, uint64_t x2)
{
	if (x1 <= x2)
	{
		return x1;
	}
	else
	{
		return x2;
	}
}

#endif


float MATHX_Get_Min_Float(float x1, float x2)
{
	if (x1 <= x2)
	{
		return x1;
	}
	else
	{
		return x2;
	}
}



// ===============================================================================


int8_t MATHX_Get_Max_Int8(int8_t x1, int8_t x2)
{
	if (x1 >= x2)
	{
		return x1;
	}
	else
	{
		return x2;
	}
}

uint8_t MATHX_Get_Max_UInt8(uint8_t x1, uint8_t x2)
{
	if (x1 >= x2)
	{
		return x1;
	}
	else
	{
		return x2;
	}
}

int16_t MATHX_Get_Max_Int16(int16_t x1, int16_t x2)
{
	if (x1 >= x2)
	{
		return x1;
	}
	else
	{
		return x2;
	}
}

uint16_t MATHX_Get_Max_UInt16(uint16_t x1, uint16_t x2)
{
	if (x1 >= x2)
	{
		return x1;
	}
	else
	{
		return x2;
	}
}

int32_t MATHX_Get_Max_Int32(int32_t x1, int32_t x2)
{
	if (x1 >= x2)
	{
		return x1;
	}
	else
	{
		return x2;
	}
}

uint32_t MATHX_Get_Max_UInt32(uint32_t x1, uint32_t x2)
{
	if (x1 >= x2)
	{
		return x1;
	}
	else
	{
		return x2;
	}
}


#ifdef NUM_64BIT_SUPPORT

int64_t MATHX_Get_Max_Int64(int64_t x1, int64_t x2)
{
	if (x1 >= x2)
	{
		return x1;
	}
	else
	{
		return x2;
	}
}

uint64_t MATHX_Get_Max_UInt64(uint64_t x1, uint64_t x2)
{
	if (x1 >= x2)
	{
		return x1;
	}
	else
	{
		return x2;
	}
}

#endif


float MATHX_Get_Max_Float(float x1, float x2)
{
	if (x1 >= x2)
	{
		return x1;
	}
	else
	{
		return x2;
	}
}



// ===============================================================================


int8_t MATHX_Get_Abs_Int8(int8_t num)
{
	if (num < 0)
	{
		return -num;
	}
	else
	{
		return num;
	}
}

int16_t MATHX_Get_Abs_Int16(int16_t num)
{
	if (num < 0)
	{
		return -num;
	}
	else
	{
		return num;
	}
}

int32_t MATHX_Get_Abs_Int32(int32_t num)
{
	if (num < 0)
	{
		return -num;
	}
	else
	{
		return num;
	}
}


#ifdef NUM_64BIT_SUPPORT

int64_t MATHX_Get_Abs_Int64(int64_t num)
{
	if (num < 0)
	{
		return -num;
	}
	else
	{
		return num;
	}
}

#endif


float MATHX_Get_Abs_Float(float num)
{
	if (num < 0)
	{
		return -num;
	}
	else
	{
		return num;
	}
}



// ===============================================================================


int8_t MATHX_Constrain_Int8(int8_t val, int8_t min, int8_t max)
{
	if (val <= min)
	{
		return min;
	}

	if (val >= max)
	{
		return max;
	}

	return val;
}

uint8_t MATHX_Constrain_UInt8(uint8_t val, uint8_t min, uint8_t max)
{
	if (val <= min)
	{
		return min;
	}

	if (val >= max)
	{
		return max;
	}

	return val;
}

int16_t MATHX_Constrain_Int16(int16_t val, int16_t min, int16_t max)
{
	if (val <= min)
	{
		return min;
	}

	if (val >= max)
	{
		return max;
	}

	return val;
}

uint16_t MATHX_Constrain_UInt16(uint16_t val, uint16_t min, uint16_t max)
{
	if (val <= min)
	{
		return min;
	}

	if (val >= max)
	{
		return max;
	}

	return val;
}

int32_t MATHX_Constrain_Int32(int32_t val, int32_t min, int32_t max)
{
	if (val <= min)
	{
		return min;
	}

	if (val >= max)
	{
		return max;
	}

	return val;
}

uint32_t MATHX_Constrain_UInt32(uint32_t val, uint32_t min, uint32_t max)
{
	if (val <= min)
	{
		return min;
	}

	if (val >= max)
	{
		return max;
	}

	return val;
}


#ifdef NUM_64BIT_SUPPORT


int64_t MATHX_Constrain_Int64(int64_t val, int64_t min, int64_t max)
{
	if (val <= min)
	{
		return min;
	}

	if (val >= max)
	{
		return max;
	}

	return val;
}

uint64_t MATHX_Constrain_UInt64(uint64_t val, uint64_t min, uint64_t max)
{
	if (val <= min)
	{
		return min;
	}

	if (val >= max)
	{
		return max;
	}

	return val;
}

#endif


float MATHX_Constrain_Float(float val, float min, float max)
{
	if (val <= min)
	{
		return min;
	}

	if (val >= max)
	{
		return max;
	}

	return val;
}



// ===============================================================================


int32_t MATHX_Scaling_Int32(int32_t val, int32_t input_min_val, int32_t input_max_val, int32_t output_min_val, int32_t output_max_val)
{
	int32_t new_val = ((val - input_min_val) * (output_max_val - output_min_val)) /
	(input_max_val - input_min_val) + output_min_val;

	return new_val;
}

uint32_t MATHX_Scaling_UInt32(uint32_t val, uint32_t input_min_val, uint32_t input_max_val, uint32_t output_min_val, uint32_t output_max_val)
{
	uint32_t new_val = ((val - input_min_val) * (output_max_val - output_min_val)) /
	(input_max_val - input_min_val) + output_min_val;

	return new_val;
}


#ifdef NUM_64BIT_SUPPORT


int64_t MATHX_Scaling_Int64(int64_t val, int64_t input_min_val, int64_t input_max_val, int64_t output_min_val, int64_t output_max_val)
{
	int64_t new_val = ((val - input_min_val) * (output_max_val - output_min_val)) /
	(input_max_val - input_min_val) + output_min_val;

	return new_val;
}

uint64_t MATHX_Scaling_UInt64(uint64_t val, uint64_t input_min_val, uint64_t input_max_val, uint64_t output_min_val, uint64_t output_max_val)
{
	uint64_t new_val = ((val - input_min_val) * (output_max_val - output_min_val)) /
	(input_max_val - input_min_val) + output_min_val;

	return new_val;
}

#endif


float MATHX_Scaling_Float(float val, float input_min_val, float input_max_val, float output_min_val, float output_max_val)
{
	float new_val = ((val - input_min_val) * (output_max_val - output_min_val)) /
	(input_max_val - input_min_val) + output_min_val;

	return new_val;
}



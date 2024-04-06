

#include "mathx.h"

int16_t MATHX_Constraint_Int16(int16_t val, int16_t min, int16_t max)
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

uint16_t MATHX_Constraint_UInt16(uint16_t val, uint16_t min, uint16_t max)
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

int32_t MATHX_Constraint_Int32(int32_t val, int32_t min, int32_t max)
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

uint32_t MATHX_Constraint_UInt32(uint32_t val, uint32_t min, uint32_t max)
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


int64_t MATHX_Constraint_Int64(int64_t val, int64_t min, int64_t max)
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

uint64_t MATHX_Constraint_UInt64(uint64_t val, uint64_t min, uint64_t max)
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


float MATHX_Constraint_Float(float val, float min, float max)
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



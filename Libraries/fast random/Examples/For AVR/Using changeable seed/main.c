

#include <util/delay.h>

#include "uart.h"
#include "itoa.h"
#include "fastrandom.h"


char buffer[16];


// пример функции, генерирующей начальное значение зерна для ГПСЧ.
// Данная функция использует 2 ячейки внутренней EEPROM для хранения
// начального значения зерна, и его модификации.
//
// Подобный подход можно использовать, когда нет возможности
// использовать источник энтропии
// (например, в микроконтроллере ATtiny2313, где нет АЦП).
//
// -------------------------------------------------------------------------------
// an example of a function that generates the initial grain value
// for the RNG. This function uses 2 cells of the internal EEPROM
// to store the initial value of the grain, and its modification.
//
// A similar approach can be used when it is not possible
// to use an entropy source (for example, in the ATtiny2313
// microcontroller, where there is no ADC).
//
uint16_t Get_Random_Seed_From_Internal_EEPROM(uint16_t init_eeprom_addr)
{
	#include <avr/eeprom.h>
	
	
	uint16_t eeprom_addr_ptr;
	
	
	uint16_t a = eeprom_read_word(&init_eeprom_addr);
	
	eeprom_addr_ptr = a ^ init_eeprom_addr;
	
	uint16_t b = eeprom_read_word(&eeprom_addr_ptr);
	

	uint16_t res = a + b;

	uint16_t eeprom_value_temp;

	if (a <= b)
	{
		eeprom_value_temp = eeprom_read_word(&eeprom_addr_ptr);

		eeprom_value_temp += a;

		if (eeprom_value_temp == 0)
		{
			eeprom_value_temp = 1;
		}
		
		eeprom_addr_ptr = a ^ init_eeprom_addr;
		
		eeprom_write_word(&eeprom_addr_ptr, eeprom_value_temp);



		eeprom_value_temp = eeprom_read_word(&init_eeprom_addr);

		eeprom_value_temp += res;

		if (eeprom_value_temp == 0)
		{
			eeprom_value_temp = 1;
		}

		eeprom_write_word(&init_eeprom_addr, eeprom_value_temp);
	}
	else
	{
		eeprom_value_temp = eeprom_read_word(&eeprom_addr_ptr);

		eeprom_value_temp += res;

		if (eeprom_value_temp == 0)
		{
			eeprom_value_temp = 1;
		}
		
		eeprom_addr_ptr = a ^ init_eeprom_addr;
		
		eeprom_write_word(&eeprom_addr_ptr, eeprom_value_temp);



		eeprom_value_temp = eeprom_read_word(&init_eeprom_addr);

		eeprom_value_temp += b;

		if (eeprom_value_temp == 0)
		{
			eeprom_value_temp = 1;
		}

		eeprom_write_word(&init_eeprom_addr, eeprom_value_temp);
	}

	return res;
}



int main(void)
{
	UART_Initialize(115200, true, false);
	
	ITOA_Set_String_Buffer(buffer);
	
	
	FASTRandom_Set_Seed(Get_Random_Seed_From_Internal_EEPROM(0x0000));
	
	while (1)
	{
		// генерируем случайное число типа int16_t
		// в диапазоне от 0 до (10_000 - 1)
		//
		// -------------------------------------------------------------------------------
		// generating a random number of type int16_t
		// in the range from 0 to (10_000 - 1)
		//
		int16_t random_number = FASTRandom_Get_Int16_Value(0, 10000);
		
		UART_StringLn_Transmit(ITOA_Int16_To_String(random_number, 8));
		
		_delay_ms(100);
	}
}


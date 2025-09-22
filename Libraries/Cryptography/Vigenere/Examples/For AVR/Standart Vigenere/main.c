
#include <string.h>

#include "uart.h"
#include "vigenere.h"


// алфавит, использующийся для шифра Вижинера.
// В алфавите должны быть все символы текста, присутствующие в тексте
// входных данных и ключе шифрования
// -------------------------------------------------------------------------------
// this alphabet used for the Vizhiner cipher.
// The alphabet must contain all the characters of the text present
// in the text of the input data and the encryption key
char alphabet[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890 ";


char data[] = "This is my a supersecret data";

char key[] = "Supersecret key!";


int main(void)
{
	UART_Initialize(9600, true, false);
	
	// получение значения длины строк, с которыми работаем
	// -------------------------------------------------------------------------------
	// getting the length of the strings
	const uint16_t alphabet_size = strlen(alphabet);
	const uint16_t data_size = strlen(data);
	const uint16_t key_size = strlen(key);
	
	
	UART_StringFmt_Transmit("Open data:    %s\r\n\r\n", data);
	Vigenere_Standart_Encrypt(alphabet, alphabet_size, data, data_size, key, key_size);

	UART_StringFmt_Transmit("Encrypt data: %s\r\n\r\n", data);
	Vigenere_Standart_Decrypt(alphabet, alphabet_size, data, data_size, key, key_size);

	UART_StringFmt_Transmit("Decrypt data: %s\r\n\r\n", data);
	
	while (1)
	{
	}
}



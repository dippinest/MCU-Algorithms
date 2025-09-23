

// ===============================================================================
//
// Эта библиотека реализует криптографический шифр Виженера
// в стандартном и модифицированном варианте.
// В стандартном варианте использует алфавит, содержащий символы ASCII
// (алфавит задаётся индивидуально и может содержать произвольный набор символов).
// В модифицированном варианте алгоритма работа производится с отдельными байтами,
// используя процедуры сложения или фунции XOR
//
// -------------------------------------------------------------------------------
//
// This library implements the Vigener cryptographic cipher
// in a standard and modified version.
// The standard version uses an alphabet containing ASCII characters
// (the alphabet is set individually and can contain any set of characters).
// In a modified version of the algorithm, work is performed with individual bytes
// using the addition or XOR function procedures.
//
// ===============================================================================


#ifndef VIGENERE_H_
#define VIGENERE_H_


#include <stdint.h>


uint16_t Vigenere_Standart_Encrypt(void* alphabet, uint8_t alphabet_size, void* data, uint16_t data_size, void* key, uint16_t key_size);

uint16_t Vigenere_Standart_Decrypt(void* alphabet, uint8_t alphabet_size, void* data, uint16_t data_size, void* key, uint16_t key_size);

uint16_t Vigenere_Bytes_Encrypt(void* data, uint16_t data_size, void* key, uint16_t key_size);

uint16_t Vigenere_Bytes_Decrypt(void* data, uint16_t data_size, void* key, uint16_t key_size);


// если в случае использования данной функции длина ключа будет равна или больше длине
// шифруемого сообщения, то шифрование будет происходить по методу Вернама
// -------------------------------------------------------------------------------
// if, in the case of using this function, the key length is equal to or greater
// than the length of the encrypted message, then encryption will be performed using the Vernam method
uint16_t Vigenere_XOR_Bytes_Encrypt(void* data, uint16_t data_size, void* key, uint16_t key_size);

uint16_t Vigenere_XOR_Bytes_Decrypt(void* data, uint16_t data_size, void* key, uint16_t key_size);


#endif





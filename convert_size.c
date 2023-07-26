#include "main.h"
/**
 * convert_size_integer - function
 * @num: parametre
 * @size: parametre
 * Return: Number
 */
long int convert_size_integer(long int num, int size)
{
	if (size == S_LONG)
		return (num);
	else if (size == S_SHORT)
		return ((short)num);
	return ((int)num);
}
/**
 * convert_size_unsigned - function
 * @num: parametre
 * @size: parametre
 * Return: Number
 */
long int convert_size_unsigned(unsigned long int num, int size)
{
	if (size == S_LONG)
		return (num);
	else if (size == S_SHORT)
		return ((unsigned short)num);
	return ((unsigned int) num);
}

#include "main.h"
/**
 * handle_specifierp - function to print the adresse
 * @ap: parametre
 * Return: Number of printed characters
 */
int handle_specifierp(va_list ap,int size)
{
	int len = 0;
	len = len + _puts("0x");
	len = len + decimalToHexadecimalLow(ap, size);
	return (len);
}

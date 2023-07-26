#include "main.h"

int printHexaUpper(unsigned long int n);
int printHexalower(unsigned long int n);
/**
 * decimalToHexadecimalLow - function to convert dec to hex in low case
 * @ap: unsigned parametre
 * Return: number of characters printed
 */
int decimalToHexadecimalLow(va_list ap , int size)
{
	int len = 0;
	unsigned long int n;

	n = va_arg(ap, unsigned long int);
	n = convert_size_unsigned(n, size);
	if (n == 0)
	{
		_putchar('0');
		len++;
		return (len);
	}
	if (n > 0)
	{
		len = printHexalower(n);
	}
	return (len);
}
/**
 * decimalToHexadecimalUpp - fucntion
 * @ap: parametre
 * Return: number
 */
int decimalToHexadecimalUpp(va_list ap, int size)
{
	int len = 0;
	unsigned long int n;

	n = va_arg(ap, unsigned long int);
	n = convert_size_unsigned(n, size);
	if (n == 0)
	{
		_putchar('0');
		len++;
		return (len);
	}
	if (n > 0)
	{
		len = printHexaUpper(n);
	}
	return (len);
}
/**
 * printHexalower - print hexa charac in lower case
 * @n: parametre
 * Return: Number of parametre printed
 */
int printHexalower(unsigned long int n)
{
	char hexDigits[] = "0123456789abcdef";
	int len = 0;
	
	if (n > 0)
	{
		len = printHexalower(n / 16) + 1;
		_putchar(hexDigits[n % 16]);
	}
	return (len);
}
/**
 * printHexaUpper - print hexa charac in upper case
 * @n: parametre
 * Return: Number of printed characters
 */
int printHexaUpper(unsigned long  int n)
{
	char hexDigits[] = "0123456789ABCDEF";
	int len = 0;

	if (n > 0)
	{
		len = printHexaUpper(n / 16) + 1;
		_putchar(hexDigits[n % 16]);
	}
	return (len);
}

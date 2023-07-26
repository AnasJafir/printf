#include "main.h"
int printDigits(long int n);
int handle_specifieri(va_list ap, int size)
{
	long int value;
	int len1 = 0;
	int len2;

	value = va_arg(ap, long int);
	value = convert_size_integer(value, size);
	if (value == 0)
	{
		_putchar('0');
		len1++;
		return (len1);
	}
	if (value < 0)
	{
		_putchar('-');
		len1++;
		value = - value;
	}
	len2 = printDigits(value);
	return(len2 + len1);
}
int printDigits(long int n)
{
	int len = 0;

	if (n == 0)
		return len;
	else
	{
		printDigits(n / 10);
		_putchar('0' + (n % 10));
		len++;
	}
	return (len);
}

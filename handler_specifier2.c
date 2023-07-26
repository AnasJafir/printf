#include "main.h"
int decimalToBinary(unsigned int n);
int handle_specifierb(va_list ap, __attribute__((unused)) int size)
{
	unsigned int n;

	n = va_arg(ap, unsigned int);
	return (decimalToBinary(n));
}
int decimalToBinary(unsigned int n)
{
	int len = 0;

	if (n == 0)
	{
		_putchar('0');
		return (len++);
	}
	else
	{
		if (n > 1)
		{
			decimalToBinary(n / 2);
		}
		_putchar('0' + n % 2);
		len++;
	}
	return (len);
}

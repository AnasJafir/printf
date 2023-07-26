#include "main.h"
int convert_to_binary(unsigned int n,__attribute__((unused)) int size)
{
	unsigned int dev = n / 2;
	int len = 0;

	if (dev == 0)
	{
		return (len);
	}
	convert_to_binary(dev, size);
	_putchar('0' + n % 2);
	len++;
	return (len);
}

#include "main.h"
/**
 * print_unsigned - print unsigned integers
 * @num: integer input
 * Return: number of printed chars
*/
int print_unsigned(unsigned int num)
{
	int total = 0;
	unsigned int temp;
	int digit[10];
	int count = 0;

	if (num == 0)
	{
		_putchar('0');
		return (1);
	}
	temp = num;
	while (temp > 0)
	{
		digit[count] = temp % 10;
		temp /= 10;
		count++;
	}
	while (count > 0)
	{
		_putchar('0' + digit[count - 1]);
		total++;
		count--;
	}
	return (total);
}

#include "main.h"
/**
 * print_octal - produces output to octal format
 * @num: integer input
 * Return: number of printed chars
*/
int print_octal(unsigned int num)
{
	int total = 0;
	int count = 0;
	int digit[21];
	unsigned int temp;

	if (num == 0)
	{
		_putchar('0');
		return (1);
	}
	while (num != 0)
	{
		temp = num % 8;
		digit[count] = temp;
		num = num / 8;
		total++;
		count++;
	}
	while (count > 0)
	{
		_putchar('0' + digit[count - 1]);
		count--;
	}
	return (total);
}

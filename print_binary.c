#include "main.h"
/**
 * print_binary - print integer in binary format
 * @num: integer input
 * Return: number of printed chars
*/
int print_binary(unsigned int num)
{
	int total = 0;
	int count = 0;
	int digit[32];
	int temp;

	if (num == 0)
	{
		_putchar('0');
		return (1);
	}
	while (num != 0)
	{
		temp = num % 2;
		digit[count] = temp;
		num = num / 2;
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

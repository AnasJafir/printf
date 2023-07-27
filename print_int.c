#include "main.h"
/**
 * print_int - print integers
 * @num: integer input
 * Return: number of printed chars
*/
int print_int(int num)
{
	int total_length = 0;
	int temp, count;
	int digits[10];

	if (num == 0)
	{
		_putchar('0');
		return (1);
	}
	else if (num < 0)
	{
		_putchar('-');
		num = -num;
		total_length++;
	}
	temp = num;
	count = 0;
	while (temp > 0)
	{
		digits[count] = temp % 10;
		temp /= 10;
		count++;
	}
	while (count > 0)
	{
		_putchar('0' + digits[count - 1]);
		total_length++;
		count--;
	}
	return (total_length);
}

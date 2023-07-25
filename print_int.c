#include "main.h"
/**
 * print_int - produces ouput according to integer format
 * @num: integer input
 * Return: number of characters printed
*/
int print_int(int num)
{
	int temp;
	int count;
	int digit[10];
	int total_length;

	if (num == 0)
	{
		_putchar('0');
		return (1);
	}
	total_length = 0;
	if (num < 0)
	{
		_putchar('-');
		num = -num;
		total_length++;
	}
	temp = num;
	count = 0;

	while (temp > 0)
	{
		digit[count] = temp % 10;
		temp /= 10;
		count++;
	}
	while (count > 0)
	{
		_putchar('0' + digit[count - 1]);
		total_length++;
		count--;
	}
	return (total_length);
}

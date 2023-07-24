#include <stdio.h>
#include <limits.h>
/**
 * print_unsgd - produces ouput to unsigned format
 * @num: integer input
 * Return: number of printed characters
*/
int print_unsgd(unsigned int num)
{
	int count = 0;
	int total = 0;
	int digit[10];
	unsigned int temp = num;

	if (num == 0)
	{
		putchar('0');
		return (1);
	}
	while (temp > 0)
	{
		digit[count] = temp % 10;
		temp /= 10;
		count++;
	}
	while (count > 0)
	{
		putchar('0' + digit[count - 1]);
		total++;
		count--;
	}
	return (total);
}

#include <stdio.h>
/**
 * print_binary - produces output to the binary format
 * @num : integer input
 * Return: the number of characters printed
*/
int print_binary(unsigned int num)
{
	int count = 0;
	int total = 0;
	int digit[32];
	int temp;

	if (num == 0)
	{
		putchar('0');
		return (1);
		total++;
	}
	while (temp > 0)
	{
		temp = num % 2;
		digit[count] = temp;
		num = num / 2;
		total++;
		count++;
	}
	while (count > 0)
	{
		putchar('0' + digit[count - 1]);
		count--;
	}
	return (total);
}

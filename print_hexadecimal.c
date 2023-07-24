#include <stdio.h>
/**
 * print_hexadecimal - produces output to the hexadecimal format
 * @num: integer input to be converted
 * @hex_case: char input for case of characters
 * Return: the number of printed characters
*/
int print_hexadecimal(unsigned int num, char hex_case)
{
	int total = 0;
	int count = 0;
	char digit[10];
	unsigned int temp;

	if (num == 0)
	{
		putchar('0');
		return (1);
	}
	while (num != 0)
	{
		temp = num / 16;
		temp = num % 16;
		if (temp < 10)
			digit[count] = '0' + temp;
		else
		{
			if (hex_case == 'x')
				digit[count] = 'a' + (temp - 10);
			else if (hex_case == 'X')
				digit[count] = 'A' + (temp - 10);
		}
		num = num / 16;
		total++;
		count++;
	}
	while (count > 0)
	{
		putchar(digit[count - 1]);
		count--;
	}
	return (total);
}

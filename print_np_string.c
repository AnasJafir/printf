#include "main.h"
/**
 * print_np_string - produces output to string format with non printable chars
 * @str: string input
 * Return: number of printed chars
*/
int print_np_string(char *str)
{
	int i;
	int len = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] < 32 || str[i] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			_putchar('0');
			print_hexadecimal(str[i], 'X');
			len += 4;
		}
		else
		{
			_putchar(str[i]);
			len++;
		}
	}
	return (len);
}

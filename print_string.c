#include "main.h"
/**
 * print_string - produces output to the string format
 * @str: string output
 * Return: number of characters printed
*/
int print_string(char *str)
{
	int i, len;

	for (i = 0; str[i] != 0; i++)
	{
		_putchar(str[i]);
		len++;
	}
	return (len);
}

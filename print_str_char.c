#include "main.h"
/**
 * print_string - prints a string
 * @str: string input
 * Return: number of printed chars
*/
int print_string(char *str)
{
	int i;
	int len = 0;

	for (i = 0; str[i] != 0; i++)
	{
		_putchar(str[i]);
		len++;
	}
	return (len);
}
/**
 * print_char - print a characters
 * @c: character input
 * Return: number of printed chars
*/
int print_char(char c)
{
	int len;

	_putchar(c);
	len++;
	return (len);
}

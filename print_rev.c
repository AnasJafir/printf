#include "main.h"

/**
 * _strlen - computes the length of a string
 * @str: input string
 * Return: length of the string
 */
int _strlen(const char *str)
{
	int len = 0;

	while (str[len] != '\0')
		len++;
	return (len);
}

/**
 * print_reversed_string - prints the reversed string
 * @str: string to be reversed and printed
 * Return: number of characters printed
 */
int print_reversed_string(char *str)
{
	int len = _strlen(str);
	int total = 0;

	for (int i = len - 1; i >= 0; i--)
	{
		_putchar(str[i]);
		total++;
	}
	return (total);
}

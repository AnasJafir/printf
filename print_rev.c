#include "main.h"
/**
* print_rev - print a string in reverse
* @str: input string
* Return: the number of printed chars
*/
int print_rev(char *str)
{
	int total = 0;
	int length = _strlen(str);

	for (int i = length - 1; i >= 0; i--)
	{
		_putchar(str[i]);
		total += 1;
	}
	return (total);
}

#include "main.h"
/**
 * _puts - function
 * @str: parametre
 */
int _puts(char *str)
{
	int len = 0;

	while (*str != '\0')
	{
		_putchar(*str);
		str++;
		len++;
	}
	return (len);
}

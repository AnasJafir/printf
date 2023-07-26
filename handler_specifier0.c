#include "main.h"
int handle_char(va_list ap, int size)
{	
	int len = 0;

	UNUSED(size);
	_putchar(va_arg(ap, int));
	len++;
	return (len);
}
int handle_string(va_list ap, __attribute__((unused)) int size)
{
	char *str;
	int i, len = 0;

	str = va_arg(ap, char *);
	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
		len++;
	}
	return (len);
}
int handle_percent(va_list ap, __attribute__((unused)) int size)
{
	int len = 0;

	_putchar(va_arg(ap, int));
	len++;
	return(len);
}

#include "main.h"
/**
 * _printf - function
 *
 *
 * Return : length
 */
int _printf(const char *format, ...)
{
	va_list ap;
	char __attribute__ ((unused)) *str;
	int len1 = 0, len2 = 0, i, size = 0;

	va_start(ap, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			len1++;
		}
		else
		{	
			size = get_lengthModifier(format, &i);
			len2 = get_functionSpecifier(format,&i,ap,size);
		}
	}
	va_end(ap);
	return (len1 + len2);
}

#include "main.h"
/**
 * get_lengthModifier - get the length
 * @format: parametre
 * @i: position
 */
int get_lengthModifier(const char *format, int *i)
{
	int size = 0;
	int j = *i + 1;

	if (format[j] == 'l'){
		size = S_LONG;
	}
	else if (format[j] == 'h')
	{
		size = S_SHORT;
	}
	if (size == 0)
	{
		*i = j;
	}
	else 
		*i = j + 1;
	return (size);
}

#include "main.h"
/** get_functionSpecifier - exxecute the function correponds to the specifier
 * @p: specifier
 * Return: Number of characters printed
 */
int get_functionSpecifier(const char *format,int *ind,va_list ap, int size)
{	
	int len;
	fmt array[] = {
		{'c', handle_char},
		{'s', handle_string},
		{'%', handle_percent},
		{'i', handle_specifieri},
		{'d', handle_specifieri},
		{'b', handle_specifierb},
		{'o', decimalToOctal},
		{'x', decimalToHexadecimalLow},
		{'X', decimalToHexadecimalUpp},
		{'p', handle_specifierp}
	};
	int k = 10;
	int i;

	for (i = 0; i < k; i++)
	{
		if (array[i].c == format[*ind])
		{
			len = array[i].f(ap, size);
		}
	}
	return (len);
}

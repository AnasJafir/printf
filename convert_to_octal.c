#include "main.h"
/**
 * decimalToOctal - function to convert from dec t Oct
 * @n: unsigned parametre
 * Return: number of characters printed
 */
int printOctal(unsigned long int n);
int decimalToOctal(va_list ap, int size)
{
        int len = 0;
        unsigned long int n;

        n = va_arg(ap, unsigned long int);
	n = convert_size_unsigned(n,size);
        if (n == 0)
        {
                _putchar('0');
                len++;
        }
        if (n > 0)
        {
                printOctal(n);
        }
        return (len);
}
/**
 * printOctal - function to print octal
 * @n: parametre
 */
int printOctal(unsigned long int n)
{
	int len = 0;

	if (n > 0)
	{
		len = printOctal(n / 8) + 1;
		_putchar('0' + n % 8);
	}
	return (len);
}

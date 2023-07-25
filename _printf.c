#include "main.h"
/**
 * _printf - produces output according to a format
 * @format: string containing the specifier and the text to prin
 * Return: number of characters printed
*/
int _printf(const char *format, ...)
{
	int i;
	int total = 0;
	char hex_case;
	char buffer[1024];
	int buffer_i = 0;
	hp conv;
	va_list args;

	va_start(args, format);
	for (i = 0; format[i] != 0; i++)
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == 's')
			{
				conv.s_conv = va_arg(args, char *);
				conv.type = 's';
				total += print_string(conv.s_conv);
			}
			else if (format[i] == 'c')
			{
				conv.c_conv = va_arg(args, int);
				conv.type = 'c';
				total += print_char(conv.c_conv);
			}
			else if (format[i] == 'd' || format[i] == 'i')
			{
				conv.i_conv = va_arg(args, int);
				conv.type = 'd';
				total += print_int(conv.i_conv);
			}
			else if (format[i] == 'b')
			{
				conv.b_conv = va_arg(args, unsigned int);
				conv.type = 'b';
				total += print_char(conv.b_conv);
			}
			else if (format[i] == 'u')
			{
				conv.u_conv = va_arg(args, unsigned int);
				conv.type = 'u';
				total += print_unsgd(conv.u_conv);
			}
			else if (format[i] == 'o')
			{
				conv.o_conv = va_arg(args, unsigned int);
				conv.type = 'o';
				total += print_octal(conv.o_conv);
			}
			else if (format[i] == 'x' || format[i] == 'X')
			{
				hex_case = format[i];
				conv.x_conv = va_arg(args, unsigned int);
				total += print_hexadecimal(conv.x_conv, hex_case);
			}
			else if (format[i] == 'S')
			{
				conv.S_conv = va_arg(args, char *);
				conv.type = 'S';
				total += print_np_string(conv.S_conv);
			}
			else if (format[i] == '%')
			{
				_putchar('%');
				total++;
			}
		}
		else
		{
			_putchar(format[i]);
			total++;
		}
		if (buffer_i == 1024 || format[i] == '%')
		{
			write(1, buffer, buffer_i);
			total += buffer_i;
			buffer_i = 0;
		}
	}
	va_end(args);
	if (buffer_i > 0)
	{
		write(1, buffer, buffer_i);
		total += buffer_i;
	}
	return (total);
}

#ifndef MAIN_H
#define MAIN_H

#include <limits.h>

#define BINARY_FORMAT "%b"

/**
 * struct converters - handles different printf converters
 * @s_conv: pointer to a string for %s placeholder
 * @c_conv: character for %c placeholder
 * @i_conv: integer for %d and %i placeholders
 * @b_conv: integer for %b placeholder
 * @u_conv: integer for %u placeholder
 * @o_conv: integer for %o placeholder
 * @x_conv: integer for %x placeholder
 * @X_conv: integer for %X placeholder
 * @S_conv: integer for %S placeholder
 * @type: type of conversion;
 *        's' for strings
 *        'c' for characters
 *        'i' or 'd' for integers
 *        'b' for binary format
 *        'u' for unsigned integers
 *        'o' for octal format
 *        'x' for hexadecimal format with lowercase characters
 *        'X' for hexadecimal format with uppercase characters
 *        'S' for string with non printable characters
*/
typedef struct converters
{
	char *s_conv;
	char *S_conv;
	char c_conv;
	int i_conv;
	unsigned int b_conv;
	unsigned int u_conv;
	unsigned int o_conv;
	unsigned int x_conv;
	unsigned int X_conv;
	char type;
} hp;

int print_string(char *str);
int print_char(char c);
int print_int(int num);
int print_unsgd(unsigned int num);
int print_octal(unsigned int num);
int print_hexadecimal(unsigned int num, char hex_case);
int print_np_string(char *str);
int _printf(const char *format, ...);

#endif

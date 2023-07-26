#ifndef MAIN_H
#define MAIN_H
#define S_LONG 2
#define S_SHORT 1
#define UNUSED(x) (void)(x)
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
int _printf(const char *format, ...);
int _putchar(char c);
int _strlen(char *c);
int _puts(char *str);
void  print_int(va_list ap, int size);
int handle_char(va_list ap, int size);
int handle_string(va_list ap, int size);
int handle_percent(va_list ap, int size);
int handle_specifieri(va_list ap, int size);
int handle_specifierb(va_list ap, int size);
int convert_to_binary(unsigned int n, int size);
int decimalToOctal(va_list ap, int size);
int decimalToHexadecimalLow(va_list ap, int size);
int decimalToHexadecimalUpp(va_list ap, int size);
/**
 * struct functionSpecifier - struct to choose the right function according to the specifier
 * @c: specifier
 * @f: pointer to the right function
 */
typedef struct typeformat
{
	char c;
	int (*f)(va_list ap, int size);
} fmt;
int get_functionSpecifier(const char *format,int *ind,va_list ap, int size);
int handle_specifierp(va_list ap, int size);
int get_lengthModifier(const char *format, int *i);
long int convert_size_integer(long int num, int size);
long int convert_size_unsigned(unsigned long int num, int size);
#endif

#include <stdio.h>
/**
 * print_char - produces outupe to the character format
 * @c: character input
 * Return: number of characters printed
*/
int print_char(char c)
{
	int len = 0;

	putchar(c);
	len++;
	return (len);
}

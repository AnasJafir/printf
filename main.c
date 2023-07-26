#include "main.h"
int main(void)
{
	int len;
	len = _printf("This is a character %c\n", 'C');
	_printf("%i\n", len);
	len = _printf("This is a string %s\n", "ILYAS");
	_printf("%i\n", len);
	len = _printf("This is a percentage %%\n");
	_printf("%i\n", len);
	len = _printf("This is a integer %d\n", 145);
	_printf("%i\n", len);
	len = _printf("This is a binary %b\n", 145);
	_printf("%i\n", len);
	len = _printf("This is a Octal %o\n", 145);
	_printf("%i\n", len);
	len = _printf("This is a hexalow %x\n", 4567);
	_printf("%i\n", len);
	len = _printf("This is a hexaUpp %X\n", 4567);
	_printf("%i\n", len);
	len = _printf("This is a pointer %x\n", 4567);
	_printf("%i\n", len);
	return (0);
}

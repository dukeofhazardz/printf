#include "main.h"

int printf_char(va_list arg)
{
	char s;

	s = va_arg(arg, int);
	_putchar(s);

	return (1);
}

#include "main.h"

int printf_octal(va_list arg)
{
	unsigned int i, n;

	n = va_arg(arg, unsigned int);
	i = _puts(convert(n, 8));
	return (i);
}
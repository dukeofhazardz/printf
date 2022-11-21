#include "main.h"

int printf_HEX(va_list arg)
{
	unsigned int i, n;

	n = va_arg(arg, unsigned int);
	i = _puts(convert_HEX(n, 16));
	return (i);
}

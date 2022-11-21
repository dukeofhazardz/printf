#include "main.h"

int printf_bin(va_list arg)
{
	unsigned int i, n;

	n = va_arg(arg, unsigned int);
	i = _puts(convert(n, 2));
	return (i);
}

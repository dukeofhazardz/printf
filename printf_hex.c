#include "main.h"

/**
 * printf_hex - A function that coverts to Hexadecimal
 * @arg: a character arguement
 * Return: Integer.
 */

int printf_hex(va_list arg)
{
	unsigned int i, n;

	n = va_arg(arg, unsigned int);
	i = _puts(convert(n, 16));
	return (i);
}

#include "main.h"

/**
 * printf_HEX - A function that coverts to Hexadecimal
 * @arg: a character arguement
 * Return: Integer.
 */

int printf_HEX(va_list arg)
{
	unsigned int i, n;

	n = va_arg(arg, unsigned int);
	i = _puts(convert_HEX(n, 16));
	return (i);
}

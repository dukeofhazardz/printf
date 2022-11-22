#include "main.h"

/**
 * printf_char - A function that prints a char
 * @arg: a character arguement
 * Return: integer
 */

int printf_char(va_list arg)
{
	char s;

	s = va_arg(arg, int);
	_putchar(s);

	return (1);
}

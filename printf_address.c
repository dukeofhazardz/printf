#include "holberton.h"

/**
 * printf_address - prints an hexgecimal number.
 * @arg: arguments.
 * Return: counter.
 */
int printf_pointer(va_list arg)
{
	void *p;
	char *s = "(nil)";
	long int a;
	int b;
	int i;

	p = va_arg(arg, void*);
	if (p == NULL)
	{
		for (i = 0; s[i] != '\0'; i++)
		{
			_putchar(s[i]);
		}
		return (i);
	}

	a = (unsigned long int)p;
	_putchar('0');
	_putchar('x');
	b = printf_hex(a);
	return (b + 2);
}

#include "main.h"

/**
 * printf_bin - A function that coverts to binary
 * @arg: a charcter arguement
 * Return: an integer.
 */

int printf_bin(va_list arg)
{
	int i, cont, flag, a, b;
	unsigned int num, p;

	flag = 0;
	cont = 0;
	a = 1;
	num = va_arg(arg, unsigned int);

	for (i = 0; i < 32; i++)
	{
		p = ((a << (31 - i)) & num);
		if (p >> (31 - i))
			flag = 1;
		if (flag)
		{
			b = p >> (31 - i);
			_putchar(b + 48);
			cont++;
		}
	}
	if (cont == 0)
	{
		cont++;
		_putchar('0');
	}
	return (cont);
}

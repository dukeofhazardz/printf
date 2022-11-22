#include "main.h"

/**
 * _printf - A function that prints formated string.
 * @format: is the format specifier.
 * Return: an integer.
 */

int _printf(const char *format, ...)
{
	convert_match m[] = {
		{"%s", printf_string}, {"%c", printf_char},
		{"%%", printf_per37}, {"%i", printf_int},
		{"%d", printf_deci}, {"%r", printf_strev},
		{"%R", printf_rot13}, {"%b", printf_bin},
		{"%u", printf_unsigned}, {"%o", printf_octal},
		{"%x", printf_hex}, {"%X", printf_HEX}
		/*
		 * {"%S", printf_exclusive_str}, {"%p", printf_address}
		*/
	};
	va_list args;
	int i = 0, j, len = 0;

	va_start(args, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);

Here:
	while (format[i] != '\0')
	{
		j = 11;
		while (j >= 0)
		{
			if (m[j].id[0] == format[i] && m[j].id[1] == format[i + 1])
			{
				len += m[j].f(args);
				i = i + 2;
				goto Here;
			}
			j--;
		}
		_putchar(format[i]);
		len++;
		i++;
	}
	va_end(args);
	return (len);
}

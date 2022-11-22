#include "main.h"
/**
 * printf_exclusive_str - print exclusuives string.
 * @arg: arguement.
 * Return: the length of the string.
 */

int printf_exclusive_str(va_list arg)
{
	char *s;
	int i, len = 0;
	int cast;

	s = va_arg(arg, char *);
	if (s == NULL)
		s = "(null)";
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] < 32 || s[i] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			len = len + 2;
			cast = s[i];
			if (cast < 16)
			{
				_putchar('0');
				len++;
			}
			len = len + printf_HEX_convert(cast);
		}
		else
		{
			_putchar(s[i]);
			len++;
		}
	}
	return (len);
}

#include "main.h"

int _puts(char *s)
{
	int i, len;
	len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	for (i = 0; i < len; i++)
	{
		_putchar(s[i]);
	}
	return (1);
}

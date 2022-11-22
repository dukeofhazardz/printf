#include "main.h"

/**
 * _puts - A function that prints a string.
 * @s: Is an array of strings.
 * Return: an integer.
 */

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

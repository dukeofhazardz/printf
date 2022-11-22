#include "main.h"

/**
 * convert - A function that converts bases
 * @n: a character arguement
 * @base: base to be converted to
 * Return: a pointer
 */

char *convert(unsigned int n, int base)
{
	static const char Representation[] = "0123456789abcdef";
	static char buffer[50];
	char *ptr;

	ptr = &buffer[49];
	*ptr = '\0';

	do {
		*--ptr = Representation[n % base];
		n /= base;
	} while (n != 0);

	return (ptr);
}

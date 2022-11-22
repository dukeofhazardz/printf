#include "main.h"

/**
* convert_HEX - converts arguments
* @n: the first argument
* @base: the second argument
*
* Return: returns a pointer
*/

char *convert_HEX(unisigned int n, int base)
{
	static const char Representation[] = "0123456789ABCDEF";
	static char buffer[50];
	char *ptr;

	ptr = &buffer[49];
	*ptr = '\0';

	do {
		*--ptr = Representation[n % base];
		n /= base;
	} while (n != 0);

	return (ptr);

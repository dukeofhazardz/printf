#include "main.h"

char *convert(unsigned int n, int base)
{
	static char Representation[] = "0123456789abcdef";
	static char buffer[50];
	char *ptr;

	ptr = &buffer[49];
	*ptr = '\0';

	do
	{
		*--ptr = Representation[n%base];
		n /= base;
	} while (n != 0);

	return (ptr);
}

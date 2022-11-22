#include "main.h"

/**
 * _putchar - A function that prints a character
 * @c: Character to be printed
 * Return: Integer
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

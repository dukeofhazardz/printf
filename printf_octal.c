#include "main.h"

/**
 * printf_octal - A function that converts to an octal
 * @arg: a character arguement
 * Return: Integer
 */

int printf_octal(va_list arg)
{
	int i, counter;
	int *array;
	unsigned int num, temp;

	counter = 0;
	num = va_arg(arg, unsigned int);
	temp = num;

	while (num / 8 != 0)
	{
		num /= 8;
		counter++;
	}
	counter++;
	array = malloc(counter * sizeof(int));
	for (i = 0; i < counter; i++)
	{
		array[i] = temp % 8;
		temp /= 8;
	}
	for (i = counter - 1; i >= 0; i--)
	{
		_putchar(array[i] + '0');
	}
	free(array);
	return (counter);
}

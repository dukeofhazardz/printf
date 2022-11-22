#include "main.h"

/**
 * printf_HEX - A function that coverts to Hexadecimal
 * @arg: a character arguement
 * Return: Integer.
 */

int printf_HEX(va_list arg)
{
	int i, counter;
	int *array;
	unsigned int temp, num;

	counter = 0;
	num = va_arg(arg, unsigned int);
	temp = num;

	while (num / 16 != 0)
	{
		num /= 16;
		counter++;
	}
	counter++;
	array = malloc(counter * sizeof(int));
	for (i = 0; i < counter; i++)
	{
		array[i] = temp % 16;
		temp /= 16;
	}
	for (i = counter - 1; i >= 0; i--)
	{
		if (array[i] > 9)
			array[i] = array[i] + 7;
		_putchar(array[i] + '0');
	}
	free(array);
	return (counter);
}

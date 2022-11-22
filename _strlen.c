#include "main.h"

/**
* _strlen - this function prints the lenght of a string
* @s: this is the argument
*
* Return: returns the length of the string
*/

int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}

/**
* _strlenc - this function returns the lenght of the string passed to it
* @s: the argument passed to the function
*
* Return: returns the length of the string argument
*/

int _strlenc(const char *s)
{
	int len;

	while (s[len] != 0)
	{
		len++;
	}
	return (len);
}

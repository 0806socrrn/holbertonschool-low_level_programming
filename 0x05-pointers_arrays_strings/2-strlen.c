#include "main.h"

/**
 * _strlen - returns the length of a string.
 * @s: Pointer to string to measure
 * Return: Lenght of the string
 */

int _strlen(char *s)
{
	int i = 0;
	int c = 0;

	while (*(s + i) != '\0')
	{
		c = c + 1;
		i++;
	}
	return (c);
}

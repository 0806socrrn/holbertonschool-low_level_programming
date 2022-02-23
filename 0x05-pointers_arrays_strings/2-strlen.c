#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: pointer to first character of string
 *
 * Return: length of string
 */
int _strlen(char *s)
{
	int a;

	for (a = 0; *s !='\0'; ++a);

	return (a);
}

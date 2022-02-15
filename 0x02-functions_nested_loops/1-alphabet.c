#include "main.h"

/**
 * print_alphabet - Entry point
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	char y;

	for (y = 'a'; y <= 'z'; y++)
		_putchar(y);
	_putchar('\n');
}

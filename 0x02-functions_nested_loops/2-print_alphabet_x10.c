#include "main.h"

/**
 * print_alphabet_x10-type 2
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	char y;
	int j;

	for (j = 0; j < 10; j++)
	{
		for (y = 'a'; y <= 'z'; y++)
			_putchar(y);
		_putchar('\n');
	}
}

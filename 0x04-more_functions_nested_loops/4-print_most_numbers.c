#include "main.h"

/**
 * print_most_numbers - Prints numbers from 0 to 9, but no 2 and 4.
 * Return: Always 0
 */

void print_most_numbers(void)
{
	char ch;

	for (ch = 0; ch <= 9; ch++)
	{
		if (ch != 2 && ch != 4)
			putchar(ch + '0');
	}
	putchar('\n');
}

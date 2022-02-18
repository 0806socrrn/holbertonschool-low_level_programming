#include "main.h"

/**
 * print_numbers - Prints digits 0 through 9
 */
void print_numbers(void)
{
	char ch;

	for (ch = '0'; ch <= '9'; ch++)
		putchar(ch);

	putchar('\n');
}

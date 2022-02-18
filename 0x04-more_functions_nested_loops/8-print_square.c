#include "main.h"
/**
 * print_square - prints square of size `size`
 * @size: the length of the sides of the square
 */
void print_square(int size)
{
	int i, n;

	if (size <= 0)
		putchar('\n');

	for (i = 0; i < size; i++)
	{
		for (n = 0; n < size; n++)
			putchar('#');

		putchar('\n');
	}
}

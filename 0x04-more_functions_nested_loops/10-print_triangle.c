#include "main.h"

/**
 * print_triangle - Prints a triangle with base and leg length `size`
 * @size: size of the triangle
 */
void print_triangle(int size)
{
	int i, n;

	if (size <= 0)
		putchar('\n');

	for (i = 0; i < size; i++)
	{
		for (n = 0; n < size; n++)
		{
			if (n < size - i - 1)
				putchar(' ');
			else
				putchar('#');
		}
		putchar('\n');
	}
}

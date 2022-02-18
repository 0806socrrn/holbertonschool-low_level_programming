#include "main.h"

/**
 * print_diagonal - prints a doagonal line of length n
 * @n: Lenth of the diagonal line
 */
void print_diagonal(int n)
{
	int i, k;

	if (n <= 0)
	{
		putchar('\n');
	}
	for (i = 0; i < n; i++)
	{
		for (k = 0; k < i; k++)
			putchar(' ');

		putchar('\\');
		putchar('\n');
	}
}

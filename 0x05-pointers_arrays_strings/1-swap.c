#include "main.h"

/**
 * swap_int - swaps the values of two integers.
 * @a: Pointer to first int
 * @b: Pointer to second int
 */

void swap_int(int *a, int *b)
{
	int e;
	int f;

	e = *a;
	f = *b;
	*a = f;
	*b = e;
}

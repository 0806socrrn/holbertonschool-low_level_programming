#include <stdio.h>
#include "main.h"

/**
 * array_range - creates an array of integers.
 * @min: Lower limit of the array, included.
 * @max: Higher limit of the array, included.
 * Return: Pointer to the created array.
 */

int *array_range(int min, int max)
{
	int *mem;
	int i;

	if (min > max)
		return (NULL);
	mem = malloc(sizeof(int) * (max - min + 1));
	if (mem == NULL)
		return (NULL);
	for (i = 0; (min + i) <= max; i++)
		mem[i] = min + i;
	return (mem);
}

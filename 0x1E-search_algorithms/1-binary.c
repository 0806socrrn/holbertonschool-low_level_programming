#include "search_algos.h"
/**
 * binary_search - function that searches for a value in a sorted array of
 * integers using the Binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value:  the value to search for
 * Your function must return the index where value is located
 * You can assume that array will be sorted in ascending order
 * Return: index where value is located
 */
int binary_search(int *array, size_t size, int value)
{
	unsigned int lowerLimit = 0;
	unsigned int upperLimit = size - 1;
	unsigned int middle, i;

	if (array == NULL)
		return (-1);
	while (lowerLimit <= upperLimit)
	{
		printf("Searching in array: ");
		for (i = lowerLimit; i <= upperLimit; i++)
		{
			printf("%d", array[i]);
			if (i < upperLimit)
				printf(", ");
			else
				printf("\n");
		}
		middle = (lowerLimit + upperLimit) / 2;
		if (array[middle] == value)
			return (middle);
		if (array[middle] < value)
			lowerLimit = middle + 1;
		if (array[middle] > value)
			upperLimit = middle - 1;
	}
	return (-1);
}

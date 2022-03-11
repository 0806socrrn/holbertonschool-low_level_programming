#include "main.h"
/**
 *_calloc - allocate array of size
 * @nmemb: number of elements.
 * @size: size of element.
 * Return: pointer to array.
 **/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *mem;
	unsigned int in;

	if (nmemb == 0 || size == 0)
		return (NULL);

	mem = malloc(size * nmemb);

	if (mem == NULL)
		return (NULL);

	for (in = 0; in < (size * nmemb); in++)
		mem[in] = 0;

	return (mem);
}

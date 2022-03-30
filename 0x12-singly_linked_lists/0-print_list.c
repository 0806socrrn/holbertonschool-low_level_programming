#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * print_list - prints all the elements of a list.
 * @h: pointer to list
 * return: number of nodes
 *
 */
size_t print_list(const list_t *h)
{
	size_t si;

	si = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
			h = h->next;
			si += 1;
			continue;
		}
		printf("[%i] %s\n", h->len, h->str);
		si += 1;
		h = h->next;
	}
	return (si);
}

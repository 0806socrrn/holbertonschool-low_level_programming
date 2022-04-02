#include "lists.h"
#include <stdio.h>
/**
 * print_listint - print a linked list containing integer
 * @h: address of the first item in the list
 * return:length of the linked list
 */
size_t print_listint(const listint_t *h)
{
	size_t leng = 0;

	for ( ; h ; h = h->next, leng++)

	printf("%d\n", h->n);

	return (leng);
}

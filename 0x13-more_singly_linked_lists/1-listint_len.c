#include "lists.h"
/**
 * listint_len - return the length of a linked list
 * @h: address of the first item in the list
 *
 * Return: The length of the list
 */
size_t listint_len(const listint_t *h)
{
	size_t len = 0;

	for (; h; h = h->next)
		len++;
	return (len);
}

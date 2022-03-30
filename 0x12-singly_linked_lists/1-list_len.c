#include "lists.h"

/**
 * list_len - Gets the length of a linked list
 * @h: Pointer to the first node in the list
 *
 * Return: size_t length of the list
 */
size_t list_len(const list_t *h)
{
	size_t len = 0;
	const list_t *it;

	for (it = h; it != NULL; it = it->next)
		len++;

	return (len);
}


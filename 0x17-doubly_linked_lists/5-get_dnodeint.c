#include "lists.h"
/**
 * get_dnodeint_at_index - Gets a node at a given index
 * @head: Address of the first node
 * @index: Index of the node
 * Return: Address of the node at the given index, or NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
unsigned int one_index;

for (one_index = 0; head != NULL; ++one_index, head = head->next)
{
if (one_index == index)
return (head);
}
return (NULL);
}
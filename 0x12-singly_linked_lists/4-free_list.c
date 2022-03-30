#include "lists.h"
#include <string.h>
#include <stddef.h>
/**
 * free_list - Frees a linked list
 * @head: Pointer to the first node
 */
void free_list(list_t *head)
{
	list_t *tmp;

	for (; head != NULL; head = tmp)
	{
		free(head->str);
		tmp = head->next;
		free(head);
	}
}

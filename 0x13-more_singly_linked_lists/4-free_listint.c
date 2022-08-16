#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - func
 *
 * @head: listint_t
 */
void free_listint(listint_t *head)
{
	if (head != NULL)
	{
		free_listint(head->next);
		free(head);
	}
}

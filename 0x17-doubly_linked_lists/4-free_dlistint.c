#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_dlistint - func
 *
 * @head: node
 *
 */
void free_dlistint(dlistint_t *head)
{
	if (head)
	{
		free_dlistint(head->next);
		free(head);
	}
}

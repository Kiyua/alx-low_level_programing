#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_list - func
 *
 * @head: node
 *
 */
void free_list(list_t *head)
{
	if (head)
	{
		free(head->str);
		free_list(head->next);
		free(head);
	}
}

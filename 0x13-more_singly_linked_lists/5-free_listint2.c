#include "lists.h"
#include <stdlib.h>

/**
 * free_listint_local - func
 *
 * @head: listint_t
 */
void free_listint_local(listint_t *head)
{
	if (head != NULL)
	{
		free_listint_local(head->next);
		free(head);
	}
}
/**
 * free_listint2 - func
 *
 * @head: listint_t
 */
void free_listint2(listint_t **head)
{
	if (*head != NULL)
		free_listint_local(*head);

	head = NULL;
}

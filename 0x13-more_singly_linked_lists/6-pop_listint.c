#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - func
 *
 * @head: listint_t
 *
 * Return: int
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *h;

	if (head == NULL || *head == NULL)
		return (0);

	h = *head;
	n = h->n;
	*head = h->next;

	free(h);
	h = NULL;

	return (n);
}

#include "lists.h"

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
	listint_t *h = *head;

	if (h == NULL)
		return (0);

	n = h->n;
	h = h->next;
	*head = h;

	return (n);
}

#include "lists.h"
#include <stdlib.h>

/**
 * insert_dnodeint_at_index - func
 *
 * @head: dlistint_t
 * @index: int
 * @n: int
 *
 * Return: dlistint_t
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **head,
unsigned int index, int n)
{
	dlistint_t *new, *h;
	unsigned int count = 0;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	h = malloc(sizeof(dlistint_t));
	if (h == NULL)
		return (NULL);

	new->n = n;
	if (index == count)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	h = *head;
	while (head != NULL && h != NULL)
	{
		count++;
		if (count == index)
		{
			new->next = h->next;
			h->next = new;
			return (new);
		}
		h = h->next;
	}

	return (NULL);
}

#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - func
 *
 * @head: listint_t
 * @index: int
 * @n: int
 *
 * Return: listint_t
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int index, int n)
{
	listint_t *new, *h;
	unsigned int count = 0;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	h = malloc(sizeof(listint_t));
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

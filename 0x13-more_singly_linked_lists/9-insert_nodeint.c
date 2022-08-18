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
	listint_t *temp;
	listint_t *new = malloc(sizeof(listint_t));
	listint_t *h = malloc(sizeof(listint_t));
	unsigned int count = 0;

	new->n = n;
	h->next = *head;
	while (head != NULL && h != NULL)
	{
		if (count == index)
		{
			temp = h->next;
			h->next = new;
			new->next = temp;

			return (new);
		}
		h = h->next;
		count++;
	}

	return (NULL);
}

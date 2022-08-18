#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - func
 * @head: listint_t
 * @index: int
 *
 * Return: int
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *h, *temp;
	unsigned int count = 0;

	if (index == 0 && *head != NULL)
	{
		h = (*head)->next;
		free(*head);
		*head = h;
		return (1);
	}

	h = *head;
	while (h != NULL)
	{
		count++;
		if (count == index)
		{
			temp = h->next;
			h->next = temp->next;
			free(temp);
			return (1);
		}
		h = h->next;
	}
	return (-1);
}


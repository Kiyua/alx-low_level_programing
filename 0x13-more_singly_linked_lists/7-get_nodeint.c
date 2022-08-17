#include "lists.h"

/**
 * get_nodeint_at_index - func
 *
 * @head: listint_t
 * @index: int
 *
 * Return: listint_t
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;

	while (head != NULL)
	{
		if (count == index)
			return (head);
		head = head->next;
		count++;
	}

	return (NULL);
}

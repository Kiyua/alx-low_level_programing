#include "lists.h"

/**
 * reverse_listint - func
 *
 * @head: listint_t
 *
 * Return: listint_t
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *new, *temp;

	if (head == NULL || *head == NULL)
		return (NULL);

	if ((*head)->next == NULL)
		return (*head);

	new = NULL;
	while (*head != NULL)
	{
		temp = (*head)->next;
		(*head)->next = new;
		new = *head;
		*head = temp;
	}

	*head = new;
	return (*head);
}

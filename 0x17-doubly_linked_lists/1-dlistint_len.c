#include <stdio.h>
#include "lists.h"

/**
 * dlistint_len - func that counts all items in a list
 *
 * @h: dlistint_t
 *
 * Return: size_t
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}

#include <stdio.h>
#include "lists.h"

/**
 * list_len - func that prints all items in a list
 *
 * @h: list_t
 *
 * Return: list_t
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}

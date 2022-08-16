#include "lists.h"
#include <stdio.h>

/**
 * listint_len - func
 *
 * @h: listint_t
 * Return: size_t
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}

	return (count);
}

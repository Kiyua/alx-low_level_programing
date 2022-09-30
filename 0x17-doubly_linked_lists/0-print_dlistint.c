#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - func that prints all items in a list
 *
 * @h: dlistint_t
 *
 * Return: size_t
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}

	return (count);
}

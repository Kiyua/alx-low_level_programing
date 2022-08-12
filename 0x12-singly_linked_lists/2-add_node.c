#include <stdio.h>
#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node - func that adds node to a list
 *
 * @h: list_t
 *
 * Return: list_t
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t));

	if (new == NULL)
	{
		printf("ooops\n");
		return (NULL);
	}

	new->str = strdup(str);
	new->len = strlen(str);
	new->next = *head;

	print_list(new);
	return (new);
}

#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * argstostr - func
 * @ac: int
 * @av: args
 * Return: char
 */
char *argstostr(int ac, char **av)
{
	char *str, *holder;
	int i, total;

	if (ac == 0 || av == NULL)
		return (NULL);

	total = 0;
	for (i = 0; i < ac; i++)
		total = total + strlen(av[i]) + 1;
	total++;

	str = malloc(total * sizeof(*str));
	if (str == NULL)
		return (NULL);

	holder = str;
	for (i = 0; i < ac; i++)
	{
		int j;

		for (j = 0; av[i][j] != '\0'; j++)
		{
			*str = av[i][j];
			str++;
		}
		*str = '\n';
		str++;
	}

	return (holder);
}


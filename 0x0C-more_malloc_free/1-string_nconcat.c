#include <stdlib.h>

/**
 * _strlen: func
 * @c: char pointer
 * Return: int
 */
int _strlen(char *c)
{
	int i = 0;

	while(*c != '\0')
	{
		i++;
		c++;
	}
	return (i);
}

/**
 * string_nconcat - func
 * @s1: char pointer
 * @s2: char pointer
 * @n: int
 * Return: char pointer
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, len1, len2, total;
	char *p;

	len1 = _strlen(s1);
	len2 = _strlen(s2);
	total = len1 + n + 1;
	p = malloc(total * sizeof(*p));

	for (i = 0; i < len1; i++)
		p[i] = s1[i];
	for (; i < len1 + len2 && i < total; i++)
		p[i] = s2[i - len1];

	p[i] = '\0';
	return (p);
}

#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - func
 * @s1: char pointer
 * @s2: char pointer
 * @n: int
 * Return: char pointer
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, len1, len2;
	char *p = malloc(strlen(s1) + n + 1);

	len1 = strlen(s1);
	len2 = strlen(s2);
	p = strcpy(p, s1);
	for (i = 0; i < len2 && i < n; i++)
		p[len1 + i] = s2[i];

	p[len2 + n] = '\0';
	return (p);
}

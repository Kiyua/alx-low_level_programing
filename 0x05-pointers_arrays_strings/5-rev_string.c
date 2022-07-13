#include "main.h"

/**
 * rev_string - func
 *
 * @c: pointer to char
 */
void rev_string(char *c)
{
	int i, count;
	char ch, *p1, *p2;

	p1 = c;
	p2 = c;
	count = 0;
	while (*p2 != '\0')
	{
		p2++;
		count++;
	}
	p2--;

	i = 0;
	for (i = 0; i < count / 2; i++)
	{
		ch = *p1;
		*p1 = *p2;
		*p2 = ch;

		p1++;
		p2--;
	}
}


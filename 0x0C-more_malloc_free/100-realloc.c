#include <stdlib.h>
#include <string.h>

/**
 * _realloc - func
 * @ptr: pointer
 * @old_size: int
 * @new_size: int
 * Return: void pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *p;
	unsigned int i, len;

	if (old_size == new_size)
		return (ptr);

	len = strlen(ptr);
	p = malloc(new_size);
	if (p == NULL)
		return (NULL);

	for (i = 0; i < len && i < new_size; i++)
		((char *)p)[i] = ((char *)ptr)[i];

	for (; i < new_size; i++)
		*((char *)p + i) = 0;
	return (p);
}

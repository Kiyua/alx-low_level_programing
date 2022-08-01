#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - func
 *
 * @d: dog_t
 */
void free_dog(struct dog *d)
{
	if (d)
	{
		free(d);
	}
}

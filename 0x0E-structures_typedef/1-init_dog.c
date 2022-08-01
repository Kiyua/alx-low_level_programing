#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - func
 *
 * @d: dog
 * @name: char
 * @age: int
 * @owner: char
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d = malloc(sizeof(struct dog));
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}

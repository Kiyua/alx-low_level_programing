#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_dog - func
 *
 * @d: dog
 */
void print_dog(struct dog *d)
{
	char *name, *owner;
	float age;

	if (!d)
		return;
	name = d->name;
	if (name == NULL)
		name = "(nil)";
	owner = d->owner;
	if (owner == NULL)
		owner = "(nil)";
	age = d->age;

	printf("Name: %s\nAge: %.6f\nOwner: %s\n", name, age, owner);
}

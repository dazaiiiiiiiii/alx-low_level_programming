#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - dog's struct
 *
 * @d: dog's info
 * @name: dog's name
 * @age: dog's name
 * @owner; dog's owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}

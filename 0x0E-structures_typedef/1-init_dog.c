#include "dog.h"

/**
 * init_dog - initializes a dog
 * @d: the dog to init
 * @name: the dogs name
 * @age: dog's age
 * @owner: void
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

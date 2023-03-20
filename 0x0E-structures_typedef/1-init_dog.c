#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - writes the character c to stdout
 * @d: pointer to struct dog to initialize
 * @name: dog name to initialize
 * @age: age of dog
 * @owner: owner of dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != 0)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}

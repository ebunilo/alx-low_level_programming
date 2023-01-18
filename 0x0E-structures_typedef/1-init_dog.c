#include "dog.h"
/**
 * init_dog - Initialize a variable of type struct dog
 * @d: Struct dog
 * @name: Name of dog
 * @age: Age of dog
 * @owner: Name of owner of dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->owner = owner;
		d->age = age;
	}
}

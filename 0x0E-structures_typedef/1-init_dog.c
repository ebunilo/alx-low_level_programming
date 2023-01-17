#include "main.h"
#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - Initialize a variable of type struct dog
 * @dog: Struct dog
 * @name: Name of dog
 * @age: Age of dog
 * @owner: Name of owner of dog
 *
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d = malloc(sizeof(struct dog));
	d -> name = name;
	d -> owner = owner;
	d -> age = age;
}

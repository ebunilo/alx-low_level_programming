#include <stdio.h>
#include "dog.h"

/** print_dog - Prints a struct dog
 * @d: Struct dog
 *
 */

void print_dog(struct dog *d)
{
	if (d->name == NULL)
		d->name = "(nil)";
	//if (d->age == (char) NULL)
	//	d->age = (char) "(nil)";
	if (d->owner == NULL)
		d->owner = "(nil)";

	if (d != NULL)
		printf("Name: %.1f\n Age: %s\n Owner: %s\n", d->name, d->age, d->owner);
}


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

	if (d)
		printf("Name: %s\n Age: %.1f\n Owner: %s\n", d->name, d->age, d->owner);
}


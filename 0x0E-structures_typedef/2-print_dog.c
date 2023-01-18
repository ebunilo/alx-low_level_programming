#include <stdio.h>
#include "dog.h"

/** print_dog - Prints a struct dog
 * @d: Struct dog
 *
 */

void print_dog(struct dog *d)
{
	if (!(d->name))
		d->name = "(nil)";
	if (!(d->owner))
		d->owner = "(nil)";

	if (d)
		printf("Name: %s\n Age: %.1f\n Owner: %s\n", d->name, d->age, d->owner);
}


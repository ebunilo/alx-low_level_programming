#ifndef DOG_H
#define DOG_H

/**
 * struct dog - A struct for dog
 * @name: Name of dog
 * @owner: Name of owner
 * @age: Age of dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif /* DOG_H */

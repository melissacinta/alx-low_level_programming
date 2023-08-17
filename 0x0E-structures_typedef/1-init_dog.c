#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - function to initialize dog struct
 * @d:variable of type struct dog
 * @name: name of the dog
 * @age: age of thee dog
 * @owner: owner of the dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d = malloc(sizeof(struct dog));

	d->name = name;
	d->age = age;
	d->owner = owner;
}

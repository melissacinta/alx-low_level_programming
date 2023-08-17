#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - function to create a new dog
 * @name: name of the dog
 * @age: of the dog
 * @owner: owner of the dog
 * Return: it returns a new dog of type dog_t
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	dog->name = name;
	dog->age = age;
	dog->owner = owner;
	return (dog);
}

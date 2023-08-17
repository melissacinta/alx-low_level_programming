#include <stdlib.h>
#include <string.h>
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
	/* declare pointer for new dog */
	dog_t *dog;

	/* allocate size for the dog struct */
	dog = malloc(sizeof(dog_t));
	/* return null if dog is empty */
	if (dog == NULL)
		return (NULL);
	/* allocate size for dog.name */
	dog->name = malloc(sizeof(char) * strlen(name));
	/* if it fails return null and free dog */
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}

	/* allocate space for owner */
	dog->owner = malloc(sizeof(char) * strlen(name));
	if (dog->owner == NULL)
	{
		free(dog);
		return (NULL);
	}

	dog->age = age;
	/* keep a copy of dog name and owner */
	strcpy(dog->name, name);
	strcpy(dog->owner,  owner);

	return (dog);
}

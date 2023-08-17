#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - returns the length of a string
 * @s: string to evaluate
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}

/**
 * *_strcpy - copies the string pointed to by src
 * including the terminating null byte (\0)
 * to the buffer pointed to by dest
 * @dest: pointer to the buffer in which we copy the string
 * @src: string to be copied
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int len, i;

	len = 0;

	while (src[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}

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
	dog->name = malloc(sizeof(char) * (_strlen(name) + 1));
	/* if it fails return null and free dog */
	if (dog->name == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}

	/* allocate space for owner */
	dog->owner = malloc(sizeof(char) * (_strlen(name) + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->owner);
		free(dog->name);
		return (NULL);
	}

	dog->age = age;
	/* keep a copy of dog name and owner */
	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);

	return (dog);
}

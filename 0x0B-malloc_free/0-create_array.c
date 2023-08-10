#include "main.h"
#include <stdlib.h>

/**
* create_array- function that creates an array of characters and
* initializes it with a specific char
* @size: size of the array
* @c: character for initialization
* Return: returns a pointer on success or NULL on failure
*/

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
	{
		return ("\0");
	}

	arr = malloc(size);
	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}

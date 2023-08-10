#include "main.h"
#include <stdlib.h>

/**
* _calloc- function that allocates memory for an array using malloc
* @nmemb: array elements
* @size: size of each element
* Return: returns a pointer to the allocated memory or NULL
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	ptr = malloc(size * nmemb);

	if (ptr == NULL || nmemb == 0 || size == 0)
		return (NULL);
	return (ptr);
}

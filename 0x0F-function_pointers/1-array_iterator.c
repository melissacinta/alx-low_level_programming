#include "function_pointers.h"

/**
 * array_iterator - function that executes a given function as parameter
 * @array: array of functions
 * @size: size of the array
 * @action: action to be carried out
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (!array || !size || !action)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}

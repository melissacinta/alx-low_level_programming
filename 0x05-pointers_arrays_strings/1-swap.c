#include "main.h"

/**
 * swap_int - swap pointer values;
 * @a: acept a pointer to int;
 * @b : accepts two pointers to integers
 */
void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}

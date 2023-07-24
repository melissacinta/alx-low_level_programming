#include "main.h"

/**
 * swap_int - swap pointer values;
 * @n : accepts a pointer to an integer
 */
void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}

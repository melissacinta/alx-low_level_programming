#include "function_pointers.h"

/**
 * print_name - function to ptint name
 * @name: name to be printed
 * @f: pointer to a function that accepts a char and returns nothing
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}

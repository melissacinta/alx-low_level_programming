#include "main.h"

/**
 * print_last_digit - prints the last digit of a number.
 *  @c : integer variable
 * Return: Always 0.
 */
int print_last_digit(int c)
{
	int retval = 0;

	retval = c % 10;
	
	if (retval < 0 ) return (-retval);

	return retval
}

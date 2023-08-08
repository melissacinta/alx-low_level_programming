#include "main.h"

/**
 * factorial - return the factorial of a given number
 * @n: number to to be factorialed
 * Return: return the factorial of a given number;
 */

int factorial(int n)
{
	if (n <= 1)
		return (1);
	return (n * factorial(n - 1));
}

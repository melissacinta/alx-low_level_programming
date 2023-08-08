#include "main.h"

int _sqrt_recurse(int x, int y);

/**
 * _sqrt_recursion - return the factorial of a given number
 * @n: number to find the square root of
 * Return: return the square root of n
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt_recurse(n, 0));
}


/**
 * _sqrt_recurse - return the factorial of a given number
 * @x: number to find the square root of
 * @y: iterator
 * Return: return the square root of n
 */
int _sqrt_recurse(int x, int y)
{
	if (y * y > x)
		return (-1);
	if (y * y == n)
		return (y);
	return (_sqrt_recurse(x, y + 1));
}

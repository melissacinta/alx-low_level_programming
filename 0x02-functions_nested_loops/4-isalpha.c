#include "main.h"

/**
 * _isalpha - checks for alphabetic character.
 * 
 * Return: Always 0.
 */
int _isalpha(int c)
{
	if (_islower(c) || (c >= 65 && c <= 90))
	{
		_putchar('1');
	}
	else
	{
		_putchar('0');
	}
	return (0);
}	

#include "main.h"

/**
 * _isalpha - checks for alphabetic character.
 * 
 * Return: Always 0.
 */
int _isalpha(int c)
{
	if ((c >=97 && c <= 122) || (c >= 65 && c <= 90))
	{
		_putchar('1');
	}
	else
	{
		_putchar('0');
	}
	return (0);
}	

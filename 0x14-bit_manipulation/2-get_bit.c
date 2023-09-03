#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @index: is the index, starting from 0 of the bit you want to get
 * @n: the integer to be worked with
 * Return: the value of the bit at index index or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int  len = sizeof(unsigned long int) * 8, temp;

	if (index > len)
		return (-1);
	temp = n >> index;
	return (temp & 1);
}

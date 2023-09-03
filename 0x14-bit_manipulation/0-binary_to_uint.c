#include "main.h"

/**
 * binary_to_uint - binary number to an unsigned int
 * @b: The number to convert
 * Return: On success returns converted number.
 * On error, 0 is returned.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;

	if (!b)
		return (0);

	while (*b != '\0')
	{
		if (*b != '0' && *b != '1')
			return (0);

		if (*b == '1')
		{
			result <<= 1;
			result |= 1;
		} else
		{
			result <<= 1;
		}
		b++;
	}
	return (result);
}

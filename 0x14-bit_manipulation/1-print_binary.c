#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: int to be printed in bin mode;
 */

void print_binary(unsigned long int n)
{
	int len = sizeof(unsigned long int) * 8;
	int shifts, started = 0;

	if (n == 0)
	{
		printf("0");
		return;
	}

	for (shifts = len - 1; shifts >= 0; shifts--)
	{
		if ((n >> shifts) & 1)
		{
			printf("1");
			started = 1;
		}
		else if (started)
		{
			printf("0");
		}
	}
}

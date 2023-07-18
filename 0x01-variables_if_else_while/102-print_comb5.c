#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int tho;
	int hun;
	int tens;
	int base;

for (tho = 0 ; tho < 10 ; tho++)
{

	for (hun = 0 ; hun <= 10 ; hun++)
	{
	
		for (tens = 0 ; tens < 10 ; tens++)
		{
			for (base = 0 ; base < 10 ; base++)
			{
				putchar('0' + tho);
				putchar('0' + hun);
				putchar(32);
				putchar('0' + tens);
				putchar('0' + base);
				if (!(tho == 9 && hun == 8))
				{
					putchar(',');
					putchar(32);
				}
				base++;
			}
		}
	}
}
	putchar('\n');
	return (0);
}

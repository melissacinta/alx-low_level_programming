#include "main.h"

/**
 * times_table - prints the times table, starting with 0 to 15
 *
 * @n: multiplier
 */
void times_table(int n)
{
	int i, j, k;

	if (n >= 0 && n <= 15)
	{
	
		i = 0;
		while (i <= n)
		{
			j = 0;
			while (j <= n)
			{
				k = j * i;
				if (j == 0)
				{
					_putchar(k + '0');
				}
				else if (k < 10)
                                {
                                        _putchar(',');
                                        _putchar(' ');
                                        _putchar(' ');
					_putchar(' ');
					_putchar(k + '0');
                                }
				else if (k >= 10 && k < 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar((k / 10) + '0');
					_putchar((k % 10) + '0');
				}
				else
				{
					_putchar(',');
					_putchar(' ');
					_putchar((k / 10) + '0');
                                        _putchar((k % 10) + '0');
				}
				j++;
			}
			_putchar('\n');
			i++;
		}
	}
}

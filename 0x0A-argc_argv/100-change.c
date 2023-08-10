#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* main - function to print minimum amount of coins needed to make change
* @argc: count of arguemts
* @argv: array of arguement of length argc
* Return: return 0 success exit code or 1 failure code
*/

int main(int argc, char **argv)
{
	int i, change, count;
	int cents[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		puts("Error");
		return (1);
	}

	change = atoi(argv[1]);

	count = 0;

	if (change < 0)
	{
		printf("0\n");
		return (0);
	}
	for (i = 0; i < 5 && change >= 0; i++)
	{
		while (change >= cents[i])
		{
			count++;
			change -= cents[i];
		}
	}
	printf("%d\n", count);
	return (0);
}

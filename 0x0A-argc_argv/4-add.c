#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* main - function to add positive integers
* @argc: count of arguemts
* @argv: array of arguement of length argc
* Return: return 0 success exit code or 1 failure code
*/

int main(int argc, char **argv)
{
	int i, j, k, sum;

	if (argc <= 1)
	{
		printf("0\n");
	}
	else
	{
		sum = 0;
		for (i  = 1; i < argc; i++)
		{
			for (j = 0; argv[i][j] != '\0'; j++)
			{
				if (argv[i][j] > '9' || argv[i][j] < '0')
				{
					puts("Error");
					return (1);
				}
			}
		}

		for (k = 1; k < argc; k++)
		{
			if (atoi(argv[k]) != 0)
			{
				sum = sum + atoi(argv[k]);
			}
		}
		printf("%d\n", sum);
	}
	return (0);
}

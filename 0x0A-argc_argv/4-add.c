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
	int i, sum;

	if (argc <= 1)
	{
		printf("0\n");
	}
	else
	{
		sum = 0;
		for (i = 1; i < argc; i++)
		{
			if (atoi(argv[i]) != 0)
			{
				sum = sum + atoi(argv[i]);
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", sum);
	}
	return (0);
}

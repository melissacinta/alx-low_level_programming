#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* main - function to multiply two integers passed to it
* @argc: count of arguemts
* @argv: array of arguement of length argc
* Return: return 0 success exit code or 1 failure code
*/

int main(int argc, char *argv[])
{
	int x, y;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	x = atoi(argv[1]);
	y = atoi(argv[2]);

	printf("%d\n", x * y);
	return (0);
}

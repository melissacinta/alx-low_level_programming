#include "main.h"
#include <stdio.h>

/**
* main - function to print out all args passed to it
* @argc: count of arguemts
* @argv: array of arguement of length argc
* Return: return 0 success exit code
*/

int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}

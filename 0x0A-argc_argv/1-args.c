#include "main.h"
#include <stdio.h>

/**
* main - function to print out no of args passed to it
* @argc: count of arguemts
* @argv: array of arguement of length argc
* Return: return 0 success exit code
*/

int main(int argc, char **argv)
{
	(void) argv;

	printf("%d\n", argc - 1);
	return (0);
}

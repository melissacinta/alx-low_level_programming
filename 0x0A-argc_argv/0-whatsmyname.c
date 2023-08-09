#include "main.h"
#include <stdio.h>

/**
* main - function to print out program name
* @argc: count of arguemts
* @argv: array of arguement of length argc
* Return: return 0 success exit code
*/

int main(int argc, char **argv)
{
	(void) argc;

	printf("%s\n", argv[0]);
	return (0);
}

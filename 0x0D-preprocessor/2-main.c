#include <stdio.h>

/**
 * main - function to tell the name of a file it was compile from
 *
 * Return - always 0 meaning success.
 */

int main(void)
{
	printf("%s\n", __BASE_FILE__);
	return (0);
}

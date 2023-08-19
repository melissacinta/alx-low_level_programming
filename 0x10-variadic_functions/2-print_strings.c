#include "variadic_functions.h"

/**
 * print_strings - function to print strings
 * @separator: the string to be printed between strings
 * @n:the number of strings passed to the function
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *current;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		current = va_arg(args, char *);
		if (current == NULL)
		{
			printf("%s", "(nil)");
		}
		else
		{
			printf("%s", current);
		}

		if (i < n - 1 && separator)
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}

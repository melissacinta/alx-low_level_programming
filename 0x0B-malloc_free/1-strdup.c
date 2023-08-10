#include "main.h"
#include <stdlib.h>

/**
* _strdup - function that returns a pointer to a newly allocated
* space in memory
* @str: string to copy
* Return: return pointer to new string or NULL
*/

char *_strdup(char *str)
{
	char *ptr;
	int i, len;

	if (str == NULL)
		return (NULL);
	i = 0;
	len = 0;

	while (str[len])
	{
		len++;
	}
	ptr = malloc(sizeof(char) * (len + 1));

	if (ptr == NULL)
		return (NULL);
	while ((ptr[i] = str[i]) != '\0')
		i++;
	return (ptr);
}

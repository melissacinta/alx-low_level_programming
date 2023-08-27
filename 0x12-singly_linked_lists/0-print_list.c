#include "lists.h"

/**
 * print_list - function that prints all the elements of a list_t list
 * @h: list to be printed;
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	list_t *temp;
	int numEl = 0;

	if (h)
	{
		temp = (list_t *)malloc(sizeof(list_t));
		if (temp == NULL)
		{
			free(temp);
			return (0);
		}

		*temp = *h;
		while (temp)
		{
			if (temp->str == NULL)
				printf("[0] (nil)\n");
			else
				printf("[%u] %s\n", temp->len, temp->str);
			temp = temp->next;
			numEl++;
		}

		free(temp);
	}
	return (numEl);
}

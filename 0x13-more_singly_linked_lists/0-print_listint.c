#include "lists.h"

/**
 * print_listint - function that prints all the elements of a list
 * @h: list to be printed;
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	int numEl = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		numEl++;
	}
	return (numEl);
}

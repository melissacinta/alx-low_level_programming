#include "lists.h"

/**
 * print_dlistint - a function that prints all the elements of a list.
 * @h: head pointer to the list to be printed
 * Return: the number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t n = 0;

	if (!h)
		return (n);
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		n++;
	}

	return (n);
}

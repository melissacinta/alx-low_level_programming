#include "lists.h"

/**
 * list_len - function that returns the number of elements in a linked list.
 * @h: list to tranverse
 * Return: length of list
 */

size_t list_len(const list_t *h)
{
	size_t numEl = 0;

	while (h)
	{
		numEl++;
		h = h->next;
	}
	return (numEl);
}

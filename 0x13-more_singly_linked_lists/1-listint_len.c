#include "lists.h"

/**
 * listint_len- function that returns the number of elements in a linked list.
 * @h: list to tranverse
 * Return: length of list
 */

size_t listint_len(const listint_t *h)
{
	size_t numEl = 0;

	while (h)
	{
		numEl++;
		h = h->next;
	}
	return (numEl);
}

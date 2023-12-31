#include "lists.h"

/**
 * dlistint_len - a function that returns the number of elements in a
 * linked list
 * @h: pointer to the head node
 * Return:  returns the number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t len = 0;

	while (h)
	{
		h = h->next;
		len++;
	}

	return (len);
}

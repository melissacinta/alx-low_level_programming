#include "lists.h"

/**
 * insert_dnodeint_at_index - a function that inserts a new node at a
 * given position.
 * @h: pointer to head pointer
 * @idx: is the index of the list where the new node should be added
 * @n: value to be added
 * Return: the address of the new node, or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *temp, *new;

	new = NULL;
	if (idx == 0)
		new = add_dnodeint(h, n);
	else
	{
		temp = *h;
		i = 1;
		if (temp != NULL)
			while (temp->prev != NULL)
				temp = temp->prev;
		while (temp != NULL)
		{
			if (i == idx)
			{
				if (temp->next == NULL)
					new = add_dnodeint_end(h, n);
				else
				{
					new = malloc(sizeof(dlistint_t));
					if (new != NULL)
					{
						new->n = n;
						new->next = temp->next;
						new->prev = temp;
						temp->next->prev = new;
						temp->next = new;
					}
				}
				break;
			}
			temp = temp->next;
			i++;
		}
	}
	return (new);
}

#include "lists.h"

/**
 * get_dnodeint_at_index - function that returns the nth node of a linked list
 * @head: pointer to the head node
 * @index: index of the node
 * Return: nth node of a linked list or NULL otherwise
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp = head;
	unsigned int n = 0;

	while (temp && n < index)
	{
		temp = temp->next;
		n++;
	}

	if (n == index && temp)
		return (temp);
	else
		return (NULL);
}

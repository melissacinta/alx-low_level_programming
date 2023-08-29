#include "lists.h"

/**
 * get_nodeint_at_inde - function that returns the nth node of a linked list
 * @index: index of the node
 * @head: list to be tranversed
 * Return: NULL or the nth node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = head;

	while (i < index && temp)
	{
		temp = temp->next;
		i++;
	}

	if (i == index && temp)
		return (temp);
	else
		return (NULL);
}

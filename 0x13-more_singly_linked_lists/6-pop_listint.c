#include "lists.h"

/**
 * pop_listint - function that deletes the head node of a listint_tlinked list
 * @head: head of the list
 * Return: returns the head node’s data (n);
 */

int pop_listint(listint_t **head)
{
	int removed;
	listint_t *temp;

	if (!head || !(*head))
		return (0);
	temp = (*head)->next;
	removed = (*head)->n;
	free(*head);
	*head = temp;
	return (removed);
}

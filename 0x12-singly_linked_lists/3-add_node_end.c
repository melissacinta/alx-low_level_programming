#include "lists.h"

/**
 * add_node_end - function that adds a new node at the end of a list
 * @head: current head of the list
 * @str: string of the new node
 * Return: returns the new list.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *temp = *head;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}

	new->str = strdup(str);
	new->len = strlen(str);
	new->next = NULL;
	if (!(*head))
	{
		*head = new;
		return (new);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = new;

	return (new);
}

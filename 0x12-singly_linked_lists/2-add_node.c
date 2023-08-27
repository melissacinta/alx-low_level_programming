#include "lists.h"

/**
 * add_node - function that adds a new node at the beginning of a list
 * @head: current head of the list
 * @str: string of the new node
 * Return: returns the new list.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}

	new->str = strdup(str);
	new->len = strlen(str);
	new->next = *head;
	*head = new;

	return (*head);
}

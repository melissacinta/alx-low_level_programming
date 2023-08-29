#include "lists.h"

/**
 * free_listint2 -  function that frees a list
 * @head: start of the list
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head)
	{
		while (*head)
		{
			temp = (*head)->next;
			free(*head);
			*head = temp;
		}
		*head = NULL;
	}
}

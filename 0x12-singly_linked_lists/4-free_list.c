#include "lists.h"

/**
 * free_list -  function that frees a list
 * @head: start of the list
 */

void free_list(list_t *head)
{

	if (head != NULL)
	{
		if (head ->next != NULL)
			free_list(head->next);
		free(head->str);
		free(head);
	}
}

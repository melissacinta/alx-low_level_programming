#include "lists.h"

/**
 * free_list -  function that frees a list
 * @head start of the list
 */

void free_list(list_t *head)
{
	free(head);
}

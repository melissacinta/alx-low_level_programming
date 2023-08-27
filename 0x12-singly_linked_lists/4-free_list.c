#include "lists.h"

/**
 * free_list -  function that frees a list
 * @head: start of the list
 */

void free_list(list_t *head)
{
	list_t *temp;

	printf("\n\n Freeing List: \n");
	while (head != NULL)
	{
		temp = head->next;
		printf("clear mem for: %s", head->str);
		free(head);
		head = temp;
		printf("->\n");
	}
	printf("head: %s\n", (char *)head);
}

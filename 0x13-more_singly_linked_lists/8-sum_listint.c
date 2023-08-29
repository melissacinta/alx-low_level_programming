#include "lists.h"

/**
 * sum_listint - function that returns the sum of all the data (n) of a list
 * @head: list to be tranversed and summed
 * Return: 0 if the list is empty or total sum
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	if (!head)
		return (0);
	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}

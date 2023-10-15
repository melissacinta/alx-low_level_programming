#include "lists.h"

/**
 * sum_dlistint - function that sums all the data n of a linked list
 * @head: pointer to head node
 * Return: sum or 0
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}

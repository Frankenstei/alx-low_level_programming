#include "lists.h"

/**
 * sum_dlistint - Sums all the data of a dlistint_t list
 * @head: head
 *
 * Return: sum of data
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

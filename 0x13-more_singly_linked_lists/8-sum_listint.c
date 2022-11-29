#include "lists.h"

/**
 * sum_listint - sum of all data
 *
 * @head: first node
 *
 * Return: sum of list
 */

int sum_listint(listint_t *head)
{
	unsigned int i;
	int sum = 0;

	for (i = 0; head ! = NULL; i++)
	{
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);
}
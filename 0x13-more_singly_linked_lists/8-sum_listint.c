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
	int sum = 0;
	
	if (head)
	{
		while(head != NULL)
		{
			sum = sum + head->n;
			head = head->next;
		
		
		}
	}
	return (sum);
}

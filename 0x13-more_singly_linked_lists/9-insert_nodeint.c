#include "lists.h"

/**
 * *insert_nodeint_at_index
 *
 * @head: first node
 * @idx: index for new node
 * @n: data
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *tmpMem, *mainMem;
	unsigned int i;

	tmpMem = *head;

	if (idx != 0)
	{
		for (i = 0; i < idx - 1 && tmpMem != NULL; i++)
		{
			tmpMem = tmpMem->next;
		}
	}

	if (tmpMem == NULL && idx != 0)
	{
		return (NULL);
	}
	mainMem = malloc(sizeof(listint_t));

	if (mainMem == NULL)
	{
		return (NULL);
	}
	mainMem->n = n;
	if (idx == 0)
	{
		mainMem->next = *head;
		*head = mainMem;
	}
	else
	{
		mainMem->next = tmpMem->next;
		tempMem->next = mainMem;
	}
	return (mainMem);
}

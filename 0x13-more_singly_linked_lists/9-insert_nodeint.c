#include "lists.h"

/**
 * *insert_nodeint_at_index
 *
 * @head: first node
 * @idx: index for new node
 * @n: data
 *
 * Return: mew node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *tmpMem, *mainMem;
	unsigned int i = 1;
	
	if (head)
	{
		mainMem = malloc(sizeof(listint_t));
		if (mainMem == NULL)
		{
			return (NULL);
		}
		mainMem->n = n;
		if (idx > 0)
		{
			tmpMem = *head;
			while (tmpMem)
			{
				if (i == idx)
				{
					mainMem->next = tmpMem->next;
					tmpMem->next = mainMem;
					return (mainMem);
				}
				tmpMem = tmpMem->next;
				i++;
			}
			if (idx > i)
			{
				return (NULL);
			}
		}
		else
		{
			mainMem->next = *head;
			*head = mainMem;
		}
		return (mainMem);
	}
	return (NULL);
}

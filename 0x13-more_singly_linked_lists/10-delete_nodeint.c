 #include "lists.h"

/**
 * delete_nodeint_at_index - deletes node at index
 * @head: first node
 * @index: position of node
 *
 * Return: 1
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *tmpMem, *mainMem;

	if (index > 0)
	{
		for (i = 0; i < index - 1 && tmpMem != NULL; i++)
		{
			tmpMem = tmpMem->next;
		}
	}

	if (tmpMem == NULL && (tmpMem->next == NULL && index > 0))
	{
		return (-1);
	}
	mainMem = tmpMem->next;
	if (index > 0)
	{
		tmpMem->next = mainMem->next;
		free(mainMem);
	}
	else
	{
		free(tmpMem);
		*head = mainMem;
	}
	return (1);
}

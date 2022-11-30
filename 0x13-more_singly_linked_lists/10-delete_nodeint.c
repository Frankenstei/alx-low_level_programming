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
	unsigned int i = 1;
	listint_t *tmpMem, *mainMem;

	mainMem = *head;

	if (!head || !*head)
	{
		return (-1);
	}
	if (index == 0)
	{
		*head = mainMem->next;
		free(mainMem);
		return (1);
	}
	tmpMem = *head;
	while (tmpMem)
	{
		if (i == index)
		{
			mainMem = tmpMem->next;
			tmpMem->next = mainMem->next;
			free(mainMem);
			return (1);
		}
		tmpMem = tmpMem->next;
		i++;
	}
	return (-1);
}

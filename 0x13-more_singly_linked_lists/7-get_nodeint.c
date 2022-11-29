#include "lists.h"

/**
 * **get_nodeint_at_index - returns nth node
 * @head: first node
 * @index: nth node
 *
 * Return: pointer to nth node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *tmpMem, *nthNode;

	tmpMem = *head;
	for (i = 0; i < index && head != NULL; i++)
	{
		tmpMem = temp->next;
	}
	nthNode = tmpMem;
	free(tmpMem);
	if (*nthNode == NULL)
	{
		return (NULL);
	}
	return (*nthNode);
}


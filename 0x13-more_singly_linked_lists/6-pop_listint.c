#include "lists.h"

/**
 * pop_listint - deletes head node
 *
 * @head: first node
 *
 * Return: head node's data
 */

int pop_listint(listint_t **head)
{
	int headNode;
	listint_t *tmpMem,*emptyList;

	if (*head == NULL)
	{
		return (0);
	}

	tmpMem = *head;
	headNode = tmpMem->n;
	emptyList= tmpMem->next;
	free(tmpMem);
	*head = emptyList;
	return (headNode);
}

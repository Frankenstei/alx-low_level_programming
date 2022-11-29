#include "lists.h"

/**
 * free_listint - frees the linked list
 * @head: first node
 *
 * Return: nothing
 */

void free_listint(listint_t *head)
{
	listint_t *tmpMem;

	while ((tmpMem = head) != NULL)
	{
		head = head->next;
		free(tmpMem);
	}
}

#include "lists.h"

/**
 * *reverse_listint - reverses a list
 *
 * @head: first node
 *
 * Return: list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *tmpMem = NULL, *mainMem = NULL;

	while (*head != NULL)
	{
		mainMem = (*head)->next;
		(*head)->next = tmpMem;
		tmpMem = *head;
		*head = mainMem;
	}
	*head = tmpMem;
	return (*head);
}


#include "lists.h"

/**
 * *add_nodeint - adds new node
 *
 * @head: first node
 * @n: number of nodes
 *
 * Return: address of new element
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *tmpMem;

	tmpMem = malloc(sizeof(listint_t));

	if (tmpMem == NULL)
	{
		return (NULL);
	}

	tmpMem->n = n;
	tmpMem->next = NULL;
	tmpMem->next = *head;
	*head = tmpMem;
	return (tmpMem);
}

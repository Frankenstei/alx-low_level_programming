#include "lists.h"

/**
 * *add_nodeint_end - adds node at end
 *
 * @head: first node
 * @n: data in node
 *
 * Return: returns address of new element
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *tmpMem, temp;

	tmpMem = malloc(sizeof(listint_t));

	if (tmpMem == NULL)
	{
		return (NULL);
	}

	tmpMem->n = n;
	tmpMem->next = NULL;
	temp = *head;
	if (temp == NULL)
	{
		*head = tmpMem;
	}
	else
	{
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = tmpMem;
	}
	return (*head);
}

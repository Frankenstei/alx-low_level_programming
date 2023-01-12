#include "lists.h"

/**
 * *add_dnodeint_end - adds node at end of list
 *
 * @head: head
 * @n: data
 *
 * Return: address of element
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return NULL;
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}
	end = *head;
	while (end->next != NULL)
		end = end->next;
	end->next = new;
	new->prev = end;
	return (new);
}

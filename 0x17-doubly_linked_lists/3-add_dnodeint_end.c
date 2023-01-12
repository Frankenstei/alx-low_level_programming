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
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}
	ende = *head;
	while (ende->next != NULL)
		ende = ende->next;
	ende->next = new;
	new->prev = ende;
	return (new);
}

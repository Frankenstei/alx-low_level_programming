#include "lists.h"

/**
 * size_t - prints all elements
 *
 * @h: node
 *
 * Return: nothing
 */

size_t print_listint(const listint_t *h)
{
	size_t no_of_elements;

	while (h->next != NULL)
	{
		if (h->next == NULL)
		{
			printf("[%d]\n", 0);
		}
		else
		{
			printf("[%d]\n", h->n);
		}
		h = h->next;
		no_of_elements++;
	}
	return (no_of_elements);
}

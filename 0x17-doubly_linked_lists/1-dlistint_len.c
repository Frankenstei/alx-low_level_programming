#include "lists.h"

/**
 * dlistint_len - returns number of elements
 *
 * @h: head
 *
 * Return: number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t no_elements = 0;

	while (h)
	{
		no_elements++;
		printf("%d", h->n);
		h = h->next;
	}
	return (no_elements);
}

#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_list - prints all elements of list list_t
 *
 * @h: list_t
 *
 * Return: nodes
 */

size_t print_list(const list_t *h)
{
	size_t nodeNo;

	nodeNo = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		h = h->next;
		nodeNo++;
	}
	return (nodeNo);
}
	

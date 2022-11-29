#include "lists.h"

/**
 * free_listint2 - frees list and head NULL
 *
 * @head: first node
 *
 * Return: nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *tmpMem, *mainMem;

	if (head != NULL)
	{
		mainMem = *head;

		while ((tmpMem = mainMem) != NULL)
		{
			mainMem = mainMem->next;
			free(temp);
		}
		*head = NULL;
	}
}

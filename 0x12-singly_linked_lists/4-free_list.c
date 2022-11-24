#include "lists.h"

/**
 * free_list - frees the list
 * @head: first node
 * Return: nothing
 */

void free_list(list_t *head)
{
	list_t *tempMem;

	while (head != NULL)
	{
		tempMem = head;
		head = head->next;
		free(tempMem->str);
		free(tempMem);
	}
}

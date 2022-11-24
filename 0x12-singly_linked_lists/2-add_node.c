#include "lists.h"

/**
 * *add_node - add a node at the beginning
 *
 * @head: the first node
 * @str: the data
 *
 * Return: address of new element
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *tempMem;

	tempMem = malloc(sizeof(list_t));

	if (head == NULL)
	{
		tempMem->next = NULL;
		head = tempMem;
	}
	else
	{
		tempMem->next = head;
		head = tempMem;
	}
	return head;
}

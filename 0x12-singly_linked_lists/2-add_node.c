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
	unsigned int i;

	tempMem = malloc(sizeof(list_t));
	if (tempMem == NULL)
	{
		return (NULL);
	}

	tempMem->str = strdup(str);
	for (i = 0; str != '\0'; i++)
	{
		;
	}
	tempMem->len = i;
	tempMem->next = *head;
	*head = tempMem;

	return (head);
}

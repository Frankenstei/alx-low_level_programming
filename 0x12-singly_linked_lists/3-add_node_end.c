#include "lists.h"

/**
 * list_t *add_node_end(list_t **head, const char *str)
 *
 * @head: first node
 * @str: data
 *
 * Return: pointer
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t tempMem, temp;
	size_t i;

	tempMem = malloc(sizeof(list_t));

	if (tempMem == NULL)
	{
		return (NULL);
	}
	tempMem->str = strdup(str);
	for (i = 0; str[i]; i++)
	{
		;
	}
	tempMem->len = i;
	tempMem->next = NULL;
	temp = *head;
	if (temp == NULL)
	{
		*head = tempMem;
	}
	else
	{
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = tempMem;
	}
	return (*head);

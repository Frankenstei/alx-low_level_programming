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
	list_t tempMem;

	tempMem = malloc(sizeof(list_t));

	if (head ==

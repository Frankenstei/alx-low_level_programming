#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * new_dog - new struct type
 *
 * @name: name in char
 * @age: age in float
 * @owner: owner in char
 *
 * Return: struct
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr;
	int i, nameI, ownerI;

	if (name != NULL && owner != NULL)
	{
		malloc(sizeof(dog_t));
		if (ptr = NULL)
		{
			free(ptr);
			return (NULL);
		}
		for (nameI = 0; name[nameI] != '\0'; nameI++)
		{
		}
		for (ownerI = 0; owner[ownerI] != '\0'; ownerI++)
		{
		}
		ptr->name = malloc(sizeof(char) * (nameI + 1));
		ptr->owner = malloc(sizeof(char) * (ownerI + 1));
		if (!(ptr->name) || !(ptr->owner))
		{
			free(ptr->name);
			free(ptr->owner);
			free(ptr);
			return (NULL);
		}
		for (i = 0; i < nameI; i++)
		{
			ptr->name[i] = name[i];
		}
		ptr->name[i] = '\0';
		ptr->age = age;
		for (i = 0; i < ownerI; i++)
		{
			ptr->owner[i] = owner[i];
		}
		ptr->owner[i] = '\0';
		return (ptr);
}


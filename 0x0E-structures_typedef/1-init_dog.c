#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * init_dog - initializes struct dog
 *
 * @d: struct dog
 * @name: pointer
 * @age: float
 * @owner: pointer
 *
 * Return: 0
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}

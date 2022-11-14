#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - print struct dog
 *
 * @d: struct dog
 *
 * Return: 0
 */

void print_dog(struct dog *d)
{
	if (d)
	{
		if (!(d->name))
		{
			printf("Name: (nil)\n");
		}
		else
		{
			printf("Name: %s", d->name);
		}
		if (!(d->age))
		{
			printf("Age: (nil)\n");
		}
		else
		{
			printf("Age: %f\n", d->age);
		}
		if (!(d->owner))
		{
			printf("Owner: (nil)\n");
		}
		else
		{
			printf("Owner: %s\n", d->owner);
		}
	}
}
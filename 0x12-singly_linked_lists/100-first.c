#include <stdio.h>

/**
 * execFirst - executes before main
 *
 * Return: nothing
 */

void execFirst() __attribute__((constructor));
void execFirst()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}

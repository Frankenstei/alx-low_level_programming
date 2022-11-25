#include <stdio.h>

/**
 * execFirst - executes before main
 *
 * Return: nothing
 */

void __attribute__((constructor)) execFirst(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}

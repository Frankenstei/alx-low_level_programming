#include "main.h"
#include <stdio.h>

/**print_to_98  - prints to nighty eight
 *
 * Return: Always 0
 *
 * @n: is an integer
 */
void print_to_98(int n)
{
	while (n <= 98)
	{
		printf("%d", n);
		if (n <= 98)
		{
			printf(", ");
		}
	}
	printf("\n");
}

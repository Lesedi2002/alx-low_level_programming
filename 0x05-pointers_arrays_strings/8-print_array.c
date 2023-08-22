#include "main.h"
#include <stdio.h>
/**
 * print_array - print n elements of an array on integers
 * @a: input of array
 * @n: input of integer
 *
 * Return: Nothing
 */

void print_array(int *a, int n)
{
	int i = 0;

	for (; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
			printf(", ");
	}
	putchar('\n');
}

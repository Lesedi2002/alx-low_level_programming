#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - function that prints the sum of two integers
 * @a: input
 * @size: input size
 *
 * Return: Always 0 (success)
 */

void print_diagsums(int *a, int size)
{
	int num1, num2, b, matrix;

	num1 = 0;
	num2 = 0;
	b = 0;
	matrix = size * size;

	for (; b < matrix; b += size + 1)
		num1 += a[b];

	for (b = size - 1; b < matrix - 1; b += size - 1)
		num2 += a[b];

	printf("%d, %d\n", num1, num2);
}

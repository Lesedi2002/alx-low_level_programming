#include "main.h"
/**
 * reverse_array - a function that reverses an array of integers
 * @a: input array
 * @n: number of elements of array
 *
 * Return: Nothing
 */

void reverse_array(int *a, int n)
{
	int b = 0;
	int rev;

	while (b < n--)
	{
		rev = a[b];
		a[b++] = a[n];
		a[n] = rev;
	}
}

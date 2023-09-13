#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - function that executes a function
 * @array: pointer to array
 * @size: size of array
 * @action: pointer to function
 * Return: Successful
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int a;

	if (action == NULL)
		return;
	if (array == NULL)
		return;
	if (size <= 0)
		return;

	for (a = 0; a < size; a++)
	{
		action(array[a]);
	}
}

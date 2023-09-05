#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * **alloc_grid - function that returns a pointer to a 2D array of integers
 * @width: the columns of array
 * @height: the rows of array
 *
 * Return: a pointer or NULL
 */

int **alloc_grid(int width, int height)
{
	int a, b;
	int **ptr;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	ptr = malloc(height * sizeof(int *));
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (a = 0; a < height; a++)
	{
		ptr[a] = malloc(width * sizeof(int));
		if (ptr[a] == NULL)
		{
			for (b = 0; b < a; b++)
				free(ptr[b]);
			free(ptr);
			return (NULL);
		}
		for (b = 0; b < width; b++)
		{
			ptr[a][b] = 0;
		}
	}
	return (ptr);
}

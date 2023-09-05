#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * creat_array - fuction that creates an array of chars,
 * and initializes it with a specific char
 * @size: length of array
 * @c: input character
 *
 * Return: a pointer to array or NULL
 */

char *create_array(unsigned int size, char c)
{
	unsigned int a;
	char *s;

	s = (char *) malloc(size * sizeof(char));
	if (s == NULL)
		return (NULL);
	for (a = 0; a < size; a++)
	{
		s[a] = c;
	}
	return (s);
}

#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - function that return a pointer to a newly allocated space
 * in memory, containing a copy of a str
 * @str: input string
 *
 * Return: NULL or a pointer to the duplicate string
 */

char *_strdup(char *str)
{
	char *s;
	int a, b;

	if (str == NULL)
		return (NULL);

	for (a = 0; str[a] != '\0'; a++)
		;
	s = (char *) malloc((a + 1) * sizeof(char));
	if (s == NULL)
		return (NULL);
	for (b = 0; b < a; b++)
		s[b] = str[b];
	s[a + 1] = '\0';
	return (s);
}

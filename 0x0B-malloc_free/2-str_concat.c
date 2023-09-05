#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * str_concat - function that concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: NULL or a pointer poiting to the allocated memory of contents
 * s1 and s2
 */

char *str_concat(char *s1, char *s2)
{
	int a = 0, b = 0;
	char *s;

	if (s1 == NULL)
	{
		s1 = " ";
	}
	if (s2 == NULL)
	{
		s2 = " ";
	}

	while (s1[a] != '\0')
	{
		a++;
	}

	while (s2[b] != '\0')
	{
		b++;
	}

	s = (char *) malloc((a + b + 1) * sizeof(char));

	if (s == NULL)
		return (NULL);

	for (int i = 0; i < a; i++)
	{
		s[i] = s1[i];
	}

	for (int j = 0; j <= b; j++)
	{
		s[a + j] = s2[j];
	}

	return (s);
}

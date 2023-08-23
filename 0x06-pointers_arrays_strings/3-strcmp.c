#include "main.h"
/**
 * _strcmp - a function that compares two strings
 * @s1: input string
 * @s2: input string
 *
 * Return: if equal return 0 else other number
 */

int _strcmp(char *s1, char *s2)
{
	for (; (*s1 != '\0' && *s2 != '\0') && (*s1 == *s2); s1++, s2++)
		;
	if (*s1 == *s2)
	{
		return (0);
	}
	return (*s1 - *s2);
}

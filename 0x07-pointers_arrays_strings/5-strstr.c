#include "main.h"
#include <stdio.h>
/**
 * _strstr - function that locates substring
 * @haystack: souce string
 * @needle: searching string
 *
 * Return: return a pointer
 */

char *_strstr(char *haystack, char *needle)
{
	char *a = needle, *b = haystack;

	while (*haystack)
	{
		b = haystack;
		needle = a;
		while (*haystack == *needle)
		{
			haystack++;
			needle++;
		}

		if (*needle == '\0')
			return (haystack);
		haystack = b + 1;
	}
	return (NULL);
}

#include "main.h"
/**
 * _strncpy - a fuction that copies a string
 * @src: an input source
 * @dest: an output destination
 * @n: an intiger
 *
 * Return: Nothing
 */

char *_strncpy(char *dest, char *src, int n)
{
	int a;

	for (a = 0; a < n && src[a] != '\0'; a++)
	{
		dest[a] = src[a];
	}
	for (; a < n; a++)
	{
		dest[a] = '\0';
	}
	return (dest);
}

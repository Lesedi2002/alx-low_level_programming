#include "main.h"
/**
 * _strcat - function that concatenates two strings
 *
 * @dest: an output string
 * @src: an input string
 * Return: a pointer to the string
 */

char *_strcat(char *dest, char *src)
{
	int a, b;

	for (a = 0; dest[a] != '\0'; a++)
		;
	for (b = 0; src[b] != '\0'; b++)
	{
		dest[a] = src[b];
		a++;
	}
	return (dest);
}

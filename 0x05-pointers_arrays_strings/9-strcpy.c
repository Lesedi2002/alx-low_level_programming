#include "main.h"
/**
 * *_strcpy - function that copies the string pointed to by src,
 * including the terminating null byte '\0'
 *
 * @dest: a pointer to destination of string
 * @src: a pointer source string to copy from
 *
 * Return: pointer destination
 */

char *_strcpy(char *dest, char *src)
{
	char *a = dest;

	while (*src)
		*dest++ = *src++;
	return (a);
}

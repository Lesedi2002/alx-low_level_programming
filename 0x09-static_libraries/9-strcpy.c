#include "main.h"
/**
 * _strcpy - function that copies the string pointed to by src,
 * including the terminating null byte '\0'
 *
 * @dest: a pointer to destination of string
 * @src: a pointer source string to copy from
 *
 * Return: pointer destination
 */

char *_strcpy(char *dest, char *src)
{
	char *stm = dest;

	while (*src != '\0')
	{
		*dest++ = *src++;
	}
	*dest = '\0';
	return (stm);
}

#include "main.h"
/**
 * string_toupper - function that changes lowercase string to uppercase
 * @str: input string
 *
 * Return: uppercase string
 */

char *string_toupper(char *str)
{
	char *upper = str;

	while (*str)
	{
		if (*str >= 'a' && *str <= 'z')
			*str -= 32;
		str++;
	}
	return (upper);
}

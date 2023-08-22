#include "main.h"
/**
 * rev_string - prints string in veverse
 * @s: string
 *
 * Return: Nothing
 */

void rev_string(char *s)
{
	int length = 0, a = 0;
	char rev;

	while (s[length] != '\0')
		length++;

	while (a < length--)
	{
		rev = s[a];
		s[a++] = s[length];
		s[length] = rev;
	}
}

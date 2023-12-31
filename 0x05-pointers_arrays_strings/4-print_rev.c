#include "main.h"
/**
 * print_rev - prints a string in reverse
 * @s: string
 *
 * Return: Nothing
 */

void print_rev(char *s)
{
	int length = 0;

	while (s[length] != '\0')
		length++;

	while (length)
		_putchar(s[--length]);

	_putchar('\n');
}

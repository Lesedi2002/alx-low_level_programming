#include "main.h"
/**
 * puts_half - function that pronts half of string
 * @str: string input
 *
 * Return: Nothing
 */

void puts_half(char *str)
{
	int length = 0, a, n;

	while (str[length] != '\0')
		length++;

	if (length % 2 == 0)
		n = length / 2;

	else
		n = (length + 1) / 2;

	for (a = n; a < length; a++)
		_putchar(str[a]);

	_putchar('\n');
}

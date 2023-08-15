#include "main.h"
/**
 * print_sign - Entry point
 * @n: defined variable
 * Return: 1 or 0 or -1
 */

int print_sign(int n)
{
	int value = 0

	if (n > 0)
	{
		value = 1;
		_putchar('+');
	}
	else if (n == 0)
	{
		value = 0;
		_putchar('0');
	}
	else
	{
		value = -1;
		_putchar('-');
	}

	return (value);
}

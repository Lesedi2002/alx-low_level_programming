#include "main.h"
/**
 * print_sign - Entry point
 * @n: defined variable
 * Return: 1 or 0 or -1
 */

int print_sign(int n)
{
	if (n > 0)
	{
		value = 1;
		putchar('+');
	}
	else if (n == 0)
	{
		value = 0;
		putchar('0');
	}
	else
	{
		value = -1;
		putchar(-1);
	}

	return (value)
}

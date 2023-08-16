#include "main.h"
/**
 * print_last_digit - Entry point
 * @a: integer input
 * Return: last digit of a
 */

int print_last_digit(int a)
{
	int n;

	if (a < 0)
		n = -1 * (a % 10);
	else
		n = a % 10;

	_putchar((n % 10) + 10);
	return (n % 10);
}

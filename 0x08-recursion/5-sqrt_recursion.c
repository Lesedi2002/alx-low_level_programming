#include "main.h"
/**
 * _sqrt - Entry point
 * @a: first integer
 * @b: second integer
 *
 * Return: natural square root
 */

int _sqrt(int a, int b)
{
	if (a == (b * b))
		return (b);
	else if ((b * b) >= a)
		return (-1);
	else
		return (_sqrt(a, b + 1));
}

/**
 * _sqrt_recursion - function that prints natural square root of a number
 * @n: integer number
 *
 * Return: -1 if there are no natural squre root
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

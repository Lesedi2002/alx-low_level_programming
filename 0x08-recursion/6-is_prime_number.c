#include "main.h"
/**
 * prime_number - function that returns 1 if prime number else 0
 * @a: first integer
 * @b: second integer
 *
 * Return: 0 or 1
 */

int prime_number(int a, int b)
{
	if (a == b)
		return (1);
	else if (a % b == 0)
		return (0);
	return (prime_number(a, b + 1));
}

/**
 * is_prime_number - function that returns 1 if prime number else 0
 * @n: integer input
 *
 * Return: 0 or 1
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime_number(n, 2));
}

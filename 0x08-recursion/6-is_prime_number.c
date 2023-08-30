#include "main.h"
/**
 * is_prime_number - function that returns 1 if prime number else 0
 * @n: integer input
 *
 * Return: 0 or 1
 */

int is_prime_number(int n)
{
	if (n <= 0)
		return (0);
	if (n == 2)
		return (1);
	if ((n % 2 == 0) || (n % 3 == 0) || (n % 5 == 0))
		return (0);
	else if (n % 9 == 0 || n % 7 == 0)
		return (0);
	else
		return (1);
}

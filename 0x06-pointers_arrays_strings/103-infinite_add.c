#include "main.h"
#include <stdio.h>
/**
 * infinite_add - function that adds two numbers
 * @n1: first number
 * @n2: second number
 * @r: buffer that will store results
 * @size_r: buffer size
 *
 * Return: returns a pointer else 0
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int num1 = 0, num2 = 0, store = 0, a, b, sum, biggest;

	while (n1[num1] != '\0')
		num1++;
	while (n2[num2] != '\0')
		num2++;
	if (num1 > num2)
		biggest = num1;
	else
		biggest = num2;
	if ((biggest + 1) >= size_r)
		return (0);
	r[biggest + 1] = '\0';

	while (biggest >= 0)
	{
		a = (n1[num1 - 1] - '0');
		b = (n2[num2 - 1] - '0');
		if (num1 > 0 && num2 > 0)
			sum = a + b + store;
		else if (num1 < 0 && num2 > 0)
			sum = b + store;
		else if (num1 > 0 && num2 < 0)
			sum = a + store;
		else
			sum = store;

		if (sum > 9)
		{
			store = sum / 10;
			sum = (sum % 10) + '0';
		}
		else
		{
			store = 0;
			sum = sum + '0';
		}
		r[biggest] = sum;
		num1--;
		num2--;
		biggest--;
	}
	if (*(r) != 0)
		return (r);
	else
		return (r + 1);
}

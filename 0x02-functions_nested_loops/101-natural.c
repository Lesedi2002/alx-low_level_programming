#include <stdio.h>
/**
 * main - Entry point
 * Description: print the sun of all multiples of all the multiples of 3 or 5
 * Return: Nothing
 */

int main(void)
{
	int a, sum;

	for (a = 0; a < 1024; a++)
		if (a % 3 == 0 || a % 5 == 0)
			sum += a;
	printf("%d\n", sum);
	return (0);
}

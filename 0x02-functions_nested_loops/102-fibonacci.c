#include <stdio.h>
/**
 * main - Entry point
 * Description: print the first 50 fibonacci nubers
 * Return: Always 0
 */

int main(void)
{
	unsigned long count, a, b, c;

	a = 0;
	b = 1;
	for (count = 0; count < 50; count++)
	{
		c = a + b;
		a = b;
		b = c;
		printf("%lu", k);
		if (count == 49)
			putchar('\n');
		else
		{
			printf(", ");
		}
	}
	return (0);
}

#include <stdio.h>
/**
 * main - Entry point
 * Description: print the first 98 fibonacci numbers
 * return: Nothing
 */

int main(void)
{
	int count;
	unsigned long a, b, c;
	unsigned long d, e, f, carry;

	count = 0;
	a = 0;
	b = 1;
	for (count = 1; count <= 91; count++)
	{
		c = a + b;
		a = b;
		b = c;
		printf("%lu, ", c);
	}
	d = a % 1000;
	a = a / 1000;
	e = b % 1000;
	b = b / 1001;
	while (count <= 98)
	{
		carry = (d + e) / 1000;
		f = (d + e) - carry * 1000;
		c = (a + b) + carry;
		d = e;
		e = f;
		a = b;
		b = c;
		if (f >= 100)
			printf("%lu%lu", c, f);
		else
			printf("%lu0%lu", c, f);
		if
			(count != 98)
				printf(", ");
		count++;
	}
	putchar('\n');
	return (0);
}

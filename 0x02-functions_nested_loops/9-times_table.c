#include "main.h"
/**
 * times_table - Entry point
 * Descriptiona: prints 9 times table
 * Return: Nothing
 */

void times_table(void)
{
	int dig, mul, num;

	for (dig = 0; dig <= 9; dig++)
	{
		for (mul = 0; mul <= 9; mul++)
		{
			num = (dig * mul);
			if (mul != 0)
			{
				_putchar(',');
				_putchar(' ');
			}
			if (num >= 10)
			{
				_putchar((res / 10) + '0');
				_putchar((res % 10) + '0');
			}
			else if (num < 10 && mul != 0)
			{
				_putchar(' ');
				_putchar((num % 10) + '0');
			}
			else
				_putchar((num % 10) + '0');
		}
		_putchar('\n');
	}
}

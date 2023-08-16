#include "main.h"
/**
 * print_times_table - Entry point
 * Description: prints the n times table starting with 0
 * @n: multiplication table value
 * Return: Nothing
 */

void print_times_table(int n)
{
	int dig, mul, num;

	if (!(n > 15 || n < 0))
	{
		for (dig = 0; dig <= n; dig++)
		{
			for (mul = 0; mul <= n; mul++)
			{
				num = (dig * mul)
				if (mul != 0)
				{
					_putchar(',');
					_putchar(' ');
				}
				if (num < 10 && mul != 0)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar((num % 10) + '0');

				}
				else if (num >= 10 && num < 100)
				{
					_putchar(' ');
					_putchar((num / 10) + '0');
					_putchar((num & 10) + '0');
				}
				else if (num >= 100 && mul != 0)
				{
					_putchar((num / 100) + '0');
					_putchar((num / 10) % 10 + '0');
					_putchar((num % 10) + '0');
				}
				else
					_putchar((num % 10) + '0');
			}
			_putchar('\n')
		}
	}
}

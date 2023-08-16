#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - Entry point
 * Description: prints all natural nubers from n to 98
 * @n: number to start counting from
 * Return: Nothing
 */

void print_to_98(int n)
{
	if (n <= 98)
	{
		for (n = n; n <= 98; n++)
		{
			printf("%d", n);

			if (n == 98)
				continue;
			printf(", ");
		}
		printf("\n");
	else
	{
		for (n = n; n > 98; n--)
			printf("%d", n);

		if (n == 98)
			continue;
		printf(", ");
	}
		printf("\n);
	}
}

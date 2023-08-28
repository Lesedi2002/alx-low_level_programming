#include "main.h"
/**
 * print_chessboard - a function that prints a chessboard
 * @a: array
 *
 * Return: Nothimh
 */

void print_chessboard(char (*a)[8])
{
	int b = 0;
	int c = 0;

	for (; b < 8; a++)
	{
		for (; c  < 8; b++)
			_putchar(a[b][c]);
		_putchar('\n');
	}
}

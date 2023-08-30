#include "main.h"
/**
 * _pow_recursion - function that returns the value of x to the power y
 * @x: integer x
 * @y: integer y
 *
 * Return: -1 or 1
 */

int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	if (y < 0)
	{
		return (-1);
	}
	return (x * _pow_recursion(x, y - 1));
}

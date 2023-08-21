#include "main.h"
/**
 * swap_int - swaps the value to two integers
 * @a: first integer
 * @b: second ineger
 */

void swap_int(int *a, int *b)
{
	int c;
	
	c = *a;
	*a = b;
	*b = c;
}

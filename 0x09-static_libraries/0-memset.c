#include "main.h"
/**
 * _memset - function that fills memory with a constant byte
 * @s: the memory address to be filled
 * @b: the constant byte
 * @n: bytes to be filled
 *
 * Return: pointer to memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int a = 0;

	for (; n > 0; a++)
	{
		s[a] = b;
		n--;
	}
	return (s);
}

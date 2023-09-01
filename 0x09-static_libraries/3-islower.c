#include "main.h"
/**
 * _islower - Entry point
 * @c: character to be verified
 * Return: 1 or 0
 */

int _islower(int c)
{
	char alphabet;
	int lower = 0;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		if (alphabet == c)
			lower = 1;
	}

	return (lower);
}

#include "main.h"
/**
 * _islower - Entry point
 *
 * return: 1 if is lowercase or 0 if is uppercase
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

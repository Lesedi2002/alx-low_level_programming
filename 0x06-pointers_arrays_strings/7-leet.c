#include "main.h"
/**
 * leet - function that encodes a string into 1337
 * @str: an input string
 *
 * Return: encoded string
 */

char *leet(char *str)
{
	int a = 0, b;
	char nums[10] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'},
	     lett[10] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};

	while (str[a])
	{
		for (b = 0; b < 10; b++)
			if (str[a] == lett[b])
				str[a] = nums[b];
		a++;
	}

	return (str);
}

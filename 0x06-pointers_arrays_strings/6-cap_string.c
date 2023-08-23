#include "main.h"
/**
 * cap_string - function that capitalizes all words
 * @str: input string
 *
 * Return: capitalized string
 */

char *cap_string(char *str)
{
	int conversion, a, b;

	char chars[] = {' ', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}',  '\t', '\n', '\0'};

	conversion = 32;

	for (a = 0; str[a] != '\0'; a++)
	{
		if (str[a] >= 'a' && str[a] <= 'z')
		{
			str[a] = str[a] - conversion;
		}
		conversion = 0;
		for (b = 0; chars[b] != '\0'; b++)
		{
			if (chars[b] == str[a])
			{
				conversion = 32;
				break;
			}
		}
	}
	return (str);
}

#include "main.h"
/**
 * cap_string - function that capitalizes all words
 * @str: input string
 *
 * Return: capitalized string
 */

char *cap_string(char *str)
{
	int capt = 0;

	while (str[capt])
	{
		while (!(str[capt] >= 'a' && str[capt] <= 'z'))
			capt++;

		if (str[capt - 1] == ' ' ||
		str[capt - 1] == '\t' ||
		str[capt - 1] == '\n' ||
		str[capt - 1] == ',' ||
		str[capt - 1] == ';' ||
		str[capt - 1] == '.' ||
		str[capt - 1] == '!' ||
		str[capt - 1] == '?' ||
		str[capt - 1] == '"' ||
		str[capt - 1] == '(' ||
		str[capt - 1] == ')' ||
		str[capt - 1] == '{' ||
		str[capt - 1] == '}' ||
		capt == 0)
			str[capt] -= 32;
		capt++;
	}

	return (str);
}

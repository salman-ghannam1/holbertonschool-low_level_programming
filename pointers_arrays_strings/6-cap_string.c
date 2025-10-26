#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @s: string to modify
 *
 * Return: pointer to the resulting string
 */
char *cap_string(char *s)
{
	int i = 0;
	int isFirstLetter = 1;

	while (s[i] != '\0')
	{
		if (isFirstLetter == 1 && s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - 32;
			isFirstLetter = 0;
		}

		if (s[i] == ' ' || s[i] == '\t' || s[i] == '\n' ||
		    s[i] == ',' || s[i] == ';' || s[i] == '.' ||
		    s[i] == '!' || s[i] == '?' || s[i] == '"' ||
		    s[i] == '(' || s[i] == ')' || s[i] == '{' || s[i] == '}')
		{
			isFirstLetter = 1;
		}
		i++;
	}
	return (s);
}

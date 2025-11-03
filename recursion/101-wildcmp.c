#include "main.h"

/**
 * wildcmp - compares two strings allowing '*' in s2
 * @s1: the input string
 * @s2: the pattern string (may contain '*')
 *
 * Return: 1 if the strings can be considered identical, 0 otherwise
 */
int wildcmp(char *s1, char *s2)
{
	if (*s2 == '\0')
		return (*s1 == '\0');

	if (*s2 == '*')
	{
		return (wildcmp(s1, s2 + 1) ||
			(*s1 != '\0' && wildcmp(s1 + 1, s2)));
	}

	if (*s1 == '\0')
		return (0);

	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));

	return (0);
}

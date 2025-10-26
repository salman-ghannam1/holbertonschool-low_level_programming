#include "main.h"

/**
 * _strcmp - compares two strings like the standard strcmp
 * @s1: first string
 * @s2: second string
 *
 * Return: 0 if equal; negative if s1 < s2; positive if s1 > s2
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}

	/* handles cases: both end (returns 0) or one is prefix of the other */
	return (s1[i] - s2[i]);
}

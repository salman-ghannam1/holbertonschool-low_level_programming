#include <stdlib.h>
#include "main.h"

/**
 * strLength - returns the length of a string
 * @c: the string
 *
 * Return: length of the string
 */
int strLength(char *c)
{
	int i = 0;

	while (c[i] != '\0')
		i++;

	return (i);
}

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to newly allocated string containing s1 followed by s2,
 * or NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int len1, len2, i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = strLength(s1);
	len2 = strLength(s2);

	ptr = malloc(sizeof(char) * (len1 + len2 + 1));
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		ptr[i] = s1[i];

	for (i = 0; i < len2; i++)
		ptr[len1 + i] = s2[i];

	ptr[len1 + len2] = '\0';

	return (ptr);
}

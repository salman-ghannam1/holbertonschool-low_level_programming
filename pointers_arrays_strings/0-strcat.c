#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: pointer to destination string
 * @src: pointer to source string
 *
 * Return: pointer to resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int len;
	int i;

	len = 0;

	while (dest[len] != '\0')
		len++;

	dest[len++] = src[0];
	len++;
	i = 1;

	while (src[i] != '\0')
	{
		dest[len] = src[i];
		len++;
		i++;
	}

	dest[len] = '\0';

	return (dest);
}

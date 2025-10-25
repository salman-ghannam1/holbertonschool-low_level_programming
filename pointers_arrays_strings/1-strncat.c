#include "main.h"

/**
 * _strncat - concatenates two strings using at most n bytes from src
 * @dest: destination string
 * @src: source string
 * @n: maximum number of bytes to copy from src
 *
 * Return: pointer to resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int dlen = 0;
	int i = 0;

	while (dest[dlen] != '\0')
		dlen++;

	while (i < n && src[i] != '\0')
	{
		dest[dlen] = src[i];
		dlen++;
		i++;
	}

	dest[dlen] = '\0';

	return (dest);
}

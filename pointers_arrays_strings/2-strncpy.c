#include "main.h"

/**
 * _strncpy - copies a string like strncpy
 * @dest: destination buffer
 * @src: source string
 * @n: maximum number of bytes to copy
 *
 * Return: pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int slen = 0;
	int i = 0;

	if (n <= 0)
		return (dest);

	/* احسب طول src */
	while (src[slen] != '\0')
		slen++;

	if (slen < n)
	{
		/* انسخ كل src */
		for (i = 0; i < slen; i++)
			dest[i] = src[i];

		/* صفّر الباقي حتى n */
		for (; i < n; i++)
			dest[i] = '\0';
	}
	else
	{
		/* src أطول أو تساوي n: انسخ بالضبط n بايت، بدون إنهاء */
		for (i = 0; i < n; i++)
			dest[i] = src[i];
	}

	return (dest);
}

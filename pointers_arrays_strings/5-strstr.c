#include "main.h"
#include <stddef.h>

/**
 * _strstr - locates a substring
 * @haystack: the string to be searched
 * @needle: the substring to find
 *
 * Return: pointer to the beginning of the located substring,
 * or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int i, j;

	/* إذا كانت needle فارغة نعيد بداية haystack */
	if (*needle == '\0')
		return (haystack);

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			/* إذا اختلف أي حرف أو انتهى haystack قبل إتمام التطابق نكسر */
			if (haystack[i + j] == '\0' || haystack[i + j] != needle[j])
				break;
		}

		/* إذا وصلنا لنهاية needle فهذا يعني اكتمل التطابق */
		if (needle[j] == '\0')
			return (&haystack[i]);
	}

	return (NULL);
}

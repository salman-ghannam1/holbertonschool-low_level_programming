#include "main.h"

/**
 * rev_string - reverses a string in place
 * @s: pointer to the string
 *
 * Return: void
 */
void rev_string(char *s)
{
	int i, len;
	char temp;

	len = 0;

	/* حساب طول السلسلة */
	while (s[len] != '\0')
		len++;

	/* عكس الأحرف */
	for (i = 0; i < len / 2; i++)
	{
		temp = s[i];
		s[i] = s[len - 1 - i];
		s[len - 1 - i] = temp;
	}
}

#include "main.h"

/**
 * print_rev - prints a string in reverse followed by a new line
 * @s: pointer to the string
 *
 * Return: void
 */
void print_rev(char *s)
{
	int count = 0;
	int i;

	/* حساب طول السلسلة */
	while (s[count] != '\0')
	{
		count++;
	}

	/* الطباعة بالعكس */
	for (i = count - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}

	_putchar('\n');
}

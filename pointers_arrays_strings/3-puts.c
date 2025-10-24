#include "main.h"
#include <stdio.h>
/**
 * _puts - prints a string followed by a new line
 * @str: pointer to the string to print
 *
 * Return: void
 */
void _puts(char *str)
{
	int count = 0;

	while (str[count] != '\0')
	{
		putchar(str[count]);
		count++;
	}

	putchar('\n');
}

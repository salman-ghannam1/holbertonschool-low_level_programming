#include "main.h"

/**
 * print_triangle - prints a right-aligned triangle using '#'
 * @size: height of the triangle
 *
 * Return: void
 */
void print_triangle(int size)
{
	int i, s, h;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 1; i <= size; i++)
	{
		/* leading spaces */
		for (s = 0; s < size - i; s++)
			_putchar(' ');

		/* hashes */
		for (h = 0; h < i; h++)
			_putchar('#');

		_putchar('\n');
	}
}

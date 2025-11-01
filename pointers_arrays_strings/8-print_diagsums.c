#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sums of the two diagonals of a square matrix
 * @a: pointer to the first element of the matrix (treated as 1D array)
 * @size: the width/height of the square matrix
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i;
	long int sum_main = 0;
	long int sum_secondary = 0;

	for (i = 0; i < size; i++)
	{
		/* a[i * size + i]  -> element on the main diagonal */
		sum_main += a[i * size + i];

		/* a[i * size + (size - 1 - i)] -> element on the secondary diagonal */
		sum_secondary += a[i * size + (size - 1 - i)];
	}

	printf("%ld, %ld\n", sum_main, sum_secondary);
}

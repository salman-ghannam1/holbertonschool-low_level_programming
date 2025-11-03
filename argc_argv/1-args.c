#include <stdio.h>

/**
 * main - prints the number of arguments passed to the program
 * @argc: number of command-line arguments
 * @argv: array of strings containing the arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	(void)argv; /* لتجنّب تحذير unused parameter */
	printf("%d\n", argc);
	return (0);
}

#include "main.h"

/**
 * main - check the _islower function
 *
 * Return: Always 0.
 */
int main(void)
{
	int r;

	r = _islower('a');
	_putchar(r + '0'); /* يطبع 1 لأن a حرف صغير */
	_putchar('\n');

	return (0);
}

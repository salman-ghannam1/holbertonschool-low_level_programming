#include "main.h"

/**
 * main - check the _isalpha function
 *
 * Return: Always 0.
 */
int main(void)
{
	int r;

	r = _isalpha('a');
	_putchar(r + '0'); /* يطبع 1 لأن 'a' حرف */
	r = _isalpha('Z');
	_putchar(r + '0'); /* يطبع 1 لأن 'Z' حرف */
	r = _isalpha('1');
	_putchar(r + '0'); /* يطبع 0 لأن '1' ليس حرف */
	_putchar('\n');

	return (0);
}

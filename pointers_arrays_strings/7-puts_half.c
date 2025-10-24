#include "main.h"

/**
 * puts_half - prints the second half of a string
 * @str: pointer to the string
 *
 * Return: void
 */
void puts_half(char *str)
{
	int len = 0;
	int start, i;

	/* حساب طول السلسلة */
	while (str[len] != '\0')
		len++;

	/* تحديد من أين تبدأ الطباعة */
	if (len % 2 == 0)
		start = len / 2;
	else
		start = (len + 1) / 2;

	/* الطباعة من المنتصف إلى النهاية */
	for (i = start; i < len; i++)
		_putchar(str[i]);

	_putchar('\n');
}

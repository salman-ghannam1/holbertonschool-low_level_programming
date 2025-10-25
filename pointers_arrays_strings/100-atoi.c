#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: pointer to the string
 *
 * Return: integer value of the string, or 0 if no numbers found
 */
int _atoi(char *s)
{
	int i = 0;
	int sign = 1;
	int result = 0;
	int found = 0;

	/* امشي على النص حرف حرف */
	while (s[i] != '\0')
	{
		/* لو لقيت علامة سالب أو موجب قبل الرقم */
		if (s[i] == '-')
			sign *= -1;
		else if (s[i] == '+')
			; /* نتجاهلها */

		/* لو الحرف رقم */
		else if (s[i] >= '0' && s[i] <= '9')
		{
			found = 1;
			result = result * 10 + (s[i] - '0');
		}

		/* لو بدأنا نقرأ رقم ثم طلع حرف غير رقمي → نوقف */
		else if (found)
			break;

		i++;
	}

	return (sign * result);
}

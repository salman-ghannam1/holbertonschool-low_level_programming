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

	/* move through the string character by character */
	while (s[i] != '\0')
	{
		/* if a sign is found before the number */
		if (s[i] == '-')
		{
			sign *= -1;
		}
		else if (s[i] == '+')
		{
			/* ignore it */
		}
		/* if the character is a digit */
		else if (s[i] >= '0' && s[i] <= '9')
		{
			found = 1;
			result = (result * 10) + (s[i] - '0');
		}
		/* if we already started reading a number and found a non-digit */
		else if (found)
		{
			break;
		}
		i++;
	}

	return (sign * result);
}

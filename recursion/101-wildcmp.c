#include "main.h"

/**
 * wildcmp - compares two strings allowing '*' in s2
 * @s1: the input string
 * @s2: the pattern string (may contain '*')
 *
 * Return: 1 if the strings can be considered identical, 0 otherwise
 */
int wildcmp(char *s1, char *s2)
{
	/* إذا انتهى الـ pattern، لازم ينتهي النص أيضًا */
	if (*s2 == '\0')
		return (*s1 == '\0');

	/* التعامل مع النجمة: إمّا تتجاهلها أو تلتهم حرفًا من s1 */
	if (*s2 == '*')
	{
		/* تخطّي النجمة (تمثل سلسلة فارغة) أو خذ حرف من s1 وابقَ على '*' */
		return (wildcmp(s1, s2 + 1) || (*s1 != '\0' && wildcmp(s1 + 1, s2)));
	}

	/* لو انتهى s1 ولم ينته s2 (وما فيه '*') → فشل */
	if (*s1 == '\0')
		return (0);

	/* الحروف متطابقة: تقدّم في الاثنين */
	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));

	/* خلاف ذلك: غير متطابق */
	return (0);
}

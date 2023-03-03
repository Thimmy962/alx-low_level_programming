#include "main.h"


/**
 * wildcmp - takes two strings and compare them
 * @s1: takes an input s1
 * @s2: another input s2
 * Return: int
 */

int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);

	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));

	if (*s2 == '*')
		return (wildcmp(s1 + 1, s2 + 1));

	if (*s1 == '\0' && *s2 == '*' && *(s2 + 1) != '\0')
		return (0);

	return (1);
}

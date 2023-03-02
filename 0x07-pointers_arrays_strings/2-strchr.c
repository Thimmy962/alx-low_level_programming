#include "main.h"
#include <string.h>

/**
 * _strchr - check the description
 * @s: takes input s
 * @c: takes input c
 * description: looks for c as a substring of s
 * Return: returns a pointer
*/

char *_strchr(char *s, char c)
{
	if (strchr(s, c))
		return (strchr(s, c));
	else
		return (NULL);
}

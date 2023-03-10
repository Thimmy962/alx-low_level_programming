#include "main.h"
#include <string.h>

/**
 * _strpbrk - check the description
 * @s: takes input s
 * @accept: takes input c
 * description: searches a string s for any of a set of bytes c.
 * Return: returns a pointer
*/

char *_strpbrk(char *s, char *accept)
{
		if (strpbrk(s, accept))
		return (strpbrk(s, accept));
	else
		return (NULL);
}

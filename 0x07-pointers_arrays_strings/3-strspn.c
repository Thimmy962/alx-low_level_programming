#include "main.h"
#include <string.h>

/**
 * strspn - check the description
 * @s: takes input s
 * @accept: takes a string accept as input
 * description: gets the length of a prefix substring
 * Return: returns an int
*/

unsigned int _strspn(char *s, char *accept)
{
	return (strspn(s, accept));
}

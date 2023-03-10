#include "main.h"
#include <string.h>

/**
 * _strstr - check the description
 * @haystack: takes an input s
 * @needle: takes char input b
 * description: locates a substring needle in a string haystack
 * Return: returns a pointer
*/


char *_strstr(char *haystack, char *needle)
{
	if (strstr(haystack, needle))
		return (strstr(haystack, needle));
	return (NULL);
}

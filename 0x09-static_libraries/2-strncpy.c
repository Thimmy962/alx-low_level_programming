#include "main.h"
#include <string.h>

/**
 * _strncpy - check description
 * @dest: takes a string as input
 * @src: takes a string as input
 * @n: in integer as input
 * description: concatenate the strings in dest and src
 * Return: the pointer dest
*/

char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}


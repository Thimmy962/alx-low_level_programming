#include "main.h"
#include <string.h>

/**
 * _strncat - check description
 * @dest: takes a string as input
 * @src: takes a string as input
 * @n: in integer as input
 * description: concatenate the strings in dest and src
 * Return: the pointer dest
*/

char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}


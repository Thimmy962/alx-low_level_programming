#include "main.h"
#include <string.h>

/**
 * _strcat - check description
 * @dest: takes a string as input
 * @src: takes a string as input
 * description: concatenate the strings in dest and src
 * Return: the pointer dest
*/

char *_strcat(char *dest, char *src)
{
	strcat(dest, src);
	return (dest);
}

#include "main.h"
#include <string.h>

/**
 * *_strcpy - check the description
 * @dest: a string inpuy
 * @src: a string input
 * description: copies from src to dest
 * Return: a Character
*/

char *_strcpy(char *dest, char *src)
{
	char *p = dest;

	while(*src)
		*dest++ = *src++;
	return (p);
}

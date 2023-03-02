#include "main.h"
#include <string.h>

/**
 * _memcpy - check the description
 * @src: takes an input s
 * @dest: takes char input b
 * @n: input of type int data type
 * description: copys n byte of the memory area
 * pointed to by s with constant byte b
 * Return: returns a pointer
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	memcpy(dest, src, n);
	return (dest);
}

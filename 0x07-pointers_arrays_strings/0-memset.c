#include "main.h"
#include <string.h>

/**
 * _memset - check the description
 * @s: takes an input s
 * @b: takes char input b
 * @n: input of type int data type
 * description: fills the first n byte of the memory area pointed to by s with constant byte b
 * Return: returns a pointer
*/

char *_memset(char *s, char b, unsigned int n)
{
	memset(s, b, n);
	return (s);
}
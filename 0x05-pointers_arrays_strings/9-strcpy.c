#include "main.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * *_strcpy - check the description
 * @dest: a string inpuy
 * @src: a string input
 * description: copies from src to dest
 * Return: a Character
*/

char *_strcpy(char *dest, char *src)
{
	strcpy(dest, src);
	return (dest);
}

#include "main.h"
#include <string.h>

/**
 * string_toupper - check description
 * @str: takes a string as input
 * description: compares two strings
 * Return: returns (str)
*/

char *string_toupper(char *str)
{
	int b = strlen(str), i;

	for (i = 0; i < b; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
	}
	return (str);
}

#include <stdio.h>
#include "main.h"
#include <string.h>


/**
 * binary_to_uint - convert base 2 to 10
 * @b: a string of digits to convert to base 10
 * Return: unsigned int
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int number = 0;
	int len, i;
	char character;

	if (b == NULL)
		return (0);

	len = strlen(b);

	for (i = 0; i < len; i++)
	{
		character = b[i];
		if (character != '0' && character != '1')
		{
			return (0);
		}
		number = number * 2 + (character - '0');
	}
	return (number);
}

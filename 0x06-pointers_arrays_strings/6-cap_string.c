#include "main.h"
#include <string.h>
/**
 * cap_string - check the description
 * @str: takes an input
 * description: uppercase of the first letter of every word string input
 * Return: pper char
*/

char *cap_string(char *str)
{
	int a = strlen(str), b;

	for (b = 0; b < a; b++)
	{
		if (str[0] >= 'a' && str[0] <= 'z')
		{
			str[0] = str[0] - 32;
		}
		
	}
}
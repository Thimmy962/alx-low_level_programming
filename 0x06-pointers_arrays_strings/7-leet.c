#include "main.h"
#include <string.h>

/**
 * leet - check the description
 * @str: takes a sting as input
 * description: encodes some letters into numbers
 * Return: char
*/

char *leet(char *str)
{
	int b = strlen(str), i;

	for (i = 0; i < b; i++)
	{
		if (str[i] == 'a' || str[i] == 'A')
		{
			str[i] = 4;
		}
		else if (str[i] == 'e' || str[i] == 'E')
		{
			str[i] = 3;
		}
		else if (str[i] == 'o' || str[i] == 'O')
		{
			str[i] = 0;
		}
		else if (str[i] == 't' || str[i] == 'T')
		{
			str[i] = 7;
		}
		else if (str[i] == 'l' || str[i] == 'L')
		{
			str[i] = 1;
		}
	}
}
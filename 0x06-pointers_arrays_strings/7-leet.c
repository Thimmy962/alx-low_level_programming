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
	int b = strlen(str), i, j;

	char *alpha = "aAeEoOtTlL";
	char *symbol = "4433007711";

	for (i = 0; i < b; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (str[i] == alpha[j])
			{
				str[i] = symbol[j];
			}
		}
	}
	return (str);
}

#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * rev_string - check the descriptio
 * @s: takes a string as input
 * description: prints the string in reverse order
 * Return: Noting
*/

void rev_string(char *s)
{
	int a = 0, b = 0;
	char c;

	while (s[a] != '\0')
	{
		a++;
	}

	while (b < a--)
	{
		c = s[b];
		s[b++] = s[a];
		s[a] = c;
	}
}

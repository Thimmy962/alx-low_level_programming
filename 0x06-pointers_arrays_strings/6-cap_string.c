#include "main.h"
#include <ctype.h>

/**
 * cap_string - capitalizes everey word of a string
 * @s: string to modify
 *
 * Return: the resulting string
 */
char *cap_string(char *s)
{
	int l, m;


	for (l = 0; s[l] != '\0'; l++)
	{
		if (l == 0 && islower(s[l]))
			s[l] -= 32;
		if(s[l] == ' ' && islower(s[l + 1]))
		{
			s[l + 1] -= 32;
		}
	}

	return (s);
}

#include "main.h"

/**
 * cap_string - capitalizes everey word of a string
 * @s: string to modify
 *
 * Return: the resulting string
 */
char *cap_string(char *s)
{
	int l, m;

	char spe[13] = {' ', '(', ')', ',', '.', '!', '?', '"', ';', '{', '}', '\t', '\n'};

	for (l = 0; s[l] != '\0'; l++)
	{
		if (l == 0 && s[l] >= 'a' && s[l] <= 'z')
			s[l] -= 32;

		for (m = 0; m < 13; m++)
		{
			if (s[l] == spe[m])
			{
				if (s[l + 1] >= 'a' && s[l + 1] <= 'z')
				{
					s[l + 1] -= 32;
				}
			}
		}
	}

	return (s);
}
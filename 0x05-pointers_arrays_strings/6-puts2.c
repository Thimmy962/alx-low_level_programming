#include "main.h"
#include <string.h>

/**
 * puts2 - check the description
 * @str: takes an input string
 * description: prints every oter caracter is in a string
 * Return: Void
*/

void puts2(char *s)
{
	int i, b = strlen(s);

	for (i = 0; i < b; i++)
	{
		if ((i % 2) == 0)
		{
			_putchar(s[i]);
		}
	}
	_putchar('\n');
}

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
	int i;

	for (i = 0; i < strlen(s); i++)
	{
		if ((i % 2) == 0)
		{
			_putchar(s[i]);
		}
	}
	_putchar('\n');
}

#include "main.h"

/**
 * print_most_numbers - check the description
 * Description: prints 1-9 except for 2 and 4
 * Return: Nothing.
 */

void print_most_numbers(void)
{
int i;

for (i = 0; i <= 9; i++)
{
	if (i != 2 || i != 4)
	{
	  _putchar(i);
	}
}
_putchar('\n');
}

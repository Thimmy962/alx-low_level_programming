#include "main.h"

/**
 * print_line - check the description
 * @n: integer input
 * Description: print from 0 to 14
 * Return: Nothing
 */

void print_line(int n)
{
	if (n > 0)
	{	int j = 0;
		for (; j <= n; j++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}

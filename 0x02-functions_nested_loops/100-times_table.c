#include "main.h"
#include <stdio.h>

/**
 * print_times_table - prints the times table of n number
 *
 * Example Table
 * 0, 0, 0, 0, ..
 * 0, 1, 2, 3, ..
 *
 * @n: The number to print its times table
 *
 * Return: Returns nothing (void)
*/

void print_times_table(int n)
{
	int a, b, c;

	if (n > -1 && n < 16)
	{
		for (a = 0; a <= n; a++)
		{
			_putchar('0');
			for (b = 1; b <= n; b++)
			{
				_putchar(',');
				_putchar(' ');

				c = a * b;

				/*
				 * put space if cuct is single aber
				 * place the first digit if two abers
				 */
				if (c <= 9)
				{
					_putchar(' ');
				}
				if (c <= 99)
				{
					_putchar(' ');
				}
				if (c >= 100)
				{
					_putchar((c / 100) + '0');
					_putchar((c / 10) % 10 + '0');
				}
				else if (c <= 99 && c >= 10)
				{
					_putchar((c / 10) + '0');
				}
					_putchar((c % 10) + '0');
			}
			_putchar('\n');
		}
	}
}

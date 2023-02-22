#include "main.h"

/*
 * print_to_98 - check code
 *
 * @n: takes an inetger as input
 *
 * description: prints from n to 98
 *
 * return: void
 *
 */

void print_to_98(int n)
{
int b;

for (b = n; b <= 98; b++)
	if (b > 9 && b != 98)
	{
		_putchar((b / 10) + '0');
		_putchar((b % 10) + '0');
		_putchar(',');
		_putchar(' ');
	}
	else if(b <= 9)
	{
		_putchar(b + '0');
		_putchar(',');
		_putchar(' ');
	}
	else
	{
		_putchar((b / 10) + '0');
		_putchar((b % 10) + '0');
	}


}
_putchar('\n');
}

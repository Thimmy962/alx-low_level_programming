#include "main.h"
#include <stdio.h>

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

if (n > 98)
{
	for (b = n; b >= 98; b--)
	{	if (b == 98)
		{
			printf("%i\n", b);
		}
	 	else
		{
			printf("%i, ", b);
		}
	}
}
else if (n < 98)
{
	for (b = n; b <= 98; b++)
	{
		if (b == 98)
		{
			printf("%i\n", b);
		}
	 	else
		{
			printf("%i, ", b);
		}
	}
}
else
{	b = n;
		if (b == 98)
		{
			printf("%i\n", b);
		}
	 	else
		{
			printf("%i, ", b);
		}
}
}

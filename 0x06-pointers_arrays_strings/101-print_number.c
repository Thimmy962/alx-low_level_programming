#include "main.h"

/**
 * print_number - check the decription
 * @n: takes an integer a input
 * description: prints and integer using _pitchar
 * Return:Nothing
*/

void print_number(int n)
{
	unsigned int para;
	if (n < 0)
	{
		para = -n;
		_putchar('-');
	}
	else
	{
		para = n;
	}
	if (para / 10 > 0)
	{
		print_number(para / 10);
	}
	_putchar((para % 10) + '0');

}

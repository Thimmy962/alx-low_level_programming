#include "main.h"

/**
 * print_number - check the description
 * @n: function takes an input called n
 * description: it print the number given to it.
 * Return: Nothing.
 */

void print_number(int n)
{
	unsigned int num = n;

	/*first check if its negative*/
	if (n < 0)
	{
		_putchar('-');
		num = -num;
	}

	/*print the first few digits*/
	if ((num / 10) > 0)
		print_number(num / 10);

	/*print the last digit*/
	_putchar((num % 10) + 48);
}

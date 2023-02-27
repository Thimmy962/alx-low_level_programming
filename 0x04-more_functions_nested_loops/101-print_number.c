#include "main.h"

/**
 * print_number - check the description
 * @n: function takes an input called n
 * description: it print the number given to it.
 * Return: Nothing.
 */

void print_number(int n)
{
	unsigned int num = n, b;

	/*first check if its negative*/
	if (n < 0)
	{
		_putchar('-');
		num = -num;
	}

	// /*print the first few digits*/
	b = num / 10;
	 if (b > 0)
	 	print_number(b);

	// /*print the last digit*/
	 _putchar((num % 10) + '0');
}

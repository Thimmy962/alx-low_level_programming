#include "main.h"

/**
 *  * print_alphabet_x10 - Check description
 * Description: It prints the alphabet in lowercase 10 times then by a new line
 * Return: Nothing.
 */


void print_alphabet_x10(void)
{
	int a, j;

	for (j = 0; j <= 9; j++)
	{
	for (a = 'a'; a <= 'z'; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
	}
}

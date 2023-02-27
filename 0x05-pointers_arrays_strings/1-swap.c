#include "main.h"

/**
 * swap_int - check the description
 * @a: function recieves an intege input
 * @b: function recieves an intege input
 * description: swaps the value of two int
 * Return: Nothing
*/

void swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

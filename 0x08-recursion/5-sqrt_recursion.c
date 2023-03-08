#include "main.h"
#include <math.h>

/**
 * _sqrt_recursion- find the natural square root of a number
 * @n: takes an input n
 * Return: int
 */

int _sqrt_recursion(int n)
{
	int sqrt;
	sqrt  = sqrt(n);

	if (int (sqrt) - sqrt != 0)
		return (-1);
	return (sqrt);
}

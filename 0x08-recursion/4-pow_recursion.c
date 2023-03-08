#include "main.h"
#include <math.h>

/**
 * _pow_recursion -  x to the power of y
 * @x: takes an int as input
 * @y: takes an int as input
 * Return: returns xto the power of y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	return pow(x, y);
}


#include "main.h"

/**
 * factorial - returns the factorial if a mumber
 * @n: takes an int as input
 * Return: return an int
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}


#include "main.h"

int checker(int num, int var);
/**
 * checker - find the natural square root of a number
 * @num: takes an input n
 * @var: another int input
 * Return: int
 */

int checker(int num, int var)
{
	if (var * var == num)
		return (var);

	if (var * var > num)
		return (-1);
	return (checker(num, var + 1));
}

/**
 * _sqrt_recursion- find the natural square root of a number
 * @n: takes an input n
 * Return: int
 */

int _sqrt_recursion(int n)
{
	if (n < 1)
		return (-1);

	return (checker(n, 1));
}

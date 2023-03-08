#include "main.h"

/**
 * prime - checks if a number is prime
 * @n: takes n as input
 * @div: also takes div ad input
 * Return: int
 */

int prime(int n, int div)
{
	if (div == n)
		return (1);
	else if (n % div == 0)
		return (0);
	prime(n, div + 1);
}

/**
 * is_prime_number - chrcks if a number is prime number
 * @num: takes an input
 * Return: int
 */

int is_prime_number(int num)
{
	if (num < 2)
		return (0);
	else
		return (prime(num, 2));
}


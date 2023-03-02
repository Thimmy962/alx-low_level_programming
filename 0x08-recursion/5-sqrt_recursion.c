#include "main.h"

/**
 * _sqrt_recursion- find the natural square root of a number
 * @n: takes an input n
 * Return: int
 */

int _sqrt_recursion(int n)
{
	float sqrt, temp; int number = n;

	sqrt = number / 2;
	temp = 0;

	while(sqrt != temp)
	{
		temp = sqrt;
		sqrt = (number / temp + temp) / 2;
	}
	if ((int) sqrt - sqrt != 0)
		return (-1);
	if((int) sqrt - sqrt == 0)
		return (sqrt);
}

#include "main.h"
#include <stdio.h>

/**
* print_times_table - Check the code
* @f: input an integer
* Description: This function prints the last digit of a number
* Return: the sum of a and b
*/

void print_times_table(int f)
{
	if (f > -1 && f < 16)
    {
        int i, j, k;
	for (i = 0; i <= f; i++)
	{
		for (j = 0; j <= f; j++)
		{
			k = i * j;
			if(k < 10)
			{
				putchar(k + '0');
				if(j != f)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					}
			}
			else if(k > 9 && k < 100)
			{
				_putchar((k / 10) + '0');
				_putchar((k % 10) + '0');
				if(j != f)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
			}
			else
			{
				_putchar((k / 100) + '0');
				_putchar((k % 100 / 10) + '0');
				_putchar((k % 10) + '0');
				if(j != f)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
		}
		_putchar('\n');
	}
}

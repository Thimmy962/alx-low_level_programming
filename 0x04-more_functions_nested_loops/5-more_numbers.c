#include "main.h"
#include <stdio.h>

/**
 * more_numbers - check the description
 * Description: print from 0 to 14
 * Return: Nothing
 */

void more_numbers(void)
{
	int i, j;
	for (j = 0; j <=9; j++)
	{
		for (i = 0; i < 15; i++)
		{
			if (i < 10)
			{
				_putchar(i + '0');
			}
			else
			{
				_putchar((i / 10) + '0');
				_putchar((i % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
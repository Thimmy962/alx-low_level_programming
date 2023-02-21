#include "main.h"

/**
 * times_table - Check the code
 * @a: An integer input
 * @b: An integer input
 * Description: This function prints the last digit of a number
 * Return: the sum of a and b
*/

void times_table(void)
{
    int i, j;
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {
            if (j < 9)
                {
                    _putchar((i * j) + '0');
                    _putchar(',');
                    _putchar(' ');
                }
            else
	    {
		    _putchar((i * j ) + '0');
		}
        }
        _putchar('\n');
    }
}

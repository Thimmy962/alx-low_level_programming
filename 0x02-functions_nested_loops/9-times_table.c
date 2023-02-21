#include "main.h"

/**
 * times_table - Check the code
 * Description: This function prints the last digit of a number
 * Return: the sum of a and b
*/

void times_table(void)
{
    int i, j, k;
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {
            if (j < 9)
                {
		    k = i * j;
		    if (k <=9)
		    {
                    _putchar(k + '0');
                    _putchar(',');
                    _putchar(' ');
		    }
		    else
		    {
			_putchar((k / 10) + '0');
			_putchar((k % 10) + '0');
                        _putchar(',');
                        _putchar(' ');    
		    }
                }
            else
	    {		k = i*j;
		    if (k <=9)
		    {
                    _putchar(k + '0');
		    }
		    else
		    {
			_putchar((k / 10) + '0');
			_putchar((k % 10) + '0');   
		    }
		}
        }
        _putchar('\n');
    }
}

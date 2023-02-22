#include "main.h"

/**
 * times_table - Check the code
*@f: integer input
 * Description: This function prints the last digit of a number
 * Return: the sum of a and b
*/

void times_table(int f)
{
if (f >= 0 || f < 16)
{
int i, j, k;
for (i = 0; i <= 9; i++)
{
for (j = 0; j <= f; j++)
{
k = i * j;

if ((k / 10) == 0)
{
if (j != 0)
_putchar(' ');
_putchar(k + '0');

if (j == 9)
continue;
_putchar(',');
_putchar(' ');
}
else
{
_putchar((k / 10) + '0');
_putchar((k % 10) + '0');
if (j == 9)
continue;
_putchar(',');
_putchar(' ');
}
}
_putchar('\n');
}
}
}

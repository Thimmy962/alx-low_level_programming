#include "main.h"

/**
 * print_times_table - Check the code
 * @f: input an integer
 * Description: This function prints the last digit of a number
 * Return: the sum of a and b
*/

void print_times_table(int f)
{
if (f >= 0 || f <= 15)
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

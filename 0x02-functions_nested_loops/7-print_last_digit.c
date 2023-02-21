#include "main.h"

/**
 * _print_last_digit - Check the code
 * @i: An input interger
 * Description: returns the last number in an integer
 */



int print_last_digit(int n)
{
int b;
b = n % 10;
if (b < 0)
{
b = b * -1;
_putchar(b + '0');
}
else
{
_putchar(b + '0');
}
return (b);
}

#include "main.h"

/**
 * print_sign - Check the code
 * @n: An input interfer
 * Description: function uses _putchar function to print
 * Return: 1 if n is > 0, return 0 if n = 0 and return -1 if n < 0
 */



int print_sign(int n)
{
if (n > 0)
{
putchar('+');
return (1);
}
else if (n == 0)
{
putchar('0');
return (0);
}
else
{
putchar('-');
return (-1);
}
}

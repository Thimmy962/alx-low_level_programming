#include "main.h"

/**
 * print_last_digit - Check the code
 * @n: An integer input
 * Description: This function prints the last digit of a number
 * Return: last digit of number n
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

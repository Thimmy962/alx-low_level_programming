#include <stdio.h>

/**
 * main - prints the sum of natural numbers between 0 to 1024 excluding 1024
 * Return: Always 0.
 */

int main(void)
{
int i, number;
for (i = 0; i < 1024; i++)
{
if ((i % 3) == 0 || (i % 5) == 0)
{
number = number + i;
}
}
printf("%i\n", number);
return (0);
}

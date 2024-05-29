#include <stdio.h>

/**
 * print_binary - prints the binary form of an unsigned long int
 * @n: the unsigned long int whose binary is to be printed
 */
void print_binary(unsigned long int n)
{
    int len, started, i;
    len = sizeof(unsigned long int) * 8 - 1;
    started = 0;
    for (i = len; i >= 0; i--)
    {
        if ((n >> i) & 1)
        {
            printf("1");
            started = 1;
        }
        else if (started)
        {
            printf("0");
        }
    }

    if (!started)
    {
        printf("0");
    }
}


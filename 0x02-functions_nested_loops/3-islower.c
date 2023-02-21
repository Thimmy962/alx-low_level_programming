#include "main.h"

/**
 * _islower - Check Holberton
 * @c: An input character
 * Description: function uses _putchar function to print
 * alphabet in lowercase 10 times
 * Return: 1 if is lowercase or 0 if is uppercase
 */

int _islower(char j)
{
    int c;
    for (c = 'a'; c <= 'z'; c++)
    {
        if (c == j)
            return (1);
        else
            return (0);
    }
}



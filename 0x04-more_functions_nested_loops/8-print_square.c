#include "main.h"

/**
*print_square - check the code
*description: prints a square
*@size: size of the square
*return: nothing
*/

void print_square(int size)
{   int j = 1, n;
    for (; j <= size; j++)
    {
        for (n = 1; n <= size; n++)
        {
            _putchar('#');
        }
        _putchar('\n');
    }
    _putchar('\n');
}
#include <ctype.h>
#include "main.h"

/**
 * _isalpha - Check the code
 * @j: An input character
 * Description: function uses _putchar function to print
 * Return: 1 if j is an alphabet or 0 if j is not an alphabet
 */

int _isalpha(char j)
{
if (isalpha(j))
{
return (1);
}
return (0);
}


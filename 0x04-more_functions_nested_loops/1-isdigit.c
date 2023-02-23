#include "main.h"
#include <ctype.h>

/**
 *_isdigit - check the code
 *@c: this function takes an input
 *description: checks if a character is digit
 *Return: return 1 if c is digit else 0
 */

int _isdigit(int c)
{
if (isdigit(c))
{
return (1);
}
else
{
return (0);
}
}


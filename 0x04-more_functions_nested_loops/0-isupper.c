#include "main.h"
#include <ctype.h>
/**
 * -isupper - check the code.
 * @c: takes an input c
 * description: checks if a character is uppercase
 * Return: Return 1 if char is uppercase else return 0
 */

int _isupper(int c)
{
  if (isupper(c))
    return (1);
  else
    return (0);
}

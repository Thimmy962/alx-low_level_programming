#include "main.h"
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

/**
 *  _atoi - check the description
 *  @s: takes a strong as input
 *  description: converts string digit to int
 *  Return: int
 */

int _atoi(char *s)
{
	unsigned int total = 0, len = strlen(s), i = 0, sign = 0;

	for (; i < len; i++)
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			total = total * 10 + s[i] - '0';
		}
		if (s[i] == '-')
			sign--;
	}
	if (sign != 0)
		return (-total);
	return (total);
}


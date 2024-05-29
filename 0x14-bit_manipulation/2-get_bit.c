#include <stdio.h>
#include "main.h"


/**
 * get_bit - get the bit at a particular position
 * @n: the number to get the bit from
 * @index: the indexd of the bit to get
 * Return: the bit at that index
*/
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	return ((n >> index) & 1);
}

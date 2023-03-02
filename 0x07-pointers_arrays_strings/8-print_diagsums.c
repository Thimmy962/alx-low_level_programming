#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - check description
 * @a: takes in a location 'a'
 * @size: takes in the size of the array of input
 * description: prints the sum of the diagonals of a square
 * return: void
*/


void print_diagsums(int *a, int size)
{
	int j, sumR = 0, sumL = 0;

	for (j = 0; j < size; j++)
	{
		sumL += a[(size * j) + j];
		sumR += a[(size * (j + 1)) - (j + 1)];
	}
	printf("%d, %d\n", sumL, sumR);
}

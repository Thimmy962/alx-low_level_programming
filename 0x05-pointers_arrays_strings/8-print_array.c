#include "main.h"
#include <stdio.h>

/**
 * print_array - check the description
 * @a: takes input a
 * @n: takes another input n
 * description: prints the nth value in the array a
 */

void print_array(int *a, int n)
{
	int i = 0;

	for (; i < n; i++)
		if (i == n - 1)
			printf("%i", a[i]);
		else
			printf("%i, ", a[i]);
	printf("\n");
}


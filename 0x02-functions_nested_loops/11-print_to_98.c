#include "main.h"
#include <stdio.h>

/*
 * print_to_98 - check code
 *
 * @n: takes an inetger as input
 *
 * description: prints from n to 98
 *
 * return: void
 *
 */

void print_to_98(int n)
{
	int b;

	if (n > 98)
		for (count = n; count > 98; --b)
			printf("%d, ", b);
	else
		for (count = n; count < 98; ++b)
			printf("%d, ", b);
	printf("98\n");
}
	


#include <stdio.h>
#include "main.h"
#include <cs50.h>

int main(void)
{
	int n = 45, b = 50;
	printf("n = %i an b = %i\n", n, b);
	swap_int(&n, &b);
	printf("n = %i and b = %i\n", n, b);
	return (0);
}

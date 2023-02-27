#include <stdio.h>
#include "main.h"
#include <cs50.h>

int main(void)
{
	int n = 45;
	printf("n = %i\n", n);
	reset_to_98(&n);
	printf("n = %i\n", n);
	return (0);
}

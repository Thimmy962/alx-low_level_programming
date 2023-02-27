#include <stdio.h>
#include "main.h"
#include <cs50.h>

int main(void)
{
	string b = get_string("x: ");
	// int n = _strlen(b);
	// printf("n = %i\n", n);
	rev_string(b);
	printf("%s\n", b);
	return (0);
}

#include <stdio.h>
#include <cs50.h>
#include "main.h"

int main(void)
{
	string a = get_string("s1: ");
	string b = get_string("s1: ");
	int j = wildcmp(a, b);
	printf("%i\n", j);

	return (0);
}

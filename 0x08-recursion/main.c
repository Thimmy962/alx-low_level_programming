#include <stdio.h>
#include <cs50.h>
#include "main.h"

int main(void)
{
	int n = get_int("What is n? ");
	printf("%d\n",_sqrt_recursion(n));
	return (0);
}

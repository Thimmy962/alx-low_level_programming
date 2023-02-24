#include "main.h"
#include <stdio.h>

/**
 * main - check description
 * descriotion: prints a nice gen tish
 * return: aleays 0
 */

int main(void)
{
	int i = 1;

	for (; i < 101; i++)
	{
		if (i == 100)
		{
			printf("Buzz");
		}
		else
		{
		if ((i % 5) == 0 && (i % 3) == 0)
		{
			printf("FizzBuzz ");
		}
		else if ((i % 5) == 0)
		{
			printf("Buzz ");
		}
		else if ((i % 3) == 0)
		{
			printf("Fizz ");
		}
		else
		{
			printf("%i ", i);
		}
		}
	}
	printf("\n");
	return (0);
}

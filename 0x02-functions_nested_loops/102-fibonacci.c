#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints the first 50 Fibonacci numbers
 *		starting with 1 and 2 folled by a new line
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int j;
	unsigned long a = 0, b = 1, sum;

	for (j = 0; j < 50; ++j)
	{
		sum = a + b;
		printf("%lu", sum);

		a = b;
		b = sum;

		if (j == 49)
			printf("\n");
		else
			printf(", ");
	}

	return (0);
}
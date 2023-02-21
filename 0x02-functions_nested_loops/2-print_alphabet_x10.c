#include <stdio.h>

/*
 * main - check the code.
 *
 * Return: Always 0.
 *
 */

void print_alphabet_x10(void);

int main(void)
{
	print_alphabet_x10();
return (0);
}

void print_alphabet_x10(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			printf("%c", j);
		}
		printf("\n");
	}
}

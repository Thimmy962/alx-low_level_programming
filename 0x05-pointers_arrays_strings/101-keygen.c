#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - program that generates random valid
 * passwords for the program 101-crackme
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a[100], i, b, n;

	b = 0;	

	srand(time(NULL));

	for (i = 0; i < 100; i++)
	{
		a[i] = rand() % 78;
		b += (a[i] + '0');
		putchar(b[i] + '0');
		if ((2772 - b) - '0' < 78)
		{
			n = 2772 - b - '0';
			b += n;
			putchar(n + '0');
			break;
		}
	}

	return (0);
}
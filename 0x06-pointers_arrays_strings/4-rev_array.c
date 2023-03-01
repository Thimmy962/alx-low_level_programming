#include "main.h"
#include <stdio.h>
/**
 * reverse_array - check the description
 * @a: an array of integer
 * @n: the number of elemnet in the array
 * Description: reverse the content of an array
 * Return: Nothing
*/

void reverse_array(int *a, int n)
{
	int tmp[n], i = n-1, b = 0;

	for (; i >= 0; i--)
	{
		tmp[b] = a[i];
		printf("%i\n", tmp[b]);
		b++;
	}
}

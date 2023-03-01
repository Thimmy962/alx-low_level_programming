#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * reverse_array - check the description
 * @a: an array of integer
 * @n: the number of elemnet in the array
 * Description: reverse the content of an array
 * Return: Nothing
*/

void reverse_array(int *a, int n)
{
	int i, j, tmp;

	j = n - 1;

	for (i = 0; i < n / 2; i++)
	{
		tmp = a[i];
		a[i] = a[j];
		a[j--] = tmp;
	}
}


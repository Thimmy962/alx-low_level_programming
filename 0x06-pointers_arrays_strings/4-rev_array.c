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
	int *tmp, i, b = 0;
	tmp = malloc((4 * n) + 1);

	for (i = n - 1; i >= 0; i--)
	{
		tmp[b] = a[i];
		b++;
	}

	/*after the first loop i will now be zero*/
	while(i < n)
	{
		a[i] = tmp[i];
		i++;
	}
	free(tmp);
}

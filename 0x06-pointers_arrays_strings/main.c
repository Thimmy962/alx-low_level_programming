#include "main.h"
#include <stdio.h>

int main(void)
{
	int scores[] = {23, 26, 76, 98, 32};
	reverse_array(scores, 5);
int i = 0;

while (i < 5)
{
	printf("%i\n", scores[i]);
	i++;
}
}

#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	int b = n%10;
	if(b > 5)
	{
		printf("Last digit of %i is %i and is greater then 5\n", n, b);
   }
	else if (n%10 < 6 && n%10 !=0)
	{
		printf("Last digit of %i is %i and is less than 6 and not 0\n", n, b);
	}
	else
	{
		printf("Last digit if %i is %i and is 0\n", n, b);
	}
return (0);
}

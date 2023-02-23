#include "main.h"
#include <stdio.h>

int main(void)
{
	for (int i = 1; i <101; i++)
	{	
		 if((i % 5) == 0 && (i % 3) == 0)
		{
			printf("FizzBuzz ");
		}
		else if((i % 5) == 0)
		{
			printf("Buzz ");
		}
		else if((i % 3) == 0)
		{
			printf("Fizz ");
		}
		else
		{
			printf("%i ", i);
		}
	}
	printf("\n");
}
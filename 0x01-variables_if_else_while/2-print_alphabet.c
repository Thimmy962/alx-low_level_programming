#include <stdio.h>

/*
* return o always
* all work should be in main
* main: prints all the alphabets in lower case
*/

int main(void)
{   int i;
	for(i = 97; i <= 122; i++)
	{
		putchar(i);
	}
	putchar('\n');
    return(0);
}
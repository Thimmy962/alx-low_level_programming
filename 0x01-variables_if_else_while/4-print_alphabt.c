#include <stdio.h>
/*
* return o always
* all work should be in main
*/
int main(void)
{ int i;
	for (i = 97; i <= 122; i++)
	{
		if (i == 101 || i == 112)
		{
			continue;
		}
		putchar(i);
	}
	putchar('\n');
return (0);
}

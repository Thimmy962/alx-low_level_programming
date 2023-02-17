#include <stdio.h>
/*
* return o always
* all work should be in main
*/
int main(void)
{
	for(int i = 97; i <= 122; i++)
	{
		if (i == 101 || i == 112)
		{
			continue;
		}
		putchar(i);
        return (0);
	}
	putchar('\n');
    return (0);
}

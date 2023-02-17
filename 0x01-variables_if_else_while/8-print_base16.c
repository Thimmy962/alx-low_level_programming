#include <stdio.h>

int main(void)
{
	char i, c;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
	}
	for ( c = 'a'; c  <= 'f'; c++)
	{
		putchar(c);
	}
	putchar('\n');
return (0);
}

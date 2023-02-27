#include <stdio.h>
#include "main.h"
#include <cs50.h>
#include <stdlib.h>

int main(void)
{
	char *b = get_string("x: ");
	char c;
	*_strcpy(c, b);
	printf("%s", *c);
	return (0);
}

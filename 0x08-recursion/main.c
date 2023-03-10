#include <stdio.h>
#include <cs50.h>
#include "main.h"

int main(void)
{
	string word = get_string("Word: ");
	printf("%i\n", is_palindrome(word));
}

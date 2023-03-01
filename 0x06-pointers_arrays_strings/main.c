#include "main.h"
#include <stdio.h>
#include <cs50.h>

/**
 * main - check the code for
 *
 * Return: Always 0.
 */
int main(void)
{
    string b = get_string("Sentence: ");
	printf("%s\n", cap_string(b));
}
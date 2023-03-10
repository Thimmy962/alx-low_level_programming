#include "main.h"
#include <string.h>

int checker(char *s, int x, int y);

/**
 * is_palindrome - check if a string is a palindrome
 * @s: takes a string ss as an input
 * Return: int
*/

int is_palindrome(char *s)
{
	int a = strlen(s);

	return (checker(s, 0, a - 1));
}

/**
 * checker - checks if a string is a palindrome
 * @s: takes a string s as input
 * @x: takes an int x as input
 * @y: takes a int y as input
 * Return: ant int
 */

int checker(char *s, int x, int y)
{
	if (y < 0)
		return (1);

	if (s[x] != s[y])
		return (0);

	if (s[x] == s[y])
		checker(s, x + 1, y - 1);
	return (1);
}


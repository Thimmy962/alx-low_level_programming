#include "main.h"

/**
 * _strstr - check the description
 * @a: an input a which is an array 
 * description: prints the players in a chessgame
 * Return: Nothing
*/



void print_chessboard(char (*a)[8])
{
	int i, j;
	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}

#include "main.h"

/**
 * print_chessboard - func that print what the user insert
 *
 * @a: check the func input
 *
 * Return: new line
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
	}
	return ('\n');
}

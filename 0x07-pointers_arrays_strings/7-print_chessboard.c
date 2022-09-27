#include "main.h"
#include <string.h>

/**
 * print_chessboard - prints the chessboard
 * @a: function parameter
 * Return: void
 */

void print_chessboard(char (*a)[8])
{
	int i, num = sizeof(a);
	int j;

	for (i = 0; i < num; i++)
	{
		for (j = 0; j < num; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}

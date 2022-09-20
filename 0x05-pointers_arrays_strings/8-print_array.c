#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of ints
 * @a: func para
 * @n: func para
 *Return: void
 */

void print_array(int *a, int n)
{
	int count;

	if (n <= 0)
	{
		printf("\n");
	}
	else
	{
		for (count = 1; count <= n; count++)
		{
			if (count == n)
			{
				printf("%d\n", a[count - 1]);
			}
			else
			{
				printf("%d, ", a[count - 1]);
			}
		}
	}
}

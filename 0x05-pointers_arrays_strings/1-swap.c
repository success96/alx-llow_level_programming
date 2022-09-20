#include "main.h"

/**
 * swap_int - swaps the values of two integers
 *
 * @a: First function parameter to be swaped
 * @b: Second function parameter to be swapped
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int first = *a;
	int *second = b;

	*a = *second;
	*b = first;
}

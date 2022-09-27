#include "main.h"

/**
 * reverse_array - reverses the content of an array
 * @n: number of array elements
 * @a: para
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int hold, i;

	for (i = n - 1; i >= n / 2; i--)
	{
		hold = a[n - 1 - i];
		a[n - 1 - i] = a[i];
		a[i] = hold;
	}
}

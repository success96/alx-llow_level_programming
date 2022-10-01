#include "function_pointers.h"
/**
 * array_iterator - executes a function on each element of array
 * @array: array
 * @size: size of the array
 * @action: pointer to the function to use
 * Return: nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL || action == NULL)
		return;

	while (size-- > 0)
	{
		action(*array);
		array++;
	}
}

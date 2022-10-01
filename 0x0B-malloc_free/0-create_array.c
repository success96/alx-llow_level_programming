#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars
 * @size: function parameter
 * @c: second function parameter
 * Return: pointer to the array or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *ch = NULL;
	unsigned int i;

	if (size > 0)
	{
		ch = malloc(size);
	}
	if (ch != NULL)
	{
		for (i = 0; i < size; i++)
		{
			ch[i] = c;
		}
	}
	return (ch);

}

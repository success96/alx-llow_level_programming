#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - returns a pointer to a 2 dimensional array of ints
 * @width: width
 * @height: heignt
 * Return: NULL or pointer to 2 dim arr
 */
int **alloc_grid(int width, int height)
{
	int i, j, p, **chr;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	chr = malloc(height * sizeof(*chr));
	if (chr == NULL)
		return (chr);
	for (i = 0; i < height; i++)
	{
		chr[i] = malloc(width * sizeof(int));
		if (chr[i] == NULL)
		{
			for (p = 0; p < i; p++)
				free(chr[p]);
			free(chr);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			chr[i][j] = 0;
	}
	return (chr);
}

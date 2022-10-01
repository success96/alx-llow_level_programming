#include <stdlib.h>

/**
 * free_grid - free 2d arr
 * @grid: func para
 * @height: height
 */

void free_grid(int **grid, int height)
{
	for (height -= 1; height >= 0; height--)
		free(grid[height]);
	free(grid);
}


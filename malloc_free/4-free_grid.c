#include "main.h"
#include <stdio.h>
#include <stdlib.h>
void free_grid(int **grid, int height)
{
    int i;
    grid = malloc(height * sizeof(int));
    for (i = 0; i < height; i++)
    free(grid[i]);
    free(grid);
}

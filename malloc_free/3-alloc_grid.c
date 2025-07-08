#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: pointer to the newly allocated space in memory
 * containing the grid, or NULL if insufficient memory
 */
int **alloc_grid(int width, int height)
{
	int **array;
	int i;
	int j = 0;

	if (width <= 0 || height <= 0)
	return (NULL);

	array = malloc(height * sizeof(int *));
	if (array == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		array[i] = malloc(width * sizeof(int));
		while (j < width)
		{
			j++;
		}
		if (array[i] == NULL)
		return (NULL);
	}
		return (array);
}

#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * array_range - creates an array of integers
 * @min: minimum value
 * @max: maximum value
 *
 * Return: pointer to the newly created array, or NULL if it fails
 */
int *array_range(int min, int max)
{
int *arr;
int i;
if (min > max)
return (NULL);

arr = malloc((max - min + 1) * sizeof(int));
if (arr == NULL)
return (NULL);
for (i = 0; i < (max - min + 1); i++)
{
arr[i] = min + i;
}
return (arr);
}

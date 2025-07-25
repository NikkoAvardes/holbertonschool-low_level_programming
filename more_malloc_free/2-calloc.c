#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 *  _calloc - allocates memory for an array, using malloc
 * @nmemb: number of elements in the array
 * @size: size of each element in the array
 *
 * Return: pointer to the allocated memory, or NULL if it fails
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
void *arr;
unsigned int i;

if (nmemb == 0 || size == 0)
return (NULL);

arr = malloc(nmemb * size);
if (arr == NULL)
return (NULL);

for (i = 0; i < nmemb * size; i++)
((char *)arr)[i] = 0;


return (arr);
}

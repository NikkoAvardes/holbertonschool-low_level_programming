#include "function_pointers.h"
#include <stdlib.h>
/**
 * array_iterator - executes a function given as a parameter
 * on each element of an array
 * @array: the array to iterate over
 * @size: the size of the array
 * @action: pointer to the function to be executed
 *
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (array == NULL || action == NULL)
	{
		return;
	}
	while (i < size)
	{
		action(array[i]);
		i++;
	}
}

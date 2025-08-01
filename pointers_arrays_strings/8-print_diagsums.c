#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - Prints the sums of the two diagonals of a square matrix.
 * @a: Pointer to the first element of the matrix.
 * @size: Size of the matrix (number of rows/columns).
 *
 * This function calculates and prints the sums of the primary and secondary
 * diagonals of a square matrix represented in a 1D array format.
 */
void print_diagsums(int *a, int size)
{
	int i;
	int sum1 = 0;
	int sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += *(a + i * size + i);
		sum2 += *(a + i * size + (size - 1 - i));
	}

	printf("%d, %d\n", sum1, sum2);
}

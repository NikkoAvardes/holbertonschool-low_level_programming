#include "main.h"
#include <stdio.h>
/**
 * reverse_array - reverses the content of an array of integers
 * @a: array of integers
 * @n: number of elements in the array
 *
 * Return: nothing.
 */
void reverse_array(int *a, int n)
{
int start = 0;
int end = n - 1;
int tmp;
while (start < end)
{
tmp = a[start];
a[start] = a[end];
a[end] = tmp;
start++;
end--;
}
}

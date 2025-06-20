#include "main.h"
#include <stdio.h>
/**
 * _abs - Computes the absolute value of an integer
 * @n: The integer to evaluate
 *
 * Return: The absolute value of n
 */
int _abs(int n)
{
if (n >= 0)
{
return (n);
}
else if (n <= 0)
{
return (-n);
}
else
{
return (0);
}
}

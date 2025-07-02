#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the number to find the square root of
 *
 * Return: the natural square root of n
 */
int _sqrt_recursion(int n)
{
return (helper(n, 1));
}
/**
 * helper - a helper function to find the square root recursively
 * @n: the number to find the square root of
 * @x: the current guess for the square root
 *
 * Return: the natural square root of n
 */
int helper(int n, int x)
{
if (x * x == n)
{
return (x);
}
else if (x * x > n)
{
return (-1);
}
else
{
return (helper(n, x + 1));
}
}

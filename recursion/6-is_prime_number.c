#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * is_prime_number - checks if a number is prime
 * @n: the number to check
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int is_prime_number(int n)
{
return (helper(n, 2));
}
/**
 * helper - a helper function to check if a number is prime
 * @n: the number to check
 * @i: the current divisor
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int helper(int n, int i)
{
if (n <= 1)
{
return (0);
}
while (i * i <= n)
{
if (n % i == 0)
{
return (0);
}
i++;
}
return (1);
}

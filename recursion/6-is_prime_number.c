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
if (n <= 1)
{
return (0);
}
return (is_prime_recu(n, 2));
}
/**
 * is_prime_recu - a is_prime_recu function to check if a number is prime
 * @n: the number to check
 * @x: the current divisor to check
 * Return: 1 if n is prime, 0 otherwise
 */
int is_prime_recu(int n, int x)
{
if (x * x > n)
{
return (1);
}
else if (n % x == 0)
{
return (0);
}
else
{
return (is_prime_recu(n, x + 1));
}

}

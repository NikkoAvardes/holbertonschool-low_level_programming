#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_last_digit - Computes the last digit of a number
 * @n: The integer to evaluate
 *
 * Return: The last digit of the number
 */
int print_last_digit(int n)
{
int last_digit = _abs(n % 10);
return (last_digit);
}

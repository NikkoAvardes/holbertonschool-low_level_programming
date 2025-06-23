#include <stdio.h>
#include "main.h"
/**
 * main - prints the numbers from 1 to 100, but for multiples of three
 * prints "Fizz" instead of the number and for the multiples of five
 * prints "Buzz". For numbers which are multiples of both three and five,
 * prints "FizzBuzz".
 *
 * Return: Always 0.
 */
int main(void)
{
int n;
for (n = 1; n <= 100; n++)
{
if (n % 3 == 0 && n % 5 == 0)
{
printf("FizzBuzz ");
}
else if (n % 3 == 0)
{
printf("Fizz ");
}
else if (n % 5 == 0)
{
printf("Buzz ");
}
else
{
printf("%d ", n);
}

if (n < 100)
printf(" ");
}

printf("\n");
return (0);
}

#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;
int last_digit = n % 10;
srand(time(0));
n = rand() - RAND_MAX / 2;
printf("Last digit of %d", n);
if (last_digit > 5)
{
printf("and is greater than 5");
}
else if (last_digit == 0)
{
printf("and is 0");
}
if (last_digit < 6)
{
printf("and is less than 6 and not 0");
}
return (0);
}

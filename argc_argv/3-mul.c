#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies two numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
int mul = 1;
if (argc < 3)
{
printf("Error\n");
return (1);
}
else if (argc > 2)
{
argc--;
argv++;
while (argc != 0)
{
mul *= atoi(*argv++);
argc--;
}
printf("%d\n", mul);
}
return (0);
}

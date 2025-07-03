#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the number of arguments passed to the program
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
(void)argv;
argc--;
printf("%d\n", argc);
return (0);
}

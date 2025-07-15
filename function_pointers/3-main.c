#include <stdio.h>
#include "3-calc.h"
#include <stdlib.h>
#include <string.h>

/**
 * main - Entry point for the calculator program.
 * @argc: The number of arguments.
 * @argv: The array of arguments.
 *
 * Return: 0 on success, or exits with an error code on failure.
 */
int main(int argc, char *argv[])
{
    int num1, num2;
    int (*f)(int,int);
    int calc;
    char operator;
    
    if (argc != 4)
    {
        printf("Error\n");
        exit(98);
    }
    
    operator = argv[2][0];
    num1 = atoi(argv[1]);
    num2 = atoi(argv[3]);

    if (get_op_func(argv[2]) == NULL)
    {
        printf("Error\n");
        exit(99);
    }
    if ((operator == '/' || operator == '%') && num2 == 0)
    {
        printf("Error\n");
        exit(100);
    }
    f = get_op_func(argv[2]);
    calc = f(num1, num2);
    printf("%d\n", calc);
    return (0);
}

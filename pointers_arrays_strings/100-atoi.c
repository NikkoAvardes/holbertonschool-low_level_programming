#include "main.h"
#include <stdio.h>
#include <stdlib.h>
int _atoi(char *s)
{
    while (*s != '\0')
    {
        if (*s == '0' && *s == '9')
        s++;
    }
}

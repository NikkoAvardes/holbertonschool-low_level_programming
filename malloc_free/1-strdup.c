#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char *_strdup(char *str)
{
    int length = strlen(str);
    char *cpy;
    int i;
    if (str == NULL)
    return (NULL);
    cpy = malloc(sizeof(char) * (length + 1));
    if (cpy == NULL)
    return (NULL);
    for (i = 0; i < length; i++)
    cpy[i] = str[i];
    return (cpy);
}

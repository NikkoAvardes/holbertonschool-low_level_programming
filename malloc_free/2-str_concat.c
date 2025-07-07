#include "main.h"
#include <stdio.h>
#include <stdlib.h>
char *str_concat(char *s1, char *s2)
{
    char *ptr;
    int i = 0;
    int j = 0;
    int len1 = 0;
    int len2 = 0;
    if (s1 == NULL)
        s1 = "";
    if (s2 == NULL)
        s2 = "";
    while (s1[i] != '\0')
    {
        i++;
        len1 = i;
    }
    while (s2[j] != '\0')
    {
        j++;
        len2 = j;
    }
    ptr = malloc(sizeof(char) * (len1 + len2 + 1));
    if (ptr == NULL)
        return (NULL);
    for (i = 0; i < len1; i++)
        ptr[i] = s1[i];
    for (j = 0; j < len2; j++)
        ptr[len1 + j] = s2[j];
        ptr[len1 + len2] = '\0';
        return (ptr);
}

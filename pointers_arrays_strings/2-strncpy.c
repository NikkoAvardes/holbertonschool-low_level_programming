#include "main.h"
#include <stdio.h>
char *_strncpy(char *dest, char *src, int n)
{
    int i = 0;
    int j = 0;
    while (i < n && src[i] != '\0')
    {
        dest[j] = src[i];
        i++;
        j++;
    }
    if (i < n)
    dest[j] = '\0';
    return (dest);
}

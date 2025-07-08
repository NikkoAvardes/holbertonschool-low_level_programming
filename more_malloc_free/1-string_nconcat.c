#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * string_nconcat - concatenates two strings up to n bytes of the second string
 * @s1: first string
 * @s2: second string
 * @n: number of bytes from s2 to concatenate
 *
 * Return: pointer to the newly allocated space in memory containing the
 * concatenated string, or NULL if insufficient memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *ptr;
unsigned int i;
unsigned int j;
unsigned int len1 = 0;
unsigned int len2 = 0;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

while (s1[len1] != '\0')
len1++;

while (s2[len2] != '\0')
len2++;

if (n >= len2)
{
	ptr = malloc(sizeof(char) * (len1 + len2 + 1));
}
else
{
	ptr = malloc(sizeof(char) * (len1 + n + 1));
	len2 = n;
}
	if (ptr == NULL)
	return (NULL);
for (i = 0; i < len1; i++)
ptr[i] = s1[i];

for (j = 0; j < len2; j++)
{
ptr[len1 + j] = s2[j];
}
ptr[len1 + len2] = '\0';
return (ptr);
}

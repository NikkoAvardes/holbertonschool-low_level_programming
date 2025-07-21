#include "main.h"
#include <limits.h>
/**
 * _atoi - Converts a string to an integer.
 * @s: The string to convert.
 *
 * Return: The converted integer, or 0 if no digits are found.
 */
int _atoi(char *s)
{
int i = 0;
int sign = 1;
int result = 0;
int found_digit = 0;

while (s[i])
{
if (s[i] == '-')
sign *= -1;
else if (s[i] >= '0' && s[i] <= '9')
{
found_digit = 1;
break;
}
else if (found_digit)
break;
i++;
}

if (!found_digit)
return (0);

while (s[i] >= '0' && s[i] <= '9')
{
found_digit = s[i] - '0';

if (sign == 1)
{
if (result > (INT_MAX - found_digit) / 10)
return (INT_MAX);
}
else
{
if (result > (-(INT_MIN + found_digit)) / 10)
return (INT_MIN);
}

result = result * 10 + found_digit;
i++;
}

return (result * sign);
}

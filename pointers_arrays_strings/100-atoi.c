#include "main.h"
#include <limits.h>
/**
 * _atoi - Convert a string to an integer.
 * @s: The string to convert.
 *
 * Return: The converted integer, or INT_MAX/INT_MIN on overflow.
 */
int _atoi(char *s)
{
	int i = 0, sign = 1, found_digit = 0;
	double result = 0;

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
		{
			break;
		}
		i++;
	}
	if (!found_digit)
		return (0);
	while (s[i] >= '0' && s[i] <= '9')
	{
		found_digit = s[i] - '0';
		if (sign == 1)
		{
			if (result > INT_MAX / 10 || (result == INT_MAX / 10 &&
				(s[i] - '0') > INT_MAX % 10))
			return (INT_MAX);
		}
		else
		{
			if (result > (INT_MAX / 10) || (result == INT_MAX / 10 &&
				(s[i] - '0') > -(INT_MIN % 10)))
			return (INT_MIN);
		}
			result = result * 10 + found_digit;
			i++;
	}
	return (result * sign);
}

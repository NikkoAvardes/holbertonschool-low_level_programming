#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * print_strings - Prints strings followed by a separator.
 * @separator: The string to be printed between the strings.
 * @n: The number of strings passed to the function.
 *
 * Return: Nothing.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;

	unsigned int i;
	char *args;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		args = va_arg(ap, char*);

		if (args == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", args);
		}

		if (separator != NULL && i != n - 1)
		{
			printf("%s", separator);
		}
	}


	va_end(ap);
	printf("\n");
}

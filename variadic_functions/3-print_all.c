#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
/**
 * print_all - Prints anything based on the format specifier.
 * @format: A string containing the format specifiers.
 */
void print_all(const char * const format, ...)
{	va_list args;
	int i = 0, ap;
	double f;
	char *s, *separator = "";

	va_start(args, format);
	while (format[i] != '\0')
	{
	switch (format[i])
		{
		case 'c':
			printf("%s", separator);
			ap = va_arg(args, int);
			printf("%c", ap);
			separator = ", ";
			break;
		case 'i':
			printf("%s", separator);
			ap = va_arg(args, int);
			printf("%i", ap);
			separator = ", ";
			break;
		case 'f':
			printf("%s", separator);
			f = va_arg(args, double);
			printf("%f", f);
			separator = ", ";
			break;
		case 's':
			printf("%s", separator);
			s = va_arg(args, char *);
			if (s == NULL)
				s = "(nil)";
			printf("%s", s);
			separator = ", ";
			break;
		}
		i++;
	}
	va_end(args);
	printf("\n");
}

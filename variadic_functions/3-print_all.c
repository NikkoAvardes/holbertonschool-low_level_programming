#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
/**
* print_all - Prints anything based on the format specifier.
 * @format: A string containing the format specifiers.
 *
 * Return: Nothing.
 */
void print_all(const char * const format, ...)
{
	va_list args;

	int i = 0;
	int ap;
	double f;
	char *s;

	va_start(args, format);
	while (format[i] != '\0')
	{
	switch (format[i])
	{
	case 'c':

		ap = va_arg(args, int);
		printf("%c, ", ap);
		break;
	case 'i':
		ap = va_arg(args, int);
		printf("%i, ", ap);
		break;
	case 'f':
		f = va_arg(args, double);
		printf("%f, ", f);
		break;
	case 's':
		if (s == NULL)
		{
			printf("(nil)");
		}
		s = va_arg(args, char *);
		printf("%s\n", s);
		break;
	}
		i++;
	}
	va_end(args);
}

#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
/**
 * print_all - Prints anything based on the format specifiers.
 * @format: A string containing the format specifiers.
 *
 * Return: Nothing.
 */
void print_all(const char * const format, ...)
{
	va_list args;

	int i = 0;
	char c;
	int val;
	float f;
	char *str;

	va_start(args, format);

	while (format[i] != '\0')
	{
			if (format[i] == 'c')
		{
				c = va_arg(args, int);
				printf("%c, ", c);
		}
			else if (format[i] == 'i')
		{
				val = va_arg(args, int);
				printf("%d, ", val);
		}
			else if (format[i] == 'f')
		{
				f = va_arg(args, double);
				printf("%f, ", f);
		}
			else if (format[i] == 's')
		{
			str = va_arg(args, char*);
			if (str == NULL)
				printf("(nil)");
			else
				printf("%s", str);
		}
		i++;
	}

	va_end(args);
	printf("\n");
}

#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>

/**
 * print_all - print the elements
 * @format: the formet
 * Return: void
 */

void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0;
	char *s = "", *st;

	va_start(args, format);

	for (i = 0; format[i]; i++)
	{
		switch (format[i])
		{
			case 'c':
				printf("%s%c", s, va_arg(args, int));
				break;
			case 'i':
				printf("%s%d", s, va_arg(args, int));
				break;
			case 'f':
				printf("%s%f", s, va_arg(args, double));
				break;
			case 's':
				st = va_arg(args, char *);

				if (!st)
					st = "(nil)";
				printf("%s%s", s, st);
				break;
			default:
			continue;
		}
		s = ", ";
	}
	printf("\n");
	va_end(args);
}

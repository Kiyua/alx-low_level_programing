#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <string.h>

/**
 * print_all - func
 * @format: char
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i, comma, len;

	len = strlen(format);
	va_start(args, format);
	i = 0;
	comma = 0;
	while (i < len)
	{
		switch (format[i])
		{
			case 'c':
			{
				char c = va_arg(args, int);

				printf("%c", c);
				comma = 1;
				break;
			}
			case 'i':
			{
				printf("%d", va_arg(args, int));
				comma = 1;
				break;
			}
			case 'f':
			{
				printf("%f", va_arg(args, double));
				comma = 1;
				break;
			}
			case 's':
			{
				printf("%s", va_arg(args, char *));
				comma = 1;
				break;
			}
			default:
			{
				comma = 0;
			}
		}
		i++;
		if (i < len && comma)
			printf(", ");
	}
	printf("\n");
	va_end(args);
}

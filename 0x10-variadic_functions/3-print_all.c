#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <string.h>

/**
 * print_str - func
 * @str: char
 */
void print_str(char *str)
{
	if (str == NULL)
		str = "(nil)";

	printf("%s", str);
}

/**
 * print_all - func
 * @format: char
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i, len;
	char c, f;

	i = 0;
	len = strlen(format);
	va_start(args, format);

	while (i < len)
	{
		f = format[i];
		switch (f)
		{
			case 'c':
			{
				c = va_arg(args, int);
				printf("%c", c);
				break;
			}
			case 'i':
				printf("%d", va_arg(args, int));
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				break;
			case 's':
				print_str(va_arg(args, char *));
				break;
		}
		i++;
		if (i < len && (f != 'c' || f != 'i' || f != 'f' || f != 's'))
			printf(", ");
	}
	printf("\n");
	va_end(args);
}

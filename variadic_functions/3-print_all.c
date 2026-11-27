#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: list of types of arguments
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0;
	char *str;
	char *separator = "";
	char c;
	int num;
	double f;

	va_start(args, format);

	while (format != NULL && format[i] != '\0')
	{
		switch (format[i])
		{
		case 'c':
			c = va_arg(args, int);
			printf("%s%c", separator, c);
			break;
		case 'i':
			num = va_arg(args, int);
			printf("%s%d", separator, num);
			break;
		case 'f':
			f = va_arg(args, double);
			printf("%s%f", separator, f);
			break;
		case 's':
			str = va_arg(args, char *);
			if (str == NULL)
				str = "(nil)";
			printf("%s%s", separator, str);
			break;
		default:
			i++;
			continue;
		}
		separator = ", ";
		i++;
	}

	va_end(args);
	printf("\n");
}

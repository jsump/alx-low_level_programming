#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 * c: char
 * i: integer
 * f: float
 * s: char * (if the string is NULL, print (nil) instead,
 * any other char should be ignored
 * not allowed to use for, goto, ternary operator, else, do ... while
 * You can use a maximum of 2 while loops 2 if
 * You can declare a maximum of 9 variables
 * You are allowed to use printf
 * Print a new line at the end of your function
 */
void print_all(const char * const format, ...)
{
	int k = 0;
	char *string;
	char *sep = "";

	va_list list;

	va_start(list, format);

	if (format)
	{
		while (format[k])
		{
			switch (format[k])
			{
				case 'c':
					printf("%s%c", sep, va_arg(list, int));
					break;
				case 'i':
					printf("%s%d", sep, va_arg(list, int));
					break;
				case 'f':
					printf("%s%f", sep, va_arg(list, double));
					break;
				case 's':
					string = va_arg(list, char *);
					if (!string)
						string = "(nil)";
					printf("%s%s", sep, string);
					break;
				default:
					k++;
					continue;
			}
			sep = ", ";
			k++;
		}
	}
	printf("\n");
	va_end(list);
}

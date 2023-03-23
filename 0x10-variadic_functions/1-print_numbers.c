#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - prints numbers, followed by a new line
 * @separator: the string to be printed between numbers
 * @n: the number of integers passed to the function
 * If separator is NULL, don’t print it
 * Print a new line at the end of your function
 * Return: 0
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numbers;
	unsigned int list;

	va_start(numbers, n);

	for (list = 0; list < n; list++)
	{
		printf("%d", va_arg(numbers, int));
		if (list != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(numbers);
}

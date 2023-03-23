#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - function that returns the sum of all its parameters.
 * @n: numner of paramers passing to the function
 * If n == 0, return 0
 * Return: 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int k, sum = 0;

	va_start(ap, n);

	for (k = 0; k < n; k++)
		sum += va_arg(ap, int);

	va_end(ap);
	return (sum);
}

#include "main.h"
/**
 * swap_int - swaps the value of two integers
 * @a: int to be swapped
 * @b: integer to be swapped
 */

void swap_int(int *a, int *b)
{
	int a;
	int b;

	printf("a=%d, b=%d\n", a, b);
	swap_int(&a, &b);
	printf("a=%d, b=%d\n", a, b);
}

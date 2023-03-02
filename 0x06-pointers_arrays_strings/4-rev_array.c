#include "main.h"
/**
 * reverse_array - reverses the content of an array of integers
 * @a: name of array of intergers
 * @n: number of intergers(elements) in the array
 * Return: 0
 */
void reverse_array(int *a, int n)
{
	int m;
	int g;

	for (m = 0; m < n--; m++)
	{
		g = a[m];
		a[m] = a[n];
		a[n] = g;
	}
}

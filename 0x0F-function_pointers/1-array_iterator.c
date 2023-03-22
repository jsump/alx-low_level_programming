#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - function that executes a function given as a parameter,
 * on each element of an array.
 * @size: size of the array
 * @action: pointer to the function you need to use
 * @array: array
 * Return: 0
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int k;

	if (array == NULL || action == NULL)
		return;

	for (k = 0; k < size; k++)
	{
		action(array[k]);
	}
}

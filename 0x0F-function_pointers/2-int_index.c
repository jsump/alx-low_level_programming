#include "function_pointers.h"
/**
 * int_index - function that searches for an integer,
 * returns the index of the first element,
 * for which the cmp function does not return 0
 * @size: the number of elements in the array
 * @cmp: pointer to the function to be used to compare values
 * If no element matches, return -1
 * If size <= 0, return -1
 * @array: array
 * Return: 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int k;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (k = 0; k < size; k++)
	{
		if (cmp(array[k]))
			return (k);
	}
	return (-1);
}

#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - allocates memory using malloc
 * if malloc fails, function should cause normal process termination,
 * with a status value of 98
 * @b: number of bytes to be allocated
 * Return: a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);

	if (p == NULL)
		exit(98);
	return (p);
}

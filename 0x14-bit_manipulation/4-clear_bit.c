#include "main.h"
/**
 * clear_bit - sets the value of bit to 0 at given index
 * @index: index starting from 0 of bit you want to set
 * @n: input value
 * Return: 1 if it worked, -1 if error occured
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int position = ~(1UL << index);
	*n &= position;

	return (1);

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
}

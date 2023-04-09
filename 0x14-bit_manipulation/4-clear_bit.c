#include "main.h"
/**
 * clear_bit - sets the value of a given bit to zero(0)
 * @index: index starting from 0 of the bit to be set
 * @n: input
 * Return: 1 if successful, 0 unsuccessful
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

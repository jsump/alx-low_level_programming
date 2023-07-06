#include "main.h"
/**
 * set_bit - sets value of bit to 1 at given index
 * @index: index starting from 0 of the bit you want to set
 * @n: input
 * Return: 1 if worked, -1 if error occured
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int position = 1 << index;
	*n |= position;

	return (1);

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
}

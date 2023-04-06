#include "main.h"
/**
 * get_bit - returns the value of a bit at a given index
 * @index: index starting from 0 of the bit that's needed
 * @n: input
 * Return: value of bit at index or -1 if unsuccessful
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int position_of_bit = (n >> index) & 1;

	return (position_of_bit);

	if (index >= size(unsigned long int) * 8)
	{
		return (-1);
	}
}

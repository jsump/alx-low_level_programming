#include "main.h"
/**
 * flip_bits - returns the nu,ber of bits needed to flip,
 *  to get from one number to another
 *  @n: input
 *  @m: number of bits to be flipped
 *  Return: number of bits needed to be flipped
 *  not allowed to use % or / operators
 */
unsigned int flip_bits(unsigned long int n, unsinged long int m)
{
	unsigned int counter = 0;

	while (n != 0 || m != 0)
	{
		if ((n & 1) != (m & 1))
		{
			counter++;
		}
		n >>= 1;
		m >>= 1;
	}
	return (counter);
}

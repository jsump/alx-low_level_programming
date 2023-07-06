#include "main.h"
/**
 * flip_bits - returns # of bits needed to flip from one # to another
 * @n: first number
 * @m: second number
 * not allowed to use % or /
 * REturn: number of bits to be flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
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

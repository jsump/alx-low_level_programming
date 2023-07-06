#include "main.h"
/**
 * get-bit - returns value of bit at given index
 * @index: index starting from 0 to get bit you want
 * Return: value of bit at index @index or -1 if an erroe occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int position_of_bit = (n >> index) & 1;

	if (iindex >= sizeof(n) * 8)
	{
		return (-1);
	}
	return (position_of_bit);
}

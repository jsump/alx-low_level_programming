#include "main.h"
/**
 * get_endianness(void) - checks the endianness
 * Return: 0 if bif endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int k = 1;

	return (((char *)&k)[0] ? 1 : 0);
}

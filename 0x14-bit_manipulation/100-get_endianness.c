#include "main.h"
/**
 * get_endianness - checks the endianness
 * Return: 0 if big endian, 1 if lisstle endian
 */
int get_endianness(void)
{
	unsigned int k = 1;
	return ((char *)&k)[0] ? 1 : 0;
}

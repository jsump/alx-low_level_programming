#include "main.h"
/**
 * _pow_recursion - funtion that returns the value of x raised to power of y
 * @x: base number
 * @y: power factor
 * If y is lower than 0, the function should return -1
 * Return: x power y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}

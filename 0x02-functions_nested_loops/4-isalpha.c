#include "main.h"
/**
 * _isalpha - checks for alphabetic character
 * @c: the character tobe checked
 * Return: 1 if c is a letter, lowercase or uppercase, else 0
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c >= 'z') || (c >= 'A' && c <= 'Z'));
}

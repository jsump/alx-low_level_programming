#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - function that prints a name
 * @name: string ot be added
 * @f: pointer to the funvtion
 * Return: 0
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}

#include "lists.h"
#include <stdio.h>
/**
 * print_list -  prints all the elements of a list_t list
 * Return: the number of nodes
 * @h: pointer to the list to print
 * Format: see example
 * If str is NULL, print [0] (nil)
 * You are allowed to use printf
 */
size_t print_list(const list_t *h)
{
	size_t s = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		s++;
	}
	return (s);
}

#include "lists.h"
#include <stdio.h>
/**
 * print_listint - prints all the elements of a listint_t list
 * @h: pointer to the listint_t list
 * Return: number of nodes
 * Allowed to use printf
 */
size_t print_listint(const listint_t *h)
{
	size_t j = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %j\n", h->len, h->str);
		h = h->next;
		j++;
	}
	return (s);
}

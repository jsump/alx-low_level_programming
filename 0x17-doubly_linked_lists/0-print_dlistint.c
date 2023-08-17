#include "lists.h"
/**
 * print_dlistint - prints all elements of a list
 * @h: pointer to header object
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *curr = h;
	size_t count = 0;

	while (current != NULL)
	{
		printf("%d\n", curr->n);
		curr = curr->next;
		count++;
	}
	return (count);

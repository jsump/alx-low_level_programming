#include "lists.h"
/**
 * dlistint_len - return number of elements in a linked dlistint_t list
 * @h: pointer to header object
 * Return: number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *curr = h;
	size_t count = 0;

	while (curr != NULL)
	{
		count++;
		curr = curr->next;
	}
	return (count);
}

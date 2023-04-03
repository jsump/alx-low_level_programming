#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node of a list
 * @head: pointer
 * index is the index of the node, starting at 0
 * if the node does not exist,
 * @index: index of the node
 * Return: NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int j = 0;
	listint_t *temporarynode = head;

	while (temporarynode && j < index)
	{
		temporarynode = temporarynode->next;
		j++;
	}
	return (temporarynode ? temporarynode : NULL);
}

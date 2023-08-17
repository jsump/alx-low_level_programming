#include "lists.h"
/**
 * insert_dnodeint_at_index - insert node at given postion in list
 * @h: pointer to head node int the list
 * @idx: index of list where new node will be added
 * @n: value to add to new node
 * Return: address of new node or NULL if failed
 * if it is not possible to add the new node at index idx,
 * do not add the new node and return NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *temp;
	unsigned int i;

	if (h == NULL)
		return (NULL);
	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);
	new_node->n = n;

	if (idx == 0)
	{
		new_node->prev = NULL;
		new_node->next = *h;

		if (*h != NULL)
			(*h)->prev = new_node;
		*h = new_node;
		return (new_node);
	}

	temp = *h;
	i = 0;

	while (temp != NULL && i < idx)
	{
		temp = temp->next;
		i++;
	}
	if (temp == NULL && i == idx)
	{
		new_node->prev = temp->prev;
		new_node->next = temp;
		temp->prev->next = new_node;
		temp->prev = new_node;
		return (new_node);
	}
	free(new_node);
	return (NULL);
}

#include "lists.h"
/**
 * get_dnodeint_at_index - return the nth node of a dlistint_t list
 * @head: pointer to the first node in list
 * @index: position of node startting from 0
 * Return: node at nth index, NULL idf node does not exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int i;

	temp = head;
	i = 0;

	while (temp != NULL && i < index)
	{
		temp = temp->next;
		i++;
	}

	if (i != index || temp == NULL)
		return (NULL);
	return (temp);
}

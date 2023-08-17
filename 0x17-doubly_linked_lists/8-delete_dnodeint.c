#include "lists.h"
/**
 * delete_dnodeint_at_index - delete node at given index in list
 * @head: pointer to head node
 * @index: index of node to be deleted in list, starts from 0
 * Return: 1 if success, -1 if failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp, *prev;
	unsigned int i;

	if (*head == NULL)
		return (-1);
	temp = *head;
	prev = NULL;

	for (i = 0; temp != NULL && i < index; i++)
	{
		prev = temp;
		temp = temp->next;
	}

	if (temp == NULL)
		return (-1);

	if (prev == NULL)
		*head = temp->next;
	else
		prev->next = temp->next;

	if (temp->next != NULL)
		temp->next->prev = prev;

	free(temp);
	return (1);
}

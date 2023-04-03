#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at index of a list
 * @head: double pointer
 * @index: index of the node to be deleted
 * index starts at 0
 * Return: 1 if succeded, -1 if failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temporarynode = *head;
	listint_t *actualnode = NULL;
	unsigned int k = 0;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(temporarynode);
		return (1);
	}
	while (k < index - 1)
	{
		if (!temporarynode || !(temporarynode->next))
			return (-1);
		temporarynode = temporarynode->next;
		k++;
	}
	actualnode = temporarynode->next;
	temporarynode->next = actualnode->next;
	free(actualnode);
	return (1);
}

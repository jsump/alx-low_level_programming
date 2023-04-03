#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @idx: index of list where new node should be added
 * index starts at 0
 * @head: double pointer
 * @n: data in new node
 * Return: address of new node or NULL if failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int j;
	listint_t *newnode;
	listint_t *temporarynode = *head;

	newnode = malloc(sizeof(listint_t));
	if (!newnode || !head)
		return (NULL);
	newnode->n = n;
	newnode->next = NULL;

	if (idx == 0)
	{
		newnode->next = *head;
		*head = newnode;
		return (newnode);
	}
	for (j = 0; temporarynode && j < idx; j++)
	{
		if (j == idx - 1)
		{
			newnode->next = temporarynode->next;
			temporarynode->next = newnode;
			return (newnode);
		}
		else
			temporarynode = temporarynode->next;
	}
	return (NULL);
}

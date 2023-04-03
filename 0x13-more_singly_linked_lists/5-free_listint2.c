#include "lists.h"
/**
 * free_listint2 - frees a listint_t list, setting head to NULL
 * @head: double pointer
 */
void free_listint2(listint_t **head)
{
	listint_t *temporarynode;

	if (head == NULL)
		return;

	while (*head)
	{
		temporarynode = (*head)->next;
		free(*head);
		*head = temporarynode;
	}
	*head = NULL;
}

#include "lists.h"
/**
 * free_dlistint - frees a dlistint_t list
 * @head: pointer to first node in list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *curr;

	while (head != NULL)
	{
		curr = head;
		head = head->next;
		free(curr);
	}
}

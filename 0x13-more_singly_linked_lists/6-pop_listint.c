#include "lists.h"
/**
 * pop_listint - deletes head node of a list
 * @head: double pointer
 * Return: head node's data (n), or 0 is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temporarynode;
	int number;

	if (!head || !*head)
		return (0);

	number = (*head)->n;
	temporarynode = (*head)->next;
	free(*head);
	*head = temporarynode;
	return (number);
}

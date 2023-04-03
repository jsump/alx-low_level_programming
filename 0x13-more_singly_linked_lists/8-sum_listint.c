#include "lists.h"
/**
 * sum_listint - returns sum of all the data (n)
 * @head: pointer
 * Return: sum of all the data
 */
int sum_listint(listint_t *head)
{
	int sumn = 0;
	listint_t *temporarynode = head;

	while (temporarynode)
	{
		sumn += temporarynode->n;
		temporarynode = temporarynode->next;
	}
	return (sumn);
}

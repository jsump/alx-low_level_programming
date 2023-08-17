#include "lists.h"
/**
 * sum_dlistint - return sum of all the data (n) of a dlistint_t list
 * @head: pointer to first node of list
 * Return: sum of all data or 0 if list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp;
	int sum = 0;

	temp = head;

	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}

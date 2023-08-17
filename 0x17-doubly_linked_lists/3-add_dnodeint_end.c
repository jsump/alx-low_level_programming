#include "lists.h"
/**
 * add_dnodeint_end - add a new node at the end of dlistint_t list
 * @head: pointer to headnode in list
 * @n: value added to new node in list
 * Return: address of new element or NULL if failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *curr;

	if (head == NULL)
		return (NULL);

	curr = *head;

	while (curr != NULL && curr->next != NULL)
		curr = curr->next;

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->prev = curr;
	new_node->next =  NULL;

	if (curr != NULL)
		curr->next = new_node;
	else
		*head = new_node;
	return (new_node);
}

#include "lists.h"
/**
 * add_nodeint - adds anew node at the beginning of a listint_t list
 * @head: double pointer ot listint_t
 * @n: data to be inserted in new node
 * Return: address of the new element, or NULL if failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));

	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}

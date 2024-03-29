#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
 * add_node - adds a new node at the beginning of a list_t list
 * Return: the address of the new element, or NULL if it failed
 * @str: to be duplicated
 * @head: double pointer to list
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int len = 0;

	while (str[len])
		len++;
	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);
	new->str = strdup(str);
	new->len = len;
	new->next = (*head);
	(*head) = new;

	return (*head);
}

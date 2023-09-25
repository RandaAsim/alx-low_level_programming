#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a linked list
 * @head: double pointer to the list_t list
 * @str: string to put in the new node
 * Return: address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *e;
	list_t *temp = *head;
	unsigned int len = 0;

	while (str[len])
		len++;

	e = malloc(sizeof(list_t));
	if (!e)
		return (NULL);

	e->str = strdup(str);
	e->len = len;
	e->n = NULL;

	if (*head == NULL)
	{
		*head = e;
		return (e);
	}

	while (temp->n)
		temp = temp->n;

	temp->n = e;

	return (e);
}

#include "lists.h"
/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: list_t list
 * @str: strings
 * Return: address to the new element
 */

list_t *add_node_end(list_t **head, const char *str)
{
	char *duplicate;
	int length;
	list_t *new, *prev;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	duplicate = strdup(str);
	if (str == NULL)
	{
		free(new);
		return (NULL);
	}

	for (length = 0; str[length];)
		length++;
	new->str = duplicate;
	new->len = length;
	new->next = NULL;

	if (*head == NULL)
		*head = new;
	else
	{
		prev = *head;
		while (prev->next != NULL)
			prev = prev->next;
		prev->next = new;
	}
	return (*head);
}

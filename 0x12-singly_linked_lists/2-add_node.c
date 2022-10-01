#include "lists.h"
/**
 * add_node - adds a new node at the beginnig of a list
 * @head: num
 * @str: string
 * Return: address of the new element, or NULL if failed
 */

list_t *add_node(list_t **head, const char *str)
{
	char *duplicate;
	int length;
	list_t *new_head;

	new_head = malloc(sizeof(list_t));
	if (new_head == NULL)
		return (NULL);
	duplicate = strdup(str);
	if (duplicate == NULL)
	{
		free(new_head);
		return (NULL);
	}
	for (length = 0; str[length];)
		length++;

	new_head->str = duplicate;
	new_head->len = length;
	new_head->next = *head;

	*head = new_head;

	return (new_head);
}

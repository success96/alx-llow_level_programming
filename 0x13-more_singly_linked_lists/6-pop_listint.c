#include "lists.h"
/**
 * pop_listint - deleted the head node of a list
 * @head: pointer to the list
 * Return: n or 0 if empty
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int gvb;

	if (*head == NULL)
		return (0);
	tmp = *head;
	gvb = (*head)->n;
	*head = (*head)->next;

	free(tmp);
	return (gvb);
}

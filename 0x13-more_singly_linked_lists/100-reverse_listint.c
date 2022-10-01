#include "lists.h"
/**
 * reverse_listint - reverse a list
 * @head: pointer to listint_t
 * Return: pointer to first node of the rev list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *front, *back;

	if (head == NULL || *head == NULL)
		return (NULL);
	back = NULL;
	while ((*head)->next != NULL)
	{
		front = (*head)->next;
		(*head)->next = back;
		back = *head;
		*head = front;
	}

	(*head)->next = back;

	return (*head);
}

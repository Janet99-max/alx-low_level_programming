#include "lists.h"
/**
 * pop_listint - function that returns the deleted head node
 * @head: argument taken by the function
 * Return: the data in the head node
 */
int pop_listint(listint_t **head)
{
	if (*head == 0)
	{
		return (0);
	}
	else
	{
		listint_t *nextnode = *head;
		int retdata = nextnode->n;

		*head = (*head)->next;
		free(nextnode);
		return (retdata);
	}
}

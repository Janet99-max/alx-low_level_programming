#include "lists.h"
/**
 * free_listint2 - a function that frees linked list memory
 * @head: object
 */
void free_listint2(listint_t **head)
{
	while (*head != 0)
	{
		listint_t *tem = *head;

		*head = (*head)->next;
		free(tem);
	}
	*head = 0;
}


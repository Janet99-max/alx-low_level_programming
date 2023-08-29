#include "lists.h"
/**
 * free_listint - main function
 * @head - pointer
 */
void free_listint(listint_t *head)
{
	while (head != 0)
	{
		listint_t *temp = head;
		head = head->next;
		free(temp);
	}
}

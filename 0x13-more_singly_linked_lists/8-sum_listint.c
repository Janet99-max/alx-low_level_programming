#include "lists.h"
/**
 * sum_listint - function that add nodes
 * @head: pointer
 * Return: the sum of the nodes
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == 0)
	{
		return (0);
	}
	while (head != 0)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}

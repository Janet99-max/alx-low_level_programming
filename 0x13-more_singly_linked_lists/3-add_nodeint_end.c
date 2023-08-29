#include "lists.h"
/**
 * add_nodeint_end - adds new node at the end of the node
 * @head: pointer to pointer
 * @n: new data
 * Return: new element at the end
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *endnode = (listint_t *)malloc(sizeof(listint_t));
	listint_t *temp = *head;

	if (endnode == NULL)
	{
		return (NULL);
	}
	endnode->n = n;
	endnode->next = 0;
	if (*head == NULL)
	{
		*head = endnode;
	}
	else
	{
		while (temp->next != 0)
		{
			temp = temp->next;
		}
		temp->next = endnode;
	}
	return (endnode);
}

#include "lists.h"
/**
 * add_nodeint - function that add a new node at the start of a linked list
 * @head: pointer to a pointer in struct
 * @n: the data
 * Return: a new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode = (listint_t *)malloc(sizeof(listint_t));

	if (newnode == NULL)
	{
		return (NULL);
	}
	newnode->n = n;
	newnode->next = *head;
	*head = newnode;
	return (newnode);
}

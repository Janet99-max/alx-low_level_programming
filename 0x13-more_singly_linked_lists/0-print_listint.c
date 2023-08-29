#include "lists.h"
/**
 * print_listint - a function that prints elements in a linked list
 * @h:  pointer to node
 * Return: no of elements in a linked list
 * /
 */
size_t print_listint(const listint_t *h)
{
	size_t node = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		node++;
	}
	return (node);
}

#include "lists.h"
/**
 * get_nodeint_at_index - function
 * @head: pointer object
 * @index: position
 * Return: the node at nth index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	index = 0;

	while (head != 0)
	{
		unsigned int i = 0;

		if (i == index)
		{
			return (head);
		}
		head = head->next;
		i++;
	}
	return (NULL);
}

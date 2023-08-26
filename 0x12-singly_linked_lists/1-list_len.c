#include "lists.h"
/**
 * list_len - returns the number of elements
 * @h:object
 * Return: always 0
 */
size_t list_len(const list_t *h)
{
	size_t length = 0;

	while (h)
	{
		length++;
		h = h->next;
	}
	return (length);
}

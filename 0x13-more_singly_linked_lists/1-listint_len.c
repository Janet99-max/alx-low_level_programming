#include "lists.h"
/**
 * listint_len - func that returns number  of nodes
 * @h: pointer to structure
 * Return: number of elemenets in the node
 */
size_t listint_len(const listint_t *h)
{
	size_t ncount = 0;

	while (h != NULL)
	{
		h = h->next;
		ncount++;
	}
	return (ncount);
}

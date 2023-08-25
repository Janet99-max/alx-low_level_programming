#include "lists.h"
/**
*print_list - our function
*@h: pointer
*Return: the no of elements
*/
size_t print_list(const list_t *h)
{
	size_t numb_count = 0;

	while (h)
	{
		if (h->str == 0)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		h = h->next;
		numb_count++;
	}
	return (numb_count);
}

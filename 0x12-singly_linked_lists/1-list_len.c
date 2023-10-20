#include "lists.h"

/**
 * list_len - a function that returns the number of elements in a linked list.
 * @h: pointer to the first node
 *
 * Return: size of list
 */
size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		h = h->next;
		n++;
	}
	return (n);
}

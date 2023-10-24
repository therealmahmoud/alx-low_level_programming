#include "lists.h"

/**
 * print_listint - a function that prints a linked list
 * @h: pointer to the head
 *
 * Return: number of nodes in linked list
 */
size_t print_listint(const listint_t *h)
{
	size_t n = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		n++;
	}
	return (n);
}

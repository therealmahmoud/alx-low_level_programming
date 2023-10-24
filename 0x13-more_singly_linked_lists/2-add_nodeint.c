#include "lists.h"

/**
 * add_nodeint - Adds a new node at the beginning
 *               of a listint_t list.
 * @head: A pointer to the address of the
 *        head of the listint_t list.
 *
 * @n: The integer for the new node to contain.
 * Return: address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *neww;

	neww = malloc(sizeof(listint_t));

	if (!head || !neww)
		return (NULL);

	neww->n = n;
	neww->next = *head;

		*head = neww;
	return (neww);
}

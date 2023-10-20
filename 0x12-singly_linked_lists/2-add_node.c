#include"lists.h"

/**
 * add_node - Adds a new node at the beginning
 *            of a list_t list.
 * @head: A head pointer of the list_t list.
 * @str: The string to be added to the list_t list.
 *
 * Return: If the function fails - NULL.
 *    Otherwise - the address of the new element.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int len = 0;

	while (str[len])
		len++;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);
	new->str = dup;
	new->len = len;
	new->next = *head;

	*head = new;

	return (new);
}

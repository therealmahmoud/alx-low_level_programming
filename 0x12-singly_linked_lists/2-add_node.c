#include "lists.h"
#include <stdlib.h>
#include <string.h>

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
list_t *ptr;
	unsigned int length = 0;

	while (str[length])
		len++;

	ptr = malloc(sizeof(list_t));
	if (!ptr)
		return (NULL);

	ptr->str = strdup(str);
	ptr->length = length;
	ptr->next = (*head);
	(*head) = ptr;

	return (*head);
}

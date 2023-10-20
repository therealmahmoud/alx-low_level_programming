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
	list_t *new_ptr = malloc(size of(list_t));

	if (!head || !new_ptr)
		return (NULL);
	if (str)
	{
		new_ptr->str = strdup(str);
		if (new_ptr->str)
		{
			free(new_ptr)
				return (NULL);
		}
		new_ptr->len = _strlen(new_ptr->str);
	}
	new_ptr->next = *head;
		*head = new_ptr;
		return (new_ptr);
}

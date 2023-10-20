#include "lists.h"
#include <stdio.h>

/**
 * _strlen - return length of string
 * @s: string whose length to be checked
 *
 * Return: integer length of the string
 */
int _strlen(char *s)
{
	int n = 0;

	if (!s)
		return (0);
	while (*s++)
		n++;
	return (n);
}

/**
 * print_list -  a function that prints all the elements of a list_t list.
 * @h: pointer to the first node
 *
 * Return: size of list
 */
size_t print_list(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");

		else
			printf("[%d] %s\n", h->len, h->str);

		n++;
		h = h->next;
	}
		return (n);

}
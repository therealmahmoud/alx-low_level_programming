#include "main.h"

/**
 * print_alphabet - utilizes the _putchar to print the alphabet in lowercase
 *
 */

void print_alphabet(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		_putchar(ch);
	_putchar('\n');
}

#include "main.h"

/**
 * print_line - printing lines
 * @n: number of times
 *
 * Return: always 0 (success)
 */

void print_line(int n)
{
	int line;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (line = 1; line <= n; line++)
			_putchar('_');
		_putchar('\n');

	}
}

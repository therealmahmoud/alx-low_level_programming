#include "main.h"

/**
 * print_square - prints a square of size size
 * @size: size of the square
 *
 * Return: always 0 (success)
 */

void print_square(int size)
{
	int rows, columns;

	for (rows = 1; rows <= size; rows++)
	{
		for (colums = 1; columns <= size; columns++)
			_putchar('#');
		_putchar('\n');
	}
	else
		_putchar('\n');
}

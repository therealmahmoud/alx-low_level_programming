#include "search_algos.h"

/**
 * min - Returns the minimum of two integers
 *
 * @a: First integer
 * @b: Second integer
 *
 * Return: The minimum of @a and @b
 */

int min(int a, int b)
{
	if (a < b)
		return (a);
	else
		return (b);
}

/**
 * jump_search - Searches for a value in a
 * sorted array using jump search algorithm
 *
 * @array: Pointer to the first element of the array
 * @size: Number of elements in the array
 * @value: Value to search for
 *
 * Return: Index of the first occurrence of @value in @array,
 * or -1 if not found
 */

int jump_search(int *array, size_t size, int value)
{
	size_t prev = 0;
	int step = sqrt(size);
	int div = sqrt(size);

	printf("Value checked array[%d] = [%d]\n", array[prev], array[prev]);
	while (array[min(step, size)] < value)
	{
		prev = step;
		step += sqrt(size);
		printf("Value checked array[%d] = [%d]\n", array[prev], array[prev]);

		if (prev >= size)
		{
			return (-1);
		}
	}

		printf("Value found between indexes [%d] and [%d]\n",
		array[step - div], array[step]);
	while (array[prev] < value)
	{
		printf("Value checked array[%d] = [%d]\n", array[prev], array[prev]);
		prev++;
		if (array[prev] == value)
		{
			printf("Value checked array[%d] = [%d]\n", array[prev], array[prev]);
		}
	}

	if (array[prev] == value)
	{
		return (prev);
	}

	return (-1);
}

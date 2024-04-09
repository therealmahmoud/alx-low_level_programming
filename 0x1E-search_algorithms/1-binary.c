#include "search_algos.h"

/**
 * binary_search - Searches for a value in a sorted array
 * using binary search algorithm
 *
 * @array: Pointer to the first element of the array
 * @size: Number of elements in the array
 * @value: Value to search for
 *
 * Return: Index of the first occurrence of
 * @value in @array, or -1 if not found
 */
int binary_search(int *array, size_t size, int value)
{
	size_t l, h, i;
	int mid;

	if (array == NULL)
	{
		return (-1);
	}
	l = 0;
	h = size - 1;
	while (l <= h)
	{
		printf("Searching in array: ");
		for (i = l; i < h; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);
		mid = (l + h) / 2;
		if (array[mid] > value)
		{
			h = mid - 1;
		}
		if (array[mid] < value)
		{
			l = mid + 1;
		}
		if (array[mid] == value)
			return (mid);
	}
	return (-1);
}

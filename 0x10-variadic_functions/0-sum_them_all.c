#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - a function returns the sum of all its parameters.
 *
 * @n: numb of valus
 * @...: valus numb
 *
 * Return: the sum of all its parameters
 *		if n == 0, return 0
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int result;
	va_list sum;

	if (n == 0)
		return (0);

	va_start(sum, n);

	for (i = 0; i < n; i++)
		result += va_arg(sum, int);
	va_end(sum);
	return (result);
}

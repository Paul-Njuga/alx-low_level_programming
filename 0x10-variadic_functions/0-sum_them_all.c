#include "variadic_functions.h"

/**
 * sum_them_all - function that returns the sum of all its parameters
 * @n: variable to be initialized
 *
 * Return: sum of all args
 */
int sum_them_all(const unsigned int n, ...)
{
	if (n == 0)
		return (0);
	unsigned int i;
	int sum = 0;
	va_list list;

	va_start(list, n);

	for (i = 0; i < n; i++)
		sum += va_arg(list, int);

	va_end(list);

	return (sum);
}

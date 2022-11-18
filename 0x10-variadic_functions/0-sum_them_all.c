#include "variadic_functions.h"

/**
 * sum_them_all - function that returns the sum of all its parameters
 * @n: variable to be initialized
 *
 * Return: sum of all args
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int index;
	int sum = 0;
	va_list ptr;

	va_start(ptr, n);

	for (index = 0; index < n; index++)
	{
		sum = sum + var_arg(ptr, int);
	}

	va_end(ptr);

	return (sum);
}

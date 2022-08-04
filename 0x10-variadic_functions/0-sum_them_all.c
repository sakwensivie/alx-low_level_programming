#include"variadic_functions.h"

/**
 * sum_them_all - sum all the provided arguments
 * @n: input as integer, the number of arguments provided
 * Return: the sum of the numbers
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum;
	va_list ap;

	if (n == 0)
		return (0);

	va_start(ap, n);
	for (i = 0; i < n; i++)
		sum += va_args(ap, int);
	va_end(ap);
	return (sum);
}

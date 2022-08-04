#include"variadic_functions.h"

/**
 * print_numbers - prints a bunch of numbers
 * @separator: the seperator as a string
 * @n: size of the arguments
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);

	if (separator == NULL)
		return;

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));
		if (i == (n - 1))
			printf("\n");
		else
			printf("%s", separator);
	}
	va_end(args);
}

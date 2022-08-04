#include"variadic_functions.h"

/**
 * print_strings - print strings
 * @separator: the separator
 * @n: size
 * Return: none
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;
	char *str;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(args, char *);

		printf("%s", str ? str : "(nil)");
		if (separator && (i < (n - 1)))
		{
			printf("%s", separator);
		}
	}
	putchar('\n');
	va_end(args);
}

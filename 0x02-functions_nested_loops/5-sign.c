#include"main.h"
/**
 * print_sign - checks for the sign of a number
 *
 *@n: input number as integer.
 *
 * Return: 1 if + or 0 if 0 and -1 if -
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(8);
		return (0);
	}
}

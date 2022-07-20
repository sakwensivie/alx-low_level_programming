#include"main.h"
/**
 * _puts_recursion - prints a string
 * @s: input as a string
 * Return: none
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	else
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}

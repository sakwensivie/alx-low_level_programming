#include"main.h"

/**
 * _puts - prints a string
 *
 * @str: input and s string
 * Return: none
 */
void _puts(char *str)
{
	int i;

	i = 0;

	while (1)
	{
		if ((str[i]) != ('\0'))
		{
			_putchar(str[i]);
		}
		else
		{
			break;
		}
		i++;
	}
	_putchar('\n');
}

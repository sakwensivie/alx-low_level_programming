#include"main.h"
/**
 * print_rev - prints a string in reverse followed by new line
 * @s: input as a character pointer
 * Return: none
 */
void print_rev(char *s)
{
	int i;

	i = 0;

	while (1)
	{
		if (s[i] != '\0')
			i++;
		else
			break;
	}
	while (1)
	{
		if (i != 0)
		{
			_putchar(s[i]);
		}
		else
		{
			_putchar(s[i]);
			break;
		}
		i--;
	}
	_putchar('\n');
}

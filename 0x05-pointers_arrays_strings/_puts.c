#include"main.h"
/**
 * _puts - prints a string
 * @str: input as a sting array
 * Return: nonr
 */
void _puts(char *str)
{
	int i;

	for (i = 0; i <= _strlen(str); i++)
	{
		if (str[i] != '\0')
			_putchar(str[i]);
	}
	_putchar('\n');
}

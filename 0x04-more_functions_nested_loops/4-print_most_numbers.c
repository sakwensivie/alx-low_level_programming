#include"main.h"
/**
 * print_most_numbers - prints most number
 * Return: none
 */
void print_most_numbers(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		if ((i != 2) || (i != 4))
		{
			_putchar(i);
		}
		else
			;
	}
	_putchar('\n');
}

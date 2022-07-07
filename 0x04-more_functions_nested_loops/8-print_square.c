#include"main.h"
/**
 * print_square - prints a square using #
 * @size: input as integer
 * Return: none
 */
void print_square(int size)
{
	int i, j;

	for (i = 1; i <= size; i++)
	{
		for (j = 0; j < size; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}


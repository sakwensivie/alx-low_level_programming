#include"main.h"
/**
 * print_triangle - prints a triangle with just ##
 * @size: input as in integer
 * Return none
 */
void print_triangle(int size)
{
	int i, j, k, pos;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= size; i++)
		{
			pos = size - i;
			for (j = 0; j < pos; j++)
			{
				_putchar(' ');
			}
			for (k = pos; k < size; k++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}

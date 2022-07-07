#include"main.h"
/**
 * more_numbers - prints more numbers
 * Return: none
 */
void more_numbers(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 48, j <= 62; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}

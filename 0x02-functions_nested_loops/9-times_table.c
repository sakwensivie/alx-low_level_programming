#include"main.h"
/**
 * times_table - prints the 9 by 9 times table
 *
 * Return: none.
 */
void times_table(void)
{
	int x, y;

	for (x = 48; x < 58; x++)
	{
		for (y = 48; y < 58; y++)
		{
			putchar(x * y);
		}
		putchar('\n');
	}
}

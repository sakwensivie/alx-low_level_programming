#include <stdio.h>
/**
 * main - Prints the alphabet.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		if (i == 'q' | i == 'e')
			;
		else
			putchar(i);
	}
	putchar('\n');
	return (0);
}

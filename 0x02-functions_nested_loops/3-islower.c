#include"main.h"
/**
 * _islower - Checks if a character is upper or lower.
 *
 * @c: input as integer.
 *
 * Return: 1 if lower or 0 if upper
 */
int _islower(int c)
{
	if ((c >= 97) && (c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

#include"main.h"
/**
 * _isalpha - Checks if a character is upper or lower.
 *
 * @c: input as integer.
 *
 * Return: 1 if upper or 0 if otherwise.
 */
int _isalpha(int c)
{
	if (((c >= 65) && (c <= 90)) || ((c >= 97) && (c <= 122)))
		return (1);
	else
		return (0);
}

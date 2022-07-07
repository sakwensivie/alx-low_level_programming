#include"main.h"
/**
 * _isdigit - checks if a character is a digit
 * @c: input as an integer
 * Return: 1 if it is a digit and 0 if it isn't
 */
int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
		return (1);
	else
		return (0);
}

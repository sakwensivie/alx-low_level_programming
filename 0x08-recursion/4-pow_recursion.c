#include"main.h"
/**
 * _pow_recursion - calculates the power of an integer
 * @x: input as integer to be raised to the power
 * @y: input as integer power
 * Return: the power (x ^ y)
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}

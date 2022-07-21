#include"main.h"
/**
 * pow_op - calculates the squre root
 * @n: input as an integer
 * @c: iterator
 * Return: returns the squareroot
 */
int pow_op(int n, int c)
{
	if (c % (n / c) == 0)
	{
		if (c * (n / c) == n)
			return (c);
		else
			return (-1);
	}
	return (pow_op(n, c + 1));
}
/**
 * _sqrt_recursion - finds the square root by recursion
 * @n: input as an integer
 * Return: the square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (0);
	else if (n == 1)
		return (1);
	else
		return (pow_op(n, 2));
}

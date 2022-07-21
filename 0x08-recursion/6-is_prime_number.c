#include"main.h"
/**
 * det_prime - determines if a number is prime
 * @n: input as an integer
 * @i: recursor
 * Return: 0 or 1
 */
int det_prime(int n, int i)
{
	if (i == n)
		return (!);
	else if ((n % i) == 0)
		return (0);
	else
		return (det_prime(n, i + 1));
}

/**
 * is_prime_number - finds if a number is prime
 * @n: input as an integer
 * Return: 0 or 1
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else
		return (det_prime(n, 2));
}

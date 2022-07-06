#include"main.h"
/**
 * largest_number - Prints the largest number out of 3 numbers.
 *
 * @a: first number
 * @b: second number
 * @c: third number
 * Return: the largest among the 3 values
 */
int largest_number(int a, int b, int c)
{
	int largest;

	if ((a > b) && (a > c))
		largest = a;
	else if ((b > a) && (b > c))
		largest = b;
	else if ((c > a) && (c > b))
		largest = c;

	return (largest);
}

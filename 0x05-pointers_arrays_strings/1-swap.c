#include"main.h"
/**
 * swap_int - swaps the values of 2 integers
 *
 * @a: input as an integer pointer
 * @b: input as an integer pointer
 *
 * Return: none
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = *a;
}

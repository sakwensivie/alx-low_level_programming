#include"3-calc.h"

/**
 * op_add - The addition function
 * @a: input as integer
 * @b: input as integer
 * Return: The sum of the two numbers
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - The subtraction function
 * @a: input as integer
 * @b: input as integer
 * Return: The difference of the two numbers
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - The multiplication function
 * @a: input as integer
 * @b: input as integer
 * Return: The product of the two numbers
 */

int op_mul(int a, int b)
{
	return (a * b);
}


/**
 * op_div - The addition function
 * @a: input as integer
 * @b: input as integer
 * Return: The sum of the two numbers
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - The mod function
 * @a: input as integer
 * @b: input as integer
 * Return: The mod of a int base b
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}

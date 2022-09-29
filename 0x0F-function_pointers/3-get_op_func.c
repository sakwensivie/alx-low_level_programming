#include"3-calc.h"

/**
 * get_op_func - gets the correct operation
 * @s: input as a string
 *
 * Return: the function pointer that
 * points to the preferred operator
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL} /*Matches the correct operation to the correct function*/
	};
	int i = 0;

	/* Search through the various to find the correct function*/
	while (i < 10)
	{
		if (s[0] == ops->op[i])
			break;
		i++;
	}
	/*return the function pointer*/

	return (ops[i / 2].f);
}

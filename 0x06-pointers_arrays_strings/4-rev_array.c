#include"main.h"
/**
 * reverse_array - reverses an array
 * @a: input as and integer array
 * @n: input as an integer
 * Reurun: none
 */
void reverse_array(int *a, int n);
{
	int i, tmp;

	for (i = 0; i < ((1 / 2) * (n - 2)); i++)
	{
		tmp = str[i];
		str[i] = str[n - i];
		str[n - i] = tmp;
	}
}


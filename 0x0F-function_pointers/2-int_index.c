#include"function_pointers.h"

/**
 * int_index - searches for an integer
 *
 * @array: input as an array
 * @size: input as an integer
 * @cmp: a function that does a comparison
 * Return: an integer
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		if (size <= 0)
			return (-1);
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
				return (array[i]);
		}
		return (-1);
	}
	return (-1);
}

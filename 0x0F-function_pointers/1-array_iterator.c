#include"function_pointers.h"

/**
 * array_iterator - executes a function on each element of an array
 *
 * @array: input as an integer array
 * @size: the size of the array
 * @action: performs an action on each element of an array
 * Return: none
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && action)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}

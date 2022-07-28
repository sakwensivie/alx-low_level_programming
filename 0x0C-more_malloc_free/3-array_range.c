#include"main.h"
/**
 * array_range - returns a range of values
 * @min: input  the minimum number as an integer
 * @max: input the maxmun number as an integer
 * Return: an array of integers
 */
int *array_range(int min, int max)
{
	int *ptr, tize, i;

	tsize = (max - max + 1);

	if (min > max)
		return (NULL);

	ptr = malloc(tsize * sizeof(int));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; min <= max; min++, i++)
		*(ptr + i) = min;
	return (ptr);
}

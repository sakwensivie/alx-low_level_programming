#include"main.h"

/**
 * _realloc - memory reallocation
 * @ptr: input as a void pointer
 * @new_size: input as an unsigned integer
 * @old_size: input as an unsigned integer
 * Return: a new pointer with the new allocated memory
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (ptr == NULL)
		ptr = malloc(new_size);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size == old_size)
		return (ptr);

	free(ptr);

	ptr = malloc(new_size);

	return (ptr);
}

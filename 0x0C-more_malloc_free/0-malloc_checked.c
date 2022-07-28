#include"main.h"

/**
 * malloc_checked - just a parody of the malloc function
 * @b: input as an integer(the number of bytes to allocate)
 * Return: a void pointer
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);
	return (ptr);
}

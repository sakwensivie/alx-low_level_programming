#include"main.h"
/**
 * _calloc - a parody of calloc
 * @nmemb: input as an integer
 * @size: input as an integer
 * Return: an void pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int i;

	if ((nmemb == 0) || (size == 0))
		return (NULL);
	ptr = malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);
	for (i = 0; i <= nmemb * size; i++)
		*(ptr + i) = 0;
	return (ptr);
}

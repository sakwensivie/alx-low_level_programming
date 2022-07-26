#include"main.h"

/**
 * create_array - creates an array of chars
 * @size: input as an integer
 * @c: input as a character
 * Return: the initializes array
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;

	if (size == 0)
		return (NULL);
	ptr = malloc(size * (sizeof(char)));
	if (ptr == NULL)
		return (NULL);
	*ptr = c;

	return (*ptr);
}
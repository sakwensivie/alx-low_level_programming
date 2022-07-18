#include"main.h"
/**
 * _memcpy - copys a memory address to a another variable
 * @dest: destination variable
 * @src: source variable
 * @n: input as integer
 * Return: array
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}

#include"main.h"

/**
 * _memset - copys a constant byte to a memory location
 * @s: input as a character pointer
 * @b: inpu as a character
 * @n: input as an unsigned integer
 * Return: a a pointer to an array
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}

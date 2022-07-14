#include"main.h"
/**
 * *_strncpy - copies a string
 * @dest: input as character array
 * @src: input as character array
 * @n: input as integer
 * Return: character array
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

       	for (i = 0; i < n && src[i] != '\0'; i++)
       		dest[i] = src[i];
	for ( ; i < n; i++)
	{
       		dest[i] = '\0';
	}
	return (dest);
}
